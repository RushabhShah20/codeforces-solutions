// Problem: Be Positive
// Link to the problem: https://codeforces.com/contest/2149/problem/A
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
        ll zeroes = 0, negOnes = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                zeroes++;
            }
            else if (a[i] == -1)
            {
                negOnes++;
            }
        }
        ll ans = (zeroes + ((negOnes % 2 == 0 ? 0 : 1) * 2));
        cout << ans << endl;
    }
    return 0;
}
