// Problem: King Keykhosrow's Mystery
// Link to the problem: https://codeforces.com/contest/2034/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return ((a / gcd(a, b)) * b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = lcm(a, b);
        cout << ans << endl;
    }
    return 0;
}