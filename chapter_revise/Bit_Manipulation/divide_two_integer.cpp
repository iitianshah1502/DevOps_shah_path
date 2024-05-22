#include <bits/stdc++.h>
using namespace std;
// approch 1
// this solution give you time limit error
// int divide(int dividend, int divisor)
// {
//     int sum = 0, cnt = 0;
//     while (abs(sum + divisor) <= dividend)
//     {
//         cnt++;
//         sum += divisor;
//     }
//     if (divisor < 0)
//         return -cnt;
//     else
//         return cnt;

//     if (divisor == 0)
//         return -1;
// }
// approch 2.



    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long a_dividend = labs(dividend), a_divisor = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (a_dividend >= a_divisor) {
            long temp = a_divisor, m = 1;
            while (temp << 1 <= a_dividend) {
                temp <<= 1;
                m <<= 1;
                
            }
            a_dividend -= temp;
            
            ans += m;
           
        }
        return sign * ans;
    }




int main()
{
    cout << divide(7, -2);
    return 0;
}