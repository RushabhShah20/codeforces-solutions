// Problem: Filya and Homework
// Link to the problem: https://codeforces.com/contest/714/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    vector<ll> a(s.begin(), s.end());
    const ll m = a.size();
    if (m <= 2)
    {
        cout << "YES" << endl;
        return;
    }
    if (m == 3)
    {
        sort(a.begin(), a.end());
        const string ans = a[0] + a[2] == 2 * a[1] ? "YES" : "NO";
        cout << ans << endl;
        return;
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