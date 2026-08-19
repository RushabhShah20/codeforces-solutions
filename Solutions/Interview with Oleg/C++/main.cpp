// Problem: Interview with Oleg
// Link to the problem: https://codeforces.com/contest/729/problem/A
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
    bool x = false;
    ll y = 0;
    string ans;
    ll i = 0;
    while (i < n)
    {
        if (x)
        {
            if (s.substr(i, 2) == "go")
            {
                y++;
                i += 2;
            }
            else
            {
                if (y > 0)
                {
                    ans.append("***");
                }
                x = false;
            }
        }
        else
        {
            if (s.substr(i, 3) == "ogo")
            {
                x = true;
                y++;
                i += 3;
            }
            else
            {
                y = 0;
                ans.append(1, s[i]);
                i++;
            }
        }
    }
    if (y > 0)
    {
        ans.append("***");
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