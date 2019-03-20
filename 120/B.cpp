#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;
int A,B,K,ans;

int main(){
    cin >> A >> B >> K;
    int count = 0;
    int MAX = max(A,B);
    for(int i=MAX;i >= 0;i--){
        if(A%i == 0 && B%i == 0){
            count++;
            if(count == K){
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}