// Problem: Divisiblity of Differences
// Link to the problem: https://codeforces.com/contest/876/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    unordered_map<ll, vector<ll>> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x % m].push_back(x);
    }
    for (const pair<ll, vector<ll>> i : a)
    {
        if (i.second.size() >= k)
        {
            cout << "Yes" << endl;
            for (ll j = 0; j < k; j++)
            {
                cout << i.second[j] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << "No" << endl;
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