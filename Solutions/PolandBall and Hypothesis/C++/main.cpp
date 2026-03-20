// Problem: PolandBall and Hypothesis
// Link to the problem: https://codeforces.com/contest/755/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &isPrime)
{
    ll n, m = 1;
    cin >> n;
    while (isPrime[n * m + 1])
    {
        m++;
    }
    cout << m << endl;
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
    solve(isPrime);
    return 0;
}