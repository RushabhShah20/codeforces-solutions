// Problem: Wonderful Sticks
// Link to the problem: https://codeforces.com/contest/2096/problem/0
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> ans;
        vector<ll> elements(n);
        for (ll i = 0; i < n; i++)
        {
            elements[i] = i + 1;
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            if (s[i] == '>')
            {
                ans.push_back(elements[elements.size() - 1]);
                elements.erase(elements.end());
            }
            else if (s[i] == '<')
            {
                ans.push_back(elements[0]);
                elements.erase(elements.begin());
            }
        }
        ans.push_back(elements[0]);
        for (ll i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}