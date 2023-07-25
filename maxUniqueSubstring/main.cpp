
#include <bits/stdc++.h>
using namespace std;

bool uniqueC(string s, int o,int k)
{
    for (int i = o; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (s[i] == s[j]) {
                return false;
            }
        }
    }
    return true;
}
int len(string s)
{
    int n = s.size();
    int l = 0;
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (uniqueC(s, i, j))
                l = max(l, j - i);
    return l;
}

int main()
{
    string str = "geeksaforgeeks";
    int l = len(str);
    cout<< l;
    return 0;
}
