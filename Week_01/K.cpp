#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=1;i<n;i++){
        long long a;
        cin>>a;
        sum+=a;
    }
    long long s=(n*(n+1))/2;
    cout<<s-sum<<endl;
}