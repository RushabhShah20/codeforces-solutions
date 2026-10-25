// Problem: Balanced Shuffle (Easy)
// Link to the problem: https://codeforces.com/contest/1970/problem/A1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll z = 0;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = {z, i};
        z += s[i] == '(' ? 1 : -1;
    }
    sort(a.begin(), a.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         {
        if(x.first==y.first){return x.second>y.second;}return x.first<y.first; });
    string ans(n, ' ');
    for (ll i = 0; i < n; i++)
    {
        ans[i] = s[a[i].second];
    }
    cout << ans << endl;
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