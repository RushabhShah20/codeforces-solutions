// Problem: Common Divisors
// Link to the problem: https://codeforces.com/contest/1203/problem/C
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
        cin >> a[i];
    }
    ll g = a[0];
    for (ll i = 1; i < n; i++)
    {
        g = __gcd(g, a[i]);
    }
    ll ans = 1;
    map<ll, ll> m;
    for (const ll prime : primes)
    {
        while (g % prime == 0)
        {
            m[prime]++;
            g /= prime;
        }
    }
    if (g != 1)
    {
        ans++;
    }
    for (const pair<ll, ll> i : m)
    {
        ans *= (i.second + 1);
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
    solve(primes);
    return 0;
}