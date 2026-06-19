// Problem: Stages
// Link to the problem: https://codeforces.com/contest/1011/problem/A
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
    vector<bool> a(26, false);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a'] = true;
    }
    ll x = 0;
    for (ll i = 0; i < 26;)
    {
        if (k == 0)
        {
            break;
        }
        if (a[i])
        {
            x += i + 1;
            k--;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    const ll ans = k == 0 ? x : -1;
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