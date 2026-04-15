// Problem: Hexadecimal's Numbers
// Link to the problem: https://codeforces.com/contest/9/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 1; i <= 512; i++)
    {
        a.push_back(stoll(bitset<32>(i).to_string()));
    }
    ll ans = 0;
    for (ll i = 0; i < 512; i++)
    {
        if (a[i] <= n)
        {
            ans++;
        }
        else
        {
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