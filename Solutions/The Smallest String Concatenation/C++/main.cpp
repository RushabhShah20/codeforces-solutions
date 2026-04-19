// Problem: The Smallest String Concatenation
// Link to the problem: https://codeforces.com/contest/632/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end(), [](const string &a, const string &b)
         { return a + b < b + a; });
    string ans;
    for (ll i = 0; i < n; i++)
    {
        ans.append(s[i]);
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