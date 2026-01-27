// Problem: Chemistry
// Link to the problem: https://codeforces.com/contest/1883/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> freq(26, 0);
    for (ll i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    bool z = true;
    ll count = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            count++;
            if (count > k + 1)
            {
                z = false;
                break;
            }
        }
    }
    if (z == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}