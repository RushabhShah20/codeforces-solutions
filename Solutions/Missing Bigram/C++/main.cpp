// Problem: Missing Bigram
// Link to the problem: https://codeforces.com/contest/1618/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n - 2);
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> s[i];
    }
    string ans;
    ans.append(s[0]);
    for (ll i = 1; i < n - 2; i++)
    {
        if (s[i][0] == s[i - 1][1])
        {
            ans.append(1, s[i][1]);
        }
        else
        {
            ans.append(s[i]);
        }
    }
    if (ans.size() < n)
    {
        ans.append(1, 'a');
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}