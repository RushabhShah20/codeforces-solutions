// Problem: Sinking Ship
// Link to the problem: https://codeforces.com/contest/63/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> a, b, c;
    string cap;
    for (ll i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        if (t == "rat")
        {
            a.push_back(s);
        }
        if (t == "woman" || t == "child")
        {
            b.push_back(s);
        }
        if (t == "man")
        {
            c.push_back(s);
        }
        if (t == "captain")
        {
            cap = s;
        }
    }
    for (const string &i : a)
    {
        cout << i << endl;
    }
    for (const string &i : b)
    {
        cout << i << endl;
    }
    for (const string &i : c)
    {
        cout << i << endl;
    }
    cout << cap << endl;
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