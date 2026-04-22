// Problem: Tavas and Nafas
// Link to the problem: https://codeforces.com/contest/535/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    unordered_map<char, string> x = {{'2', "twenty"}, {'3', "thirty"}, {'4', "forty"}, {'5', "fifty"}, {'6', "sixty"}, {'7', "seventy"}, {'8', "eighty"}, {'9', "ninety"}}, y = {{'0', "zero"}, {'1', "one"}, {'2', "two"}, {'3', "three"}, {'4', "four"}, {'5', "five"}, {'6', "six"}, {'7', "seven"}, {'8', "eight"}, {'9', "nine"}};
    string ans;
    if (n == 1)
    {
        ans = y[s[0]];
    }
    else
    {
        if (s[0] == '1')
        {
            switch (s[1])
            {
            case '1':
                ans = "eleven";
                break;
            case '2':
                ans = "twelve";
                break;
            case '3':
                ans = "thirteen";
                break;
            case '4':
                ans = "fourteen";
                break;
            case '5':
                ans = "fifteen";
                break;
            case '6':
                ans = "sixteen";
                break;
            case '7':
                ans = "seventeen";
                break;
            case '8':
                ans = "eighteen";
                break;
            case '9':
                ans = "nineteen";
                break;
            default:
                ans = "ten";
                break;
            }
        }
        else if (s[1] == '0')
        {
            ans = x[s[0]];
        }
        else
        {
            ans = x[s[0]] + "-" + y[s[1]];
        }
    }
    cout << ans << endl;
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