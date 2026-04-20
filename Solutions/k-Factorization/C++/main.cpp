// Problem: k-Factorization
// Link to the problem: https://codeforces.com/contest/797/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    stack<ll> st;
    const ll m = n;
    while (n % 2 == 0)
    {
        st.push(2);
        n /= 2;
    }
    for (ll i = 3; i <= m; i += 2)
    {
        while (n % i == 0)
        {
            st.push(i);
            n /= i;
        }
    }
    if (st.size() < k)
    {
        cout << -1 << endl;
        return;
    }
    while (st.size() > k)
    {
        const ll x = st.top();
        st.pop();
        st.top() *= x;
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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