#include<iostream>
using namespace std;
int main(){
    int n;
    int odd,even;
    even = 0;
    odd=0;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0){
            even+=1;
        }
        else{
            odd +=1;
        }
    }
    cout <<"Odds : "<<odd<<endl;
    cout <<"Evens : "<<even<<endl;
}
