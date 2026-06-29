// Problem: Replacing Digits
// Link to the problem: https://codeforces.com/contest/169/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    sort(b.begin(), b.end(), greater<>());
    const ll n = a.size(), m = b.size();
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (j == m)
        {
            break;
        }
        if (a[i] < b[j])
        {
            a[i] = b[j];
            j++;
        }
    }
    cout << a << endl;
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