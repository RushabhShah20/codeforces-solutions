// Problem: The Best Card
// Link to the problem: https://codeforces.com/contest/2253/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<bool> &isPrime)
{
    ll n;
    cin >> n;
    const string ans = isPrime[n + 1] ? "YES" : "NO";
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(200002, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 200001; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 200001; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(isPrime);
    }
    return 0;
}