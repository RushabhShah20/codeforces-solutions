// Problem: Queue at the School
// Link to the problem: https://codeforces.com/contest/266/problem/B
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
    while (k > 0)
    {
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                swap(s[i], s[i - 1]);
                i++;
            }
        }
        k--;
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