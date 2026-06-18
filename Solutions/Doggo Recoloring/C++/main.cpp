// Problem: Doggo Recoloring
// Link to the problem: https://codeforces.com/contest/1025/problem/A
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
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    vector<ll> a(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] > 1)
        {
            cout << "Yes" << endl;
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