// Problem: Appleman and Card Game
// Link to the problem: https://codeforces.com/contest/462/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (k >= a[i])
        {
            ans += a[i] * a[i];
            k -= a[i];
        }
        else
        {
            ans += k * k;
            break;
        }
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