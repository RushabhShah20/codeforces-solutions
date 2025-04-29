// Problem: Three Decks
// Link to the problem: https://codeforces.com/contest/2104/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (((c + b - (2 * a)) % 3 == 0) && ((a + c - (2 * b)) % 3 == 0) && ((c + b - (2 * a)) / 3 >= 0) && ((a + c - (2 * b)) / 3 >= 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}