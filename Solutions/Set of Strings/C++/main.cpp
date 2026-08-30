// Problem: Set of Strings
// Link to the problem: https://codeforces.com/contest/544/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    const ll n = s.size();
    unordered_set<char> t(s.begin(), s.end());
    const ll m = t.size();
    if (m < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        t.clear();
        cout << "YES" << endl;
        vector<string> ans = {""};
        ans.back().append(1, s[0]);
        t.insert(s[0]);
        for (ll i = 1; i < n; i++)
        {
            if (k > 1)
            {
                if (t.count(s[i]) == 0)
                {
                    t.insert(s[i]);
                    ans.push_back("");
                    k--;
                }
            }
            ans.back().append(1, s[i]);
        }
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
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