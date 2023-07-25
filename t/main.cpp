#include <bits/stdc++.h>
using namespace std;
int s(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return (arr, l, mid - 1, x);
		return s(arr, mid + 1, r, x);
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
    cout<<"\n"<<s(a,0, n-1,x);
    return 0;
}
