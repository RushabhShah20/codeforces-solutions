// Problem: Nastya Is Reading a Book
// Link to the problem: https://codeforces.com/contest/1136/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n), r(n);
    ll ans = n;
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    ll k;
    cin >> k;
    for (ll i = 0; i < n; i++)
    {
        if (l[i] < k && r[i] < k)
        {
            ans--;
        }
        else
        {
            break;
        }
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