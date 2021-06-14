#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MOD 1000000007

int p(int a, int b, int mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int num = p(2, n, MOD) - 1;
    std::cout << p(num, m, MOD) << ::endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    // t = 1;
    int _ = 1;
    while (t--)
    {
        // cout<<"Case #"<<_++<<": ";
        solve();
    }
    return 0;
}