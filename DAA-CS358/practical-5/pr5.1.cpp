// Implement a program which has BNMCOEF() functionthat takes two parameters n and k and returns the value of

#include <iostream>
using namespace std;

int BNMCOEF(int n, int k)
{
    if (k == 0)
        return 1;
    if (k == n)
        return 1;
    if (k > n)
        return 0;
    return BNMCOEF(n - 1, k - 1) + BNMCOEF(n - 1, k);
}

int main()
{
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    cout << "The value of BNMCOEF(" << n << ", " << k << ") is " << BNMCOEF(n, k) << endl;
    return 0;
}