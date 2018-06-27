#include<iostream>

using namespace std;

int main(){
    long long N;
    int sum = 0;
    cin >> N;
    long long tmp = N;
    while(tmp>0){
        sum += tmp%10;
        tmp = tmp/10;
    }
    if(N%sum == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}