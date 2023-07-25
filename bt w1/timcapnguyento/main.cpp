#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int n, c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(gcd(a[i],a[j])==1) {
                c++;
            }
        }
    }
    cout<<c;
}
