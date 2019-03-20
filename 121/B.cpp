#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

int main(){
    ll N,M,C;
    cin >> N >> M >> C;
    vector<ll> B(M);
    vector<vector<ll>> A;
    A = vector<vector<ll>>(N, vector<ll>(M, 0));
    for(int i= 0;i<M;i++){
        cin >> B[i];
    }
    int count = 0;
    for(int i=0;i<N;i++){
        ll sum = 0;
        for(int j=0;j<M;j++){
            ll a;
            cin >> a;
            sum += a*B[j];
        }
        sum += C;
        if(sum > 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}