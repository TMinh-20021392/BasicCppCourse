#include <bits/stdc++.h>
using namespace std;
void s(int a[], int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0) cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    s(a,n);
    return 0;
}
