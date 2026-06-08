// Problem: Reverse a Permutation
// Link to the problem: https://codeforces.com/contest/2193/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = n, j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            mx--;
        }
        else
        {
            j = i;
            break;
        }
    }
    ll k = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            k = i;
            break;
        }
    }
    reverse(a.begin() + j, a.begin() + k + 1);
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}