#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size  : ";
    cin >> size;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter element " << idx + 1 << " : ";
        cin >> array[idx];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // cout << array[size - 25001];
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}