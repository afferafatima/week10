#include <iostream>
using namespace std;
main()
{
    int num;
    cin >> num;
    string word[num];
    for (int idx = 0; idx < num; idx++)
    {
        cin << word[idx];
    }
    char alphabet;
    cin >> alphabet;
    int count = 0;
    for (int index = 0; index < num; index++)
    {
        for (int idx = 0; word[idx] != '0'; idx++)
        {
            if (word[idx] == alphabet)
            {
                count++;
            }
        }
    }
    cout << count;
}