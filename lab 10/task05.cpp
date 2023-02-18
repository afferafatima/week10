#include <iostream>
using namespace std;
int boxVolume(int length, int width, int height);
main()
{
    int boxes;
    cout<<"Enter total boxes : ";
    cin >> boxes;
    int array[boxes * 3];
    int t_volume = 0;
    for (int idx = 0; idx < boxes * 3; idx = idx + 1)
    {
        cin >> array[idx];
    }
    for (int idx = 0; idx < boxes * 3; idx = idx + 3)
    {
        t_volume = t_volume + boxVolume(array[idx], array[idx + 1], array[idx + 2]);
        cout << t_volume << endl;
    }

    cout <<" Total volume is : "<< t_volume;
}
int boxVolume(int length, int width, int height)
{
    int volume;
    volume = length * width * height;
    return volume;
}