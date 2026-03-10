// Problem: I Wanna Be the Guy
// Link to the problem: https://codeforces.com/contest/469/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<bool> seen(n, false);
    ll p;
    cin >> p;
    for (ll i = 0; i < p; i++)
    {
        ll x;
        cin >> x;
        seen[x - 1] = true;
    }
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        seen[x - 1] = true;
    }
    if (find(seen.begin(), seen.end(), false) == seen.end())
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
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