// Problem: Password Check
// Link to the problem: https://codeforces.com/contest/411/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool a = false, b = false, c = false;
    for (ll i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            a = true;
        }
        if (islower(s[i]))
        {
            b = true;
        }
        if (isdigit(s[i]))
        {
            c = true;
        }
    }
    if (a && b && c && n >= 5)
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "Too weak" << endl;
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