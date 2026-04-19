// Problem: Co-prime Array
// Link to the problem: https://codeforces.com/contest/660/problem/A
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
    vector<ll> ans;
    ll k = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ans.push_back(a[i]);
        if (__gcd(a[i], a[i + 1]) != 1)
        {
            ans.push_back(1);
            k++;
        }
    }
    ans.push_back(a[n - 1]);
    cout << k << endl;
    for (ll i = 0; i < n + k; i++)
    {
        cout << ans[i] << " ";
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