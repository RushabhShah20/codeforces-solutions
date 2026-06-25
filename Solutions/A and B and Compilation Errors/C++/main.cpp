// Problem: A and B and Compilation Errors
// Link to the problem: https://codeforces.com/contest/519/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    unordered_map<ll, ll> b;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        b[x]++;
    }
    for (const pair<ll, ll> i : a)
    {
        if (i.second == b[i.first] + 1)
        {
            cout << i.first << endl;
            break;
        }
    }
    unordered_map<ll, ll> c;
    for (ll i = 0; i < n - 2; i++)
    {
        ll x;
        cin >> x;
        c[x]++;
    }
    for (const pair<ll, ll> i : b)
    {
        if (i.second == c[i.first] + 1)
        {
            cout << i.first << endl;
            break;
        }
    }
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