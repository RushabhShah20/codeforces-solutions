// Problem: Prefix and Suffix Array
// Link to the problem: https://codeforces.com/contest/1794/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool check(const string &s1, const string &s2, const ll n, const ll m)
{
    if (n != m)
    {
        return false;
    }
    ll i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (s1[i] != s2[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(2 * n - 2);
    for (ll i = 0; i < 2 * n - 2; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end(), [](const string &a, const string &b)
         {
        if(a.size()==b.size()){return a<b;}return a.size()<b.size(); });
    for (ll i = 1; i < 2 * n - 2; i += 2)
    {
        const ll x = s[i].size(), y = s[i - 1].size();
        if (!check(s[i], s[i - 1], x, y))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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