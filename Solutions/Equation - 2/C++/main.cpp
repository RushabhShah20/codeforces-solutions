// Problem: Equation
// Link to the problem: https://codeforces.com/contest/1269/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &isPrime)
{
    ll n;
    cin >> n;
    ll b = 2, a = b + n;
    while (isPrime[a] || isPrime[b])
    {
        a++;
        b++;
    }
    cout << a << " " << b << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> isPrime(10000001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 10000000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 10000000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    solve(isPrime);
    return 0;
}