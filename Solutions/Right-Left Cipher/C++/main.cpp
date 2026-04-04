// Problem: Right-Left Cipher
// Link to the problem: https://codeforces.com/contest/1085/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll i, j;
    if (n % 2 == 0)
    {
        i = (n - 1) / 2, j = n / 2;
    }
    else
    {
        i = n / 2, j = (n + 1) / 2;
    }
    ll k = 0;
    string ans(n, ' ');
    while (k < n)
    {
        if (k & 1)
        {
            ans[k] = s[j];
            j++;
        }
        else
        {
            ans[k] = s[i];
            i--;
        }
        k++;
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