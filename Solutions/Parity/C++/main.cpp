// Problem: Parity
// Link to the problem: https://codeforces.com/contest/1110/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll b, k, o = 0, e = 0;
    cin >> b >> k;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (b % 2 == 0)
    {
        if (a[k - 1] % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    else
    {
        if (o % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
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