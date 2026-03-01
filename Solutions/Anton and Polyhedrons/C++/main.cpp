// Problem: Anton and Polyhedrons
// Link to the problem: https://codeforces.com/contest/785/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            ans += 4;
        }
        if (s == "Cube")
        {
            ans += 6;
        }
        if (s == "Octahedron")
        {
            ans += 8;
        }
        if (s == "Dodecahedron")
        {
            ans += 12;
        }
        if (s == "Icosahedron")
        {
            ans += 20;
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