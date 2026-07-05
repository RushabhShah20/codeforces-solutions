// Problem: Diversity
// Link to the problem: https://codeforces.com/contest/844/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    const ll n = s.size();
    if (n < k)
    {
        cout << "impossible" << endl;
        return;
    }
    const unordered_set<char> t(s.begin(), s.end());
    const ll m = t.size(), ans = max(0LL, k - m);
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