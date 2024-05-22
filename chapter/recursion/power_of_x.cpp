#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    // base case
    if (n == 0)
        return 1;
    if (x == 0)
        return 0;
    // recursive function
    long new_n = n;
    if (n < 0)
        new_n = -1 * new_n;
    double res = myPow(x, new_n / 2);
    if (n % 2 == 0)
        res = res * res;
    else
        res = x * res * res;
    if (n < 0)
        res = (double)(1.0) / (double)(res);
    return res;
}