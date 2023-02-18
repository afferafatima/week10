#include <iostream>
using namespace std;
main()
{
    int size;
    cout << " Enter total words you want to enter : ";
    cin >> size;
    string words[size];
    for (int idx = 0; idx < size; idx++)
    {
        cin >> words[idx];
    }
    for (int idx = size - 1; idx >= 0; idx--)
    {
        cout << words[idx]<<" ";

    }
}
