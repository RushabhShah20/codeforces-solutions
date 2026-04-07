// Problem: Assemble the table
// Link to the problem: https://codeforces.com/contest/648/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll i = 0, j = 2 * n - 1;
    while (i <= j)
    {
        cout << a[i] << " " << a[j] << endl;
        i++;
        j--;
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