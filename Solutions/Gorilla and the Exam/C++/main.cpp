// Problem: Gorilla and the Exam
// Link to the problem: https://codeforces.com/contest/2057/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    vector<ll> a;
    for (const pair<ll, ll> i : m)
    {
        a.push_back(i.second);
    }
    sort(a.begin(), a.end());
    const ll p = a.size();
    ll x = p;
    for (ll i = 0; i < p; i++)
    {
        if (k >= a[i])
        {
            k -= a[i];
            x--;
        }
        else
        {
            break;
        }
    }
    const ll ans = max(1LL, x);
    cout << ans << endl;
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