// Problem: Bear and Three Balls
// Link to the problem: https://codeforces.com/contest/653/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    const vector<ll> a(s.begin(), s.end());
    const ll m = a.size();
    for (ll i = 1; i < m - 1; i++)
    {
        if (a[i] == a[i - 1] + 1 && a[i] == a[i + 1] - 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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