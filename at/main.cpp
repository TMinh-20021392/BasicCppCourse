#include <bits/stdc++.h>
using namespace std;
int s(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return i;
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<"\n"<<s(a,n,x);
    return 0;
}

