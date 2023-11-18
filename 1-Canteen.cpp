cpp
#include <iostream>
using namespace std;
int main(){
    int A,B,N;
    cin>>A>>B>>N;
    A = A*N;
    B = B*N;
    A += B/100;    
    B = B%100; 
    cout<<A <<" som and "<<B<< " tyiyn";
}
