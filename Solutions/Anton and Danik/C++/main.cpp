// Problem: Anton and Danik
// Link to the problem: https://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (const char c : s)
    {
        if (c == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a < d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
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