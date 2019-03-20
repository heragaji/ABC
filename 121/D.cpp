#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;
ll A,B;
ll digit = 1;
ll val = 1;
ll ans = 0;

int main(){
    cin >> A >> B;
    A -= 1;
    ll a = 0;
    ll b = 0;
    if(A % 4 == 1 || A % 4 ==2){
        a = 1;
    }
    if(B % 4 == 1 || B % 4 ==2){
        b = 1;
    }
    ans += abs(a-b)*val;
    digit += 1;
    val *= 2;
    while(B >= val){
        a = 0;
        b = 0;
        if((A % (val*2)) >= val && (A%(val*2)) %2 == 0){
            a = 1;
        }
        if((B % (val*2)) >= val && (B%(val*2)) %2 == 0){
            b = 1;
        }
        //cout << a << b << endl;
        ans += abs(a-b)*val;
        digit += 1;
        val *= 2;
    }
    cout << ans << endl;
    return 0;
}