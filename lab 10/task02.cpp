#include <iostream>
using namespace std;
bool progress(int current, int next);
main()
{
    int t_weeks;
    cout << "Enter total week : ";
    cin >> t_weeks;
    int miles[t_weeks];
    for (int idx = 0; idx < t_weeks; idx++)
    {
        cout << "Enter miles of week " << idx + 1 << " : ";
        cin >> miles[idx];
    }
    int count = 0;
    for (int idx = 0; idx < (t_weeks - 1); idx++)
    {
        bool check = progress(miles[idx], miles[idx + 1]);
        if (check == true)
        {
            count++;
        }
    }
    cout << "There are " << count << " Progress weeks.";
}
bool progress(int current, int next)
{
    bool flag = false;
    if (current < next)
    {
        flag = true;
    }
    return flag;
}