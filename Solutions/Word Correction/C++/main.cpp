// Problem: Word Correction
// Link to the problem: https://codeforces.com/contest/938/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isVowel(const char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = n - 1; i >= 1; i--)
    {
        if (isVowel(s[i]))
        {
            if (isVowel(s[i - 1]))
            {
                s.erase(i, 1);
            }
        }
    }
    cout << s << endl;
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