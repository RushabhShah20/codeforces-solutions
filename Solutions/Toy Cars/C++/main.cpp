// Problem: Toy Cars
// Link to the problem: https://codeforces.com/contest/545/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll z = 0;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        bool y = true;
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            if (x == 1 || x == 3)
            {
                y = false;
            }
        }
        if (y)
        {
            z++;
            ans.push_back(i + 1);
        }
    }
    cout << z << endl;
    for (ll i = 0; i < z; i++)
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