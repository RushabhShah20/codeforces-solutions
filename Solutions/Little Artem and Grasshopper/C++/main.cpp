// Problem: Little Artem and Grasshopper
// Link to the problem: https://codeforces.com/contest/641/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_set<ll> t;
    ll x = 0;
    t.insert(x);
    while (x >= 0 && x < n)
    {
        if (s[x] == '<')
        {
            x -= a[x];
        }
        else
        {
            x += a[x];
        }
        if (t.count(x))
        {
            break;
        }
        t.insert(x);
        if (x < 0 || x >= n)
        {
            cout << "FINITE" << endl;
            return;
        }
    }
    cout << "INFINITE" << endl;
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