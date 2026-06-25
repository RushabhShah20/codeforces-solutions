// Problem: MUH and Sticks
// Link to the problem: https://codeforces.com/contest/471/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    unordered_map<ll, ll> m;
    for (ll i = 0; i < 6; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    if (m.size() == 1)
    {
        cout << "Elephant" << endl;
    }
    else if (m.size() <= 3)
    {
        ll mx = 0;
        for (const pair<ll, ll> i : m)
        {
            mx = max(mx, i.second);
        }
        if (mx <= 3)
        {
            cout << "Alien" << endl;
        }
        else
        {
            if (mx == 4)
            {
                const string ans = m.size() == 2 ? "Elephant" : "Bear";
                cout << ans << endl;
            }
            else
            {
                cout << "Bear" << endl;
            }
        }
    }
    else
    {
        cout << "Alien" << endl;
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