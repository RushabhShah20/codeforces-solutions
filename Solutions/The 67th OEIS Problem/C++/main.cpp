// Problem: The 67th OEIS Problem
// Link to the problem: https://codeforces.com/contest/2218/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes)
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = primes[i];
    }
    vector<ll> ans(n);
    ans[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        ans[i] = a[i] * a[i - 1];
    }
    for (ll i = 0; i < n; i++)
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
    vector<bool> isPrime(1000001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 1000000; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(primes);
    }
    return 0;
}