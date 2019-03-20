#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <map>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

ll N,M;
vector<pair<ll,ll>> S;

int main(){
    cin >> N >> M;
    S.resize(N);
    for(int i=0;i<N;i++){
        ll a,b;
        cin >> a >> b;
        S[i] = make_pair(a,b);
    }
    sort(S.begin(),S.end());
    ll count =0;
    ll sum = 0;
    for(int i=0;i<N;i++){
        ll a,b;
        a = S[i].first;
        b = S[i].second;
        if(count + b < M){
            sum += a*b;
            count += b;
            continue;
        }
        sum += a*(M-count);
        break;
    }
    cout << sum << endl;
    return 0;
}