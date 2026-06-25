// Problem: Boys and Girls
// Link to the problem: https://codeforces.com/contest/253/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll a = max(m, n), b = min(m, n);
    const string s = n >= m ? "BG" : "GB";
    string ans;
    for (ll i = 0; i < b; i++)
    {
        ans.append(s);
    }
    ans.append(a - b, n >= m ? 'B' : 'G');
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}