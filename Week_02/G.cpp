#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==0 || b==0){
            cout<<0<<endl;
        }
        else if(a>b && (b*3)<=a){
            cout<<b<<endl;
        }
        else if(a<b && (a*3)<=b){
            cout<<a<<endl;
        }
        else{
            cout<<(a+b)/4<<endl;
        }
    }
}