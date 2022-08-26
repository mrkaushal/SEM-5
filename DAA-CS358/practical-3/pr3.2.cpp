// Implement the program to find X^Y using divide and conquer strategy and print the total number of multiplications required to find X^Y. Test the program forfollowing test cases:

# include <iostream>
# include <cmath>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "The value of " << x << "^" << y << " is " << power(x, y) << endl;
    return 0;
}