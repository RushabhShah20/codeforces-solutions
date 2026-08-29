// Problem: Mike and Fax
// Link to the problem: https://codeforces.com/contest/548/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(const string &s, ll i, ll j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    const ll n = s.size();
    if (n % k == 0)
    {
        const ll m = n / k;
        for (ll i = 0; i < k; i++)
        {
            if (!isPalindrome(s, i * m, (i + 1) * m - 1))
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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