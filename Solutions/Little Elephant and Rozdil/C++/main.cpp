// Problem: Little Elephant and Rozdil
// Link to the problem: https://codeforces.com/contest/205/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, vector<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]].push_back(i);
    }
    if (m.begin()->second.size() == 1)
    {
        cout << m.begin()->second.front() + 1 << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
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