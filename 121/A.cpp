#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int
#define ull unsigned long long int

#define INF 100000000000L

using namespace std;

int main(){
    int H,W,h,w;
    cin >> H >> W >> h >> w ;
    cout << H*W-h*W-H*w+h*w << endl;
    return 0;
}