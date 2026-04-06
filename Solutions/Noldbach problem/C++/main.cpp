// Problem: Noldbach problem
// Link to the problem: https://codeforces.com/contest/17/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &primes, const vector<bool> &isPrime)
{
    ll n, k;
    cin >> n >> k;
    ll x = 0;
    const ll m = primes.size();
    for (ll i = 1; i < m; i++)
    {
        const ll y = primes[i] + primes[i - 1] + 1;
        if (y <= n && isPrime[y])
        {
            x++;
        }
    }
    if (x >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(10001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 10000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 10000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 10000; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    solve(primes, isPrime);
    return 0;
}