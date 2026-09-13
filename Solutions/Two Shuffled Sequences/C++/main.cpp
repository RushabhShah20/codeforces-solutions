// Problem: Two Shuffled Sequences
// Link to the problem: https://codeforces.com/contest/1144/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    vector<ll> a, b;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == 1)
        {
            a.push_back(i.first);
        }
        else if (i.second == 2)
        {
            a.push_back(i.first);
            b.insert(b.begin(), i.first);
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    const ll x = a.size(), y = b.size();
    cout << x << endl;
    for (ll i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << y << endl;
    for (ll i = 0; i < y; i++)
    {
        cout << b[i] << " ";
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