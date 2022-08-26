// Suppose you want to schedule N activities in a Seminar Hall. Start time and Finish time of activities are given by pair of (si,fi) for ith activity. Implement the program to maximize the utilization of Seminar Hall. (Maximum activities should be selected.)

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][0] >= arr[i][0] && arr[j][1] <= arr[i][1])
            {
                temp++;
            }
        }
        if (temp > max)
        {
            max = temp;
        }
    }
    cout << max;
    return 0;
}