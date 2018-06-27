#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M ;
    vector<long long > v1 = vector<long long >(N);
    vector<long long > v2 = vector<long long >(N);
    vector<long long > v3 = vector<long long >(N);
    vector<long long > v4 = vector<long long >(N);
    vector<long long > v5 = vector<long long >(N);
    vector<long long > v6 = vector<long long >(N);
    vector<long long > v7 = vector<long long >(N);
    vector<long long > v8 = vector<long long >(N);
    for(int i= 0;i<N;i++){
        long long x,y,z;
        cin >> x>>y>>z;
        v1[i] = x+y+z;
        v2[i] = -x+y+z;
        v3[i] = x-y+z;
        v4[i] = x+y-z;
        v5[i] = -x-y+z;
        v6[i] = -x+y-z;
        v7[i] = x-y-z;
        v8[i] = -x-y-z;
    }
    sort(v1.begin(),v1.end(), std::greater<long long>());
    sort(v2.begin(),v2.end(), std::greater<long long>());
    sort(v3.begin(),v3.end(), std::greater<long long>());
    sort(v4.begin(),v4.end(), std::greater<long long>());
    sort(v5.begin(),v5.end(), std::greater<long long>());
    sort(v6.begin(),v6.end(), std::greater<long long>());
    sort(v7.begin(),v7.end(), std::greater<long long>());
    sort(v8.begin(),v8.end(), std::greater<long long>());
    long long max = 0;
    long long sum = 0;
    for(int j=0;j<M;j++){
        sum += v1[j];
    }
    if(max < sum){
        max = sum;
    }    
    sum = 0;
    for(int j=0;j<M;j++){
        sum += v2[j];
    }
    if(max < sum){
        max = sum;
    }    
    sum = 0;
    for(int j=0;j<M;j++){
        sum += v3[j];
    }
    if(max < sum){
        max = sum;
    }
    sum = 0;    
    for(int j=0;j<M;j++){
        sum += v4[j];
    }
    if(max < sum){
        max = sum;
    }
    sum = 0;    
    for(int j=0;j<M;j++){
        sum += v5[j];
    }
    if(max < sum){
        max = sum;
    } 
    sum = 0;   
    for(int j=0;j<M;j++){
        sum += v6[j];
    }
    if(max < sum){
        max = sum;
    }    
    sum = 0;
    for(int j=0;j<M;j++){
        sum += v7[j];
    }
    if(max < sum){
        max = sum;
    }    
    sum = 0;
    for(int j=0;j<M;j++){
        sum += v8[j];
    }
    if(max < sum){
        max = sum;
    }
    cout << max <<endl;
    return 0;
}