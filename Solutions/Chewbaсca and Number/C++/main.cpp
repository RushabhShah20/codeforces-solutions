// Problem: Chewbaсca and Number
// Link to the problem: https://codeforces.com/contest/514/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[i] != '9')
            {
                s[i] = (min(s[i] - '0', 9 - (s[i] - '0')) + '0');
            }
        }
        else
        {
            s[i] = (min(s[i] - '0', 9 - (s[i] - '0')) + '0');
        }
    }
    cout << s << endl;
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