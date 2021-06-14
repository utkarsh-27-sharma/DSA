#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        cout << (Xa / xa) + (Xb / xb) << endl;
    }
    return 0;
}
