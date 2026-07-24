// Problem: Life Without Zeros
// Link to the problem: https://codeforces.com/contest/75/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

string convert(ll &n)
{
    string s;
    while (n > 0)
    {
        const ll k = n % 10;
        if (k != 0)
        {
            s.append(1, k + '0');
        }
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = a + b;
    const string d = convert(a), e = convert(b), f = convert(c);
    const ll x = stoll(d), y = stoll(e), z = stoll(f);
    const string ans = x + y == z ? "YES" : "NO";
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