#include<iostream>


using namespace std;

int main(){
    int N,M,A[9],W[9];
    int* Ws = {0,2,5,5,4,5,6,3,7,6};
    cin >> N >> M ;
    int min_W = 8;
    int min_A = 10;
    for(int i= 0;i < M;i++){
        cin >> A[i];
        W[i] = Ws[A[i]];
        if(W[i] < min_W){
            min_W = W[i];
            min_A = A[i];
        }
        else if (W[i] == min_W){
            if(min_A < A[i]){
                min_W = W[i];
                min_A = A[i];
            }
        }
    }
    int X = N/min_W;
    int Y = N%min_W;
    



}
