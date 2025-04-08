// Problem: Olympiad Date
// Link to the problem: https://codeforces.com/contest/2091/problem/A
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
        ll ans = 0;
        ll count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_5 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count_0++;
            }
            else if (a[i] == 1)
            {
                count_1++;
            }
            else if (a[i] == 2)
            {
                count_2++;
            }
            else if (a[i] == 3)
            {
                count_3++;
            }
            else if (a[i] == 5)
            {
                count_5++;
            }
            if (count_0 >= 3 && count_1 >= 1 && count_2 >= 2 && count_3 >= 1 && count_5 >= 1)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}