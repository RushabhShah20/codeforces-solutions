// Problem: Hotelier
// Link to the problem: https://codeforces.com/contest/1200/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans(10, '0');
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            ans[ans.find_first_of('0')] = '1';
        }
        else if (s[i] == 'R')
        {
            ans[ans.find_last_of('0')] = '1';
        }
        else
        {
            ans[s[i] - '0'] = '0';
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