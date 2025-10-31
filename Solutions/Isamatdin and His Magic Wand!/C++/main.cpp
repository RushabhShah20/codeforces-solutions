// Problem: Isamatdin and His Magic Wand!
// Link to the problem: https://codeforces.com/contest/2167/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool isEven = true, isOdd = true;
    for (int i : a)
    {
        if (i % 2 == 0)
        {
            isOdd = false;
        }
        else
        {
            isEven = false;
        }
    }
    if (!isOdd && !isEven)
    {
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}