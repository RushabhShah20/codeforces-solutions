// Problem: Sereja and Dima
// Link to the problem: https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0, j = n - 1, k = 0, x = 0, y = 0;
    while (i <= j)
    {
        if (k % 2 == 0)
        {
            if (a[i] > a[j])
            {
                x += a[i];
                i++;
            }
            else
            {
                x += a[j];
                j--;
            }
        }
        else
        {
            if (a[i] > a[j])
            {
                y += a[i];
                i++;
            }
            else
            {
                y += a[j];
                j--;
            }
        }
        k++;
    }
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