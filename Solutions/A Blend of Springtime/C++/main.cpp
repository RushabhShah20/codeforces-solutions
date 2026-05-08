// Problem: A Blend of Springtime
// Link to the problem: https://codeforces.com/contest/989/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const vector<string> a = {"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"};
    for (const string &i : a)
    {
        if (s.find(i) != string::npos)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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