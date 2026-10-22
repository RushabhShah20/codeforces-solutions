// Problem: Vicious Keyboard
// Link to the problem: https://codeforces.com/contest/801/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            ans++;
            s[i] = 'X';
            s[i + 1] = 'X';
        }
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'V' && s[i + 1] == 'V') || (s[i] == 'K' && s[i + 1] == 'K'))
        {
            ans++;
            break;
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
    solve();
    return 0;
}