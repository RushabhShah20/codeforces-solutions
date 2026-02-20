// Problem: Favorite Sequence
// Link to the problem: https://codeforces.com/contest/1462/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b(n), a;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        a.push_back(b[i]);
        i++;
        if (i <= j)
        {
            a.push_back(b[j]);
            j--;
        }
    }
    for (const ll c : a)
    {
        cout << c << " ";
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