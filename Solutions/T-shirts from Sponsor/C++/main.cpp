// Problem: T-shirts from Sponsor
// Link to the problem: https://codeforces.com/contest/46/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<pair<string, ll>> a = {{"S", 0}, {"M", 0}, {"L", 0}, {"XL", 0}, {"XXL", 0}};
    for (ll i = 0; i < 5; i++)
    {
        cin >> a[i].second;
    }
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll k = -1;
        for (ll j = 0; j < 5; j++)
        {
            if (a[j].first == s)
            {
                k = j;
                break;
            }
        }
        for (ll j = 0; j < 5; j++)
        {
            if (j + k < 5)
            {
                if (a[j + k].second > 0)
                {
                    cout << a[j + k].first << endl;
                    a[j + k].second--;
                    break;
                }
            }
            if (k - j >= 0)
            {
                if (a[k - j].second > 0)
                {
                    cout << a[k - j].first << endl;
                    a[k - j].second--;
                    break;
                }
            }
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