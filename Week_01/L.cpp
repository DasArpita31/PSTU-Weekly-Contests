#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=min(n,10);
        int b=n-a;
        cout<<b<<" "<<a<<endl;
    }
}
