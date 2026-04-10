#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);
    }
    int k=max(mx,((2*sum)/n+1));
    cout<<k<<endl;
}
