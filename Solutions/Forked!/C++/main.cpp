// Problem: Forked!
// Link to the problem: https://codeforces.com/contest/1904/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<ll, ll>> s, t;
    s.insert({xk - b, yk - a});
    s.insert({xk - b, yk + a});
    s.insert({xk - a, yk - b});
    s.insert({xk - a, yk + b});
    s.insert({xk + a, yk - b});
    s.insert({xk + a, yk + b});
    s.insert({xk + b, yk - a});
    s.insert({xk + b, yk + a});
    t.insert({xq - b, yq - a});
    t.insert({xq - b, yq + a});
    t.insert({xq - a, yq - b});
    t.insert({xq - a, yq + b});
    t.insert({xq + a, yq - b});
    t.insert({xq + a, yq + b});
    t.insert({xq + b, yq - a});
    t.insert({xq + b, yq + a});
    vector<pair<ll, ll>> v;
    set_intersection(s.begin(), s.end(), t.begin(), t.end(), back_inserter(v));
    const ll ans = v.size();
    cout << ans << endl;
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