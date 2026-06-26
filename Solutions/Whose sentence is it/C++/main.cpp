// Problem: Whose sentence is it?
// Link to the problem: https://codeforces.com/contest/312/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    cin.ignore();
    for (ll i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        const ll m = s.size();
        if (m < 5)
        {
            cout << "OMG>.< I don't know!" << endl;
            continue;
        }
        const bool x = s.substr(m - 5, 5) == "lala.", y = s.substr(0, 5) == "miao.";
        if (x & ~y)
        {
            cout << "Freda's" << endl;
        }
        else if (~x & y)
        {
            cout << "Rainbow's" << endl;
        }
        else
        {
            cout << "OMG>.< I don't know!" << endl;
        }
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