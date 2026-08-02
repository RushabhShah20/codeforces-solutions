// Problem: Duff in Love
// Link to the problem: https://codeforces.com/contest/588/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes)
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (const ll prime : primes)
    {
        bool z = false;
        while (n % prime == 0)
        {
            z = true;
            n /= prime;
        }
        if (z)
        {
            s.insert(prime);
        }
    }
    if (n > 1)
    {
        s.insert(n);
    }
    ll ans = 1;
    for (const ll i : s)
    {
        ans *= i;
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