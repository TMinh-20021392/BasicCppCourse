#include <bits/stdc++.h>

using namespace std;
int find_index(int arr[], int n, int K)
{
    for (int i = 0; i < n; i++) {

        if (arr[i] == K)
            return i;

        else if (arr[i] > K)
            return i;
    }
    return n;
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cin>>k;
    sort(a,a+n);
    for(int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<endl<<find_index(a,n,k);
}
