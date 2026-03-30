// Problem: Soroban
// Link to the problem: https://codeforces.com/contest/363/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

string get(const ll n)
{
    string ans;
    switch (n)
    {
    case 1:
        ans = "O-|O-OOO";
        break;
    case 2:
        ans = "O-|OO-OO";
        break;
    case 3:
        ans = "O-|OOO-O";
        break;
    case 4:
        ans = "O-|OOOO-";
        break;
    case 5:
        ans = "-O|-OOOO";
        break;
    case 6:
        ans = "-O|O-OOO";
        break;
    case 7:
        ans = "-O|OO-OO";
        break;
    case 8:
        ans = "-O|OOO-O";
        break;
    case 9:
        ans = "-O|OOOO-";
        break;
    default:
        ans = "O-|-OOOO";
        break;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<string> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[i] = get(s[i] - '0');
    }
    reverse(ans.begin(), ans.end());
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
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