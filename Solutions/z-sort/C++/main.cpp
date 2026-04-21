// Problem: z-sort
// Link to the problem: https://codeforces.com/contest/652/problem/B
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
    sort(a.begin(), a.end());
    vector<ll> b(n);
    ll i = 0, j = n - 1, k = 0;
    while (i <= j)
    {
        if (k & 1)
        {
            b[k] = a[j];
            j--;
        }
        else
        {
            b[k] = a[i];
            i++;
        }
        k++;
    }
    for (i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (b[i] < b[i - 1])
            {
                cout << "Impossible" << endl;
                return;
            }
        }
        else
        {
            if (b[i] > b[i - 1])
            {
                cout << "Impossible" << endl;
                return;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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