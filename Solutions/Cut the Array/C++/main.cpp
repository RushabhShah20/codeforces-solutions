// Problem: Cut the Array
// Link to the problem: https://codeforces.com/contest/2144/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool x = false;
        ll y = 0, z = 0;
        for (ll l = 1; l <= n - 2 && x == false; l++)
        {
            for (ll r = l + 1; r <= n - 1 && x == false; r++)
            {
                ll s1 = 0, s2 = 0, s3 = 0;
                for (ll i = 0; i < l; i++)
                {
                    s1 += a[i];
                }
                s1 %= 3;
                for (ll i = l; i < r; i++)
                {
                    s2 += a[i];
                }
                s2 %= 3;
                for (ll i = r; i < n; i++)
                {
                    s3 += a[i];
                }
                s3 %= 3;
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s3 != s1))
                {
                    y = l;
                    z = r;
                    x = true;
                }
            }
        }
        if (x == true)
        {
            cout << y << " " << z << endl;
        }
        else
        {
            cout << "0 0" << endl;
        }
    }
    return 0;
}
