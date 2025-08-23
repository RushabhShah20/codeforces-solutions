// Problem: The Secret Number
// Link to the problem: https://codeforces.com/contest/2132/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        vector<ull> a;
        vector<ull> divisors = {11, 101, 1001, 10001, 100001, 1000001, 10000001, 100000001, 1000000001, 10000000001, 100000000001, 1000000000001, 10000000000001, 100000000000001, 1000000000000001, 10000000000000001, 100000000000000001};
        for (int i = 0; i < divisors.size(); i++)
        {
            if (n % divisors[i] == 0)
            {
                a.push_back(n / divisors[i]);
            }
        }
        cout << a.size() << endl;
        sort(a.begin(), a.end());
        if (a.size() != 0)
        {
            for (ull i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
