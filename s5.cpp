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

    vector<int> oddarr;
    vector<int> evearr;

    cout << "Original Array: " << endl;
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr.at(i) % 2 == 0)
        {
            evearr.push_back(arr.at(i));
        }
        else
        {
            oddarr.push_back(arr.at(i));
        }
    }

    for (int e : oddarr)
    {
        cout << e << " ";
    }
    cout << endl;

    for (int e : evearr)
    {
        cout << e << " ";
    }

    arr.clear();
    arr = oddarr;

    cout << endl;

    for (int i = 0; i < evearr.size(); i++)
    {
        arr.push_back(evearr.at(i));
    }

    cout << "Merged Array (Odd followed by even): " << endl;
    for (int e : arr)
    {
        cout << e << " ";
    }

    return 0;
}