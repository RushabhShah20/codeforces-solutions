// Problem: Watermelon
// Link to the problem: https://codeforces.com/contest/4/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << ((x > 2 && !(x & 1)) ? ("YES") : ("NO")) << endl;

    return 0;
}