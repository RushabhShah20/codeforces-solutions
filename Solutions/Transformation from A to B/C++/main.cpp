// Problem: Transformation: from A to B
// Link to the problem: https://codeforces.com/contest/727/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> ans = {b};
    while (b > a)
    {
        if (!(b & 1))
        {
            b >>= 1;
        }
        else if (b % 10 == 1)
        {
            b /= 10;
        }
        else
        {
            break;
        }
        ans.push_back(b);
    }
    if (a == b)
    {
        cout << "YES" << endl;
        const ll n = ans.size();
        cout << n << endl;
        for (ll i = n - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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