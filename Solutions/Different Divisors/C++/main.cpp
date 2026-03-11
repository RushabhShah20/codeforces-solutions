// Problem: Different Divisors
// Link to the problem: https://codeforces.com/contest/1474/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &isPrime)
{
    ll d;
    cin >> d;
    ll a = 1 + d;
    if (a % 2 == 0 && a != 2)
    {
        a++;
    }
    while (!isPrime[a])
    {
        a += 2;
    }
    ll b = a + d;
    if (b % 2 == 0)
    {
        b++;
    }
    while (!isPrime[b])
    {
        b += 2;
    }
    const ll ans = a * b;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(100001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 100000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 100000; j += i)
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