// Problem: Prinzessin der Verurteilung
// Link to the problem: https://codeforces.com/contest/1536/problem/B
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
    string ans = "a";
    while (s.find(ans) != string::npos)
    {
        if (ans.back() == 'z')
        {
            ans.back() = 'a';
            ll x = 1;
            for (ll i = ans.size() - 2; i >= 0; i--)
            {
                if (ans[i] == 'z')
                {
                    ans[i] = 'a';
                }
                else
                {
                    ans[i]++;
                    x = 0;
                    break;
                }
            }
            if (x == 1)
            {
                ans.append(1, 'a');
            }
        }
        else
        {
            ans.back()++;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}