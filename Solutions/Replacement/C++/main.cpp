// Problem: Replacement
// Link to the problem: https://codeforces.com/contest/135/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    ll mx = 0, j = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> ans[i];
        if (ans[i] > mx)
        {
            mx = ans[i];
            j = i;
        }
    }
    mx == 1 ? ans[j] = 2 : ans[j] = 1;
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < n; i++)
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