// Problem: Slime Combining
// Link to the problem: https://codeforces.com/contest/618/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    stack<ll> st;
    st.push(1);
    for (ll i = 1; i < n; i++)
    {
        ll x = 1;
        while (!st.empty() && st.top() == x)
        {
            st.pop();
            x++;
        }
        st.push(x);
    }
    vector<ll> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    const ll m = ans.size();
    for (ll i = m - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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