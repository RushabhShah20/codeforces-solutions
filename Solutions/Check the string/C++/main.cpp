// Problem: Check the string
// Link to the problem: https://codeforces.com/contest/960/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    if (s != t)
    {
        cout << "NO" << endl;
        return;
    }
    vector<ll> a(3);
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    const string ans = (a[0] == a[2] || a[1] == a[2]) && a[0] > 0 && a[1] > 0 && a[2] > 0 ? "YES" : "NO";
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