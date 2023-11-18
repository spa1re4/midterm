#include <iostream>
using namespace std;
int isPrime(int N){
    if (N==1 or N == 2){
        return true;
    }
    else if(N%2 == 1){
        for(int i =3; i < N/2;i+=2){
            if(N%i==0){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int N;
    cin>>N;
    N++;
    while(isPrime(N)==false){
        N++;
    }
    cout<<N;
}
