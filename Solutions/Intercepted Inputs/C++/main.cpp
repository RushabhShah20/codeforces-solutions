// Problem: Intercepted Inputs
// Link to the problem: https://codeforces.com/contest/2037/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    vector<ll> a;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        if ((k - 2) % x == 0)
        {
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    const ll n = a.size();
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (a[i] * a[j] < k - 2)
        {
            i++;
        }
        else if (a[i] * a[j] > k - 2)
        {
            j--;
        }
        else
        {
            cout << a[i] << " " << a[j] << endl;
            return;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}