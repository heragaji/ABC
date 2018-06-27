#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int mindex = 0;
    int min = 100001;
    for(int i= 0;i<N;i++){
        int tmp;
        cin >> tmp;
        if(tmp<min){
            mindex = i;
            min = tmp;
        }
    }
    if(K==N){
        cout << 1 << endl;
        return 0;
    }
    int leftindex = 1;
    int leftsum = 0;
    if(mindex == 0 || mindex == 1){
        leftindex = K-1;
        leftsum = 1;
    }
    else{
        while(leftindex < mindex){
            leftindex += (K-1);
            leftsum += 1;
        }
        leftindex -= 1;
    }
    int leftresult =  ceil((N-1-leftindex)/float(K-1)) + leftsum;
    int rightindex = 1;
    int rightsum = 0;
    if(N-1-mindex == 0 || N-1-mindex == 1){
        rightindex = K-1;
        rightsum = 1;
    }
    else{
        while(rightindex < N-1-mindex){
            rightindex += (K-1);
            rightsum += 1;
        }
        rightindex -= 1;
    }    
    int rightresult =  ceil((N-1-rightindex)/float(K-1)) + rightsum;
    if(leftresult > rightresult){
        cout << rightresult <<endl;
    }
    else {
        cout << leftresult << endl;
    }
    return 0;

}