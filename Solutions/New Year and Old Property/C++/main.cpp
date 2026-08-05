// Problem: New Year and Old Property
// Link to the problem: https://codeforces.com/contest/611/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &v)
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    for (const ll i : v)
    {
        ans += i >= a && i <= b ? 1 : 0;
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
    vector<ll> v;
    for (ll i = 2; i < 64; i++)
    {
        for (ll j = 1; j < i; j++)
        {
            string s(i, '1');
            s[j] = '0';
            v.push_back(stoll(s, nullptr, 2));
        }
    }
    solve(v);
    return 0;
}