#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        while(a % 2 == 0){
            sum += 1;
            a = a/2;
        }
    }
    cout << sum <<endl;
    return 0;
}