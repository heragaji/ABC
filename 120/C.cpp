#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

string S;

int main(){
    cin >> S;
    int c_r = 0,c_b = 0;
    for(int i=0;i<S.size();i++){
        if(S[i] == '0') c_r++;
        else c_b++;
    } 
    cout << 2*min(c_r,c_b) << endl;
    return 0;

}