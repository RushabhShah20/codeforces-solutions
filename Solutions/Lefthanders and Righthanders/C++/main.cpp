// Problem: Lefthanders and Righthanders
// Link to the problem: https://codeforces.com/contest/234/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    const ll m = n >> 1;
    ll j = m;
    for (ll i = 0; i < m; i++)
    {
        if (s[i] == 'L' && s[j] == 'R')
        {
            cout << i + 1 << " " << j + 1 << endl;
        }
        else
        {
            cout << j + 1 << " " << i + 1 << endl;
        }
        j++;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}