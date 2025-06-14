// Problem: Equal Subsequences
// Link to the problem: https://codeforces.com/contest/2118/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string ans = "";
        for (int i = 0; i < k; i++)
        {
            ans += '1';
        }
        for (int i = 0; i < n - k; i++)
        {
            ans += '0';
        }
        cout << ans << endl;
    }
}