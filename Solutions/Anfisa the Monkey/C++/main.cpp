// Problem: Anfisa the Monkey
// Link to the problem: https://codeforces.com/contest/44/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, a, b;
    cin >> k >> a >> b;
    string s;
    cin >> s;
    const ll n = s.size();
    if (n < k * a || n > k * b)
    {
        cout << "No solution" << endl;
        return;
    }
    vector<string> ans(k, string(n / k, ' '));
    ll x = n % k;
    for (ll i = 0; i < k; i++)
    {
        if (x > 0)
        {
            ans[i].append(1, ' ');
            x--;
        }
        else
        {
            break;
        }
    }
    ll y = 0;
    for (ll i = 0; i < k; i++)
    {
        const ll m = ans[i].size();
        ans[i] = s.substr(y, m);
        y += m;
    }
    for (ll i = 0; i < k; i++)
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