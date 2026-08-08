// Problem: Letters Cyclic Shift
// Link to the problem: https://codeforces.com/contest/708/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool x = false;
    const ll n = s.size(), j = s.find_first_not_of('a');
    if (j == -1)
    {
        s[n - 1] = 'z';
    }
    else
    {
        for (ll i = j; i < n; i++)
        {
            if (s[i] > 'a')
            {
                s[i]--;
            }
            else
            {
                break;
            }
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