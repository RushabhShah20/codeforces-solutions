// Problem: Special Problem
// Link to the problem: https://codeforces.com/contest/2214/problem/J
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    if (s == "Are you a verified human?")
    {
        cout << "Yes, I can attest to my status as a thoroughly validated, carbon-based biological entity." << endl;
    }
    else
    {
        cout << "Yes" << endl;
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