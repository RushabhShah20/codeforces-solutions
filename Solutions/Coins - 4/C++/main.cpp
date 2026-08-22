// Problem: Coins
// Link to the problem: https://codeforces.com/contest/47/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<pair<char, ll>> a = {{'A', 0}, {'B', 0}, {'C', 0}};
    for (ll i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '>')
        {
            a[s[0] - 'A'].second++;
        }
        else
        {
            a[s[2] - 'A'].second++;
        }
    }
    sort(a.begin(), a.end(), [](const pair<char, ll> &x, const pair<char, ll> &y)
         { return x.second < y.second; });
    if (a[0].second == 0 && a[1].second == 1 && a[2].second == 2)
    {
        cout << a[0].first << a[1].first << a[2].first << endl;
    }
    else
    {
        cout << "Impossible" << endl;
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