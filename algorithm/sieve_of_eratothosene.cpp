#include <bits/stdc++.h>
using namespace std;
void sieveOferathosenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); // this line seet the all value of prime array in 1
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
        // Print all prime numbers
        for (int p = 2; p <= n; p++)
            if (prime[p])
                cout << p << " ";
    }
}
int main(){
    sieveOferathosenes(5);
    return 0;
}