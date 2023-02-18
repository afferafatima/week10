#include <iostream>
using namespace std;
int alphCompare(string temp, char letter);
main()
{
    int size; // variable to store count of words
    cout << "Enter how many words you want to enter :";
    cin >> size;
    string words[size];                  // array to store total words
    for (int idx = 0; idx < size; idx++) // loop to store words from user
    {
        cout << "Enter word " << idx + 1 << " : ";
        cin >> words[idx];
    }
    char letter; // variable to store letter that needed to be compare
    cout << "Enter letter you want to find : ";
    cin >> letter;
    string temp;
    int total = 0;
    for (int index = 0; index < size; index++)
    {
        temp = words[size];
        total = total + alphCompare(temp, letter);
    }
    cout << "letter comes " << total << " times in given array.";
}
int alphCompare(string temp, char letter)
{
    int count = 0;
    // loop that count how many time entered letter comes
    for (int idx = 0; temp[idx] != '\0'; idx++)
    {
        if (temp[idx] == letter)
        {
            count++;
        }
    }

    return count;
}
