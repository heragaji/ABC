#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int D,N;
    cin >> D >> N ;
    if(D==0 && N == 100){
        cout << 101 << endl;
        return 0;
    }
    if(D==1 && N == 100){
        cout << 10100 << endl;
        return 0;
    }
    if(D==2 && N == 100){
        cout << 1010000 << endl;
        return 0;
    }    
    int x = 1;
    for(int i= 0;i<D;i++){
        x = x*100;
    }
    cout << x*N << endl;
    return 0;
}