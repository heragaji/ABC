#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    vector<int> num;
    ll score;

    UnionFind(ll N) : par(N) { //最初は全てが根であるとして初期化
        num.resize(N);
        for(int i = 0; i < N; i++) {
            par[i] = i;
            num[i] = 1;
        }
        score = N*(N-1)/2;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        ll num_x = num[rx];
        ll num_y = num[ry];
        score -= num_x * num_y;
        num[rx] = num_x+num_y; 
        num[ry] = num_x+num_y;
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

ll N,M;
vector<int> A,B;

int main(){
    cin >> N >> M;
    UnionFind U(N);
    A.resize(M);
    B.resize(M);
    vector<ll> ans(M);
    for(int i = 0;i < M;i++){
        cin >> A[i] >> B[i];
    }
    for(int i=M-1;i >= 0; i--){
        ans[i] = U.score;
        U.unite(A[i]-1,B[i]-1);
    }
    for(int i= 0;i < M ;i++){
        cout << ans[i] << endl;
    }
    return 0;
}