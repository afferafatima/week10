#include <iostream>
using namespace std;
bool peakValue(int prev, int current, int next);
main()
{
    int count;
    cout << " Enter count of elements you want to enter : ";
    cin >> count;
    int number[count];
    for (int idx = 0; idx < count; idx++)
    {
        cout << "Enter element " << idx + 1 << " : ";
        cin >> number[idx];
    }
    int peak[count];
    int index = 0;
    for (int idx = 1; idx < count - 1; idx++)
    {
        // if (number[idx] > number[idx - 1] && number[idx] > number[idx + 1])

        bool flag = peakValue(number[idx - 1], number[idx], number[idx + 1]);
        if (flag == true)
        {
            peak[index] = number[idx];
            index++;
        }
    }
    if (index > 0)
    {
        for (int idx = 0; idx < index; idx++)
        {
            cout << peak[idx] << " ";
        }
    }
    else
    {
        cout << "No peak found.";
    }
}
bool peakValue(int prev, int current, int next)
{
    bool flag = false;
    if (current > prev && current > next)
    {
        flag = true;
    }
    return flag;
}