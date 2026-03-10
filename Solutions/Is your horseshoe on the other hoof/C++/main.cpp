// Problem: Is your horseshoe on the other hoof?
// Link to the problem: https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    unordered_set<ll> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    const ll ans = 4 - s.size();
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