// Problem: Given Length and Sum of Digits...
// Link to the problem: https://codeforces.com/contest/489/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

string smallest(const ll n, ll k)
{
    string ans(n, '0');
    ans[0] = '1';
    k--;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (ans[i] - '0' + k > 9)
        {
            k -= (9 - (ans[i] - '0'));
            ans[i] = '9';
        }
        else
        {
            ans[i] += k;
            break;
        }
    }
    return ans;
}

string largest(const ll n, ll k)
{
    string ans(n, '0');
    ans[0] = '1';
    k--;
    for (ll i = 0; i < n; i++)
    {
        if (ans[i] - '0' + k > 9)
        {
            k -= (9 - (ans[i] - '0'));
            ans[i] = '9';
        }
        else
        {
            ans[i] += k;
            break;
        }
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0)
    {
        if (n == 1)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
        return;
    }
    if (k > 9 * n)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    const string x = smallest(n, k), y = largest(n, k);
    cout << x << " " << y << endl;
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