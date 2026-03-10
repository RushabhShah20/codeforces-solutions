// Problem: Taxi
// Link to the problem: https://codeforces.com/contest/158/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, one = 0, two = 0, three = 0, four = 0, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            one++;
        }
        else if (x == 2)
        {
            two++;
        }
        else if (x == 3)
        {
            three++;
        }
        else
        {
            four++;
        }
    }
    ans += four;
    const ll x = min(three, one);
    ans += x;
    three -= x;
    one -= x;
    ans += three;
    ans += (two / 2);
    two %= 2;
    if (two == 0)
    {
        ans += ((one + 3) / 4);
    }
    else
    {
        ans += two;
        one -= 2;
        if (one > 0)
        {
            ans += ((one + 3) / 4);
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