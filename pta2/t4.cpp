#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string name[n], id[n];
    int grades[n];
    int max = -1, max_index = 0, min = 101, min_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> id[i] >> grades[i];
        if (max < grades[i])
        {
            max = grades[i];
            max_index = i;
        }
        if (min > grades[i])
        {
            min = grades[i];
            min_index = i;
        }
    }
    cout << name[max_index] << " " << id[max_index] << endl;
    cout << name[min_index] << " " << id[min_index] << endl;
}