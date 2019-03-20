#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

int A,B,C;

int main(){
    cin >> A >> B >> C;
    if(B >= A*C){
        cout << C << endl;
    }
    else{
        cout << B/A << endl;
    }
    return 0;
}