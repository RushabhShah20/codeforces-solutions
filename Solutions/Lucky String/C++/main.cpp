// Problem: Lucky String
// Link to the problem: https://codeforces.com/contest/110/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const string s = "abcd";
    string ans;
    for (ll i = 0; i < n / 4; i++)
    {
        ans += s;
    }
    ans += s.substr(0, n % 4);
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