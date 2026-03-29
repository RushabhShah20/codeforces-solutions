// Problem: Minimum Varied Number
// Link to the problem: https://codeforces.com/contest/1714/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n < 10)
    {
        cout << n << endl;
        return;
    }
    string ans;
    ll i = 9;
    while (n > 0)
    {
        if (n <= i)
        {
            ans.append(to_string(n));
            break;
        }
        else
        {
            ans.append(to_string(i));
            n -= i;
        }
        i--;
    }
    reverse(ans.begin(), ans.end());
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