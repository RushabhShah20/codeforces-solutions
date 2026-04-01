// Problem: Mishka and Contest
// Link to the problem: https://codeforces.com/contest/999/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0, j = n - 1, ans = 0;
    while (i < n)
    {
        if (a[i] <= k)
        {
            ans++;
        }
        else
        {
            break;
        }
        i++;
    }
    while (j > i)
    {
        if (a[j] <= k)
        {
            ans++;
        }
        else
        {
            break;
        }
        j--;
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