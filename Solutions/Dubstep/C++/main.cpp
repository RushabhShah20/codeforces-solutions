// Problem: Dubstep
// Link to the problem: https://codeforces.com/contest/208/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t, ans;
    cin >> s;
    const ll n = s.size();
    ll i = 0;
    while (i < n)
    {
        if (s.substr(i, 3) == "WUB")
        {
            ans += t;
            if (!t.empty())
            {
                ans += " ";
            }
            t.clear();
            i += 3;
        }
        else
        {
            t += s[i];
            i++;
        }
    }
    ans += t;
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