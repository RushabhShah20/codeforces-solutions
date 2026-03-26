// Problem: Playing with Dice
// Link to the problem: https://codeforces.com/contest/378/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> ans(3, 0);
    for (ll i = 1; i <= 6; i++)
    {
        if (abs(a - i) > abs(b - i))
        {
            ans[2]++;
        }
        else if (abs(a - i) < abs(b - i))
        {
            ans[0]++;
        }
        else
        {
            ans[1]++;
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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