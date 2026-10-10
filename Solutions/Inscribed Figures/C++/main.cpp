// Problem: Inscribed Figures
// Link to the problem: https://codeforces.com/contest/1156/problem/A
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
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if ((a[i - 1] == 2 && a[i] == 3) || (a[i - 1] == 3 && a[i] == 2))
        {
            cout << "Infinite" << endl;
            return;
        }
        if (a[i - 1] == 1 && a[i] == 2)
        {
            ans += 3 - (i >= 2 && a[i - 2] == 3);
        }
        else if ((a[i - 1] == 1 && a[i] == 3) || (a[i - 1] == 3 && a[i] == 1))
        {
            ans += 4;
        }
        else if (a[i - 1] == 2 && a[i] == 1)
        {
            ans += 3;
        }
    }
    cout << "Finite" << endl;
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