#include <iostream>
using namespace std;
bool Check(int cycle);
int length;

int array[1000];
main()
{
    bool condition;
    int cycle;
    cout << "Enter array length : ";
    cin >> length;
    for (int idx = 0; idx < length; idx++)
    {
        cin >> array[idx];
    }
    cout << " Enter cycle : ";
    cin >> cycle;
    condition = Check(cycle);
    cout << condition;
}
bool Check(int cycle)
{
    int count = 0;
    if (cycle < length)
    {
        // cout << cycle;
        for (int dig1 = 0; dig1 < cycle; dig1++)
        {
            int dig2 = dig1 + cycle;
            if (array[dig1] == array[dig2])
            {
                count++;
            }
            // cout << array[dig1] << "," << array[dig2] << endl;
        }
        // cout << count << endl;
        // cout << cycle << endl;
        if (count == cycle)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}