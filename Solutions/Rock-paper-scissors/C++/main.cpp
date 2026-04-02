// Problem: Rock-paper-scissors
// Link to the problem: https://codeforces.com/contest/48/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string f, m, s;
    cin >> f >> m >> s;
    if (f == m)
    {
        if (m == s)
        {
            cout << "?" << endl;
        }
        else
        {
            if (s == "rock")
            {
                if (f == "scissors")
                {
                    cout << "S" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else if (s == "paper")
            {
                if (f == "rock")
                {
                    cout << "S" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else
            {
                if (f == "paper")
                {
                    cout << "S" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
        }
    }
    else if (f == s)
    {
        if (m == s)
        {
            cout << "?" << endl;
        }
        else
        {
            if (m == "rock")
            {
                if (f == "scissors")
                {
                    cout << "M" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else if (m == "paper")
            {
                if (f == "rock")
                {
                    cout << "M" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else
            {
                if (f == "paper")
                {
                    cout << "M" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
        }
    }
    else if (m == s)
    {
        if (f == m)
        {
            cout << "?" << endl;
        }
        else
        {
            if (f == "rock")
            {
                if (m == "scissors")
                {
                    cout << "F" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else if (f == "paper")
            {
                if (m == "rock")
                {
                    cout << "F" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
            else
            {
                if (m == "paper")
                {
                    cout << "F" << endl;
                }
                else
                {
                    cout << "?" << endl;
                }
            }
        }
    }
    else
    {
        cout << "?" << endl;
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