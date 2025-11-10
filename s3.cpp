#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    vector<int> arr;

    cout << "Enter Elements in Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cout << "arr[" << i << "]: ";
        cin >> ele;
        arr.push_back(ele);
    }

    vector<int> ascarr = arr;
    vector<int> desarr = arr;

    cout << "Original Array: " << endl;
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int temp = 0;
            if (ascarr.at(j) > ascarr.at(i))
            {
                temp = ascarr.at(i);
                ascarr.at(i) = ascarr.at(j);
                ascarr.at(j) = temp;
            }
        }
    }

    cout << "Ascending Sorted Array: " << endl;
    for (int e : ascarr)
    {
        cout << e << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int temp = 0;
            if (desarr.at(j) < desarr.at(i))
            {
                temp = desarr.at(i);
                desarr.at(i) = desarr.at(j);
                desarr.at(j) = temp;
            }
        }
    }

    cout << "Descending Sorted Array: " << endl;
    for (int e : desarr)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}