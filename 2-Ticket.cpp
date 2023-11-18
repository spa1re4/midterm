#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a,b,c,d,e,f;
    a = N/100000;
    b = (N/10000)%10;
    c = (N/1000)%10;
    d = (N/100)%10;
    e = (N/10)%10;
    f = N%10;
    int sum1, sum2;
    sum1 = a+b+c;
    sum2 = d+e+f;
    if(sum1 == sum2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
