// Problem: The Rank
// Link to the problem: https://codeforces.com/contest/1017/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back({i + 1, a + b + c + d});
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         { if(x.second==y.second){return x.first<y.first;}return x.second > y.second; });
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first == 1)
        {
            cout << i + 1 << endl;
            return;
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