// Problem: Ehab Is an Odd Person
// Link to the problem: https://codeforces.com/contest/1174/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] & 1 ? x = true : y = true;
    }
    if (x && y)
    {
        sort(a.begin(), a.end());
    }
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
    solve();
    return 0;
}