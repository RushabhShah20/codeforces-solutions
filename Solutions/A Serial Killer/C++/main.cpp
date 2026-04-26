// Problem: A Serial Killer
// Link to the problem: https://codeforces.com/contest/776/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    set<string> ans;
    string a, b;
    cin >> a >> b;
    ans.insert(a);
    ans.insert(b);
    cout << *ans.begin() << " " << *ans.rbegin() << endl;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        if (ans.find(s) != ans.end())
        {
            ans.erase(s);
            ans.insert(t);
        }
        else
        {
            ans.erase(t);
            ans.insert(s);
        }
        cout << *ans.begin() << " " << *ans.rbegin() << endl;
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