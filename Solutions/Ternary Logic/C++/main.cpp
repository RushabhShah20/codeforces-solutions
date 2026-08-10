// Problem: Ternary Logic
// Link to the problem: https://codeforces.com/contest/136/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

string toTernary(ll n)
{
    if (n == 0)
    {
        return "0";
    }
    string ans;
    while (n > 0)
    {
        ans.append(1, '0' + (n % 3));
        n /= 3;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    string x = toTernary(a), y = toTernary(b);
    const ll n = x.size(), m = y.size();
    if (n > m)
    {
        y.insert(0, string(n - m, '0'));
    }
    else
    {
        x.insert(0, string(m - n, '0'));
    }
    const ll k = max(m, n);
    string z(k, '0');
    for (ll i = 0; i < k; i++)
    {
        z[i] = ((((y[i] - '0') - (x[i] - '0')) % 3) + 3) % 3 + '0';
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += (z[i] - '0') * powl(3, k - i - 1);
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