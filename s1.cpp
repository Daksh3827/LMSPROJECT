#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    vector<int> arr;
    vector<int> sortedarr;

    cout << "Enter Elements in Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cout << "arr[" << i << "]: ";
        cin >> ele;
        arr.push_back(ele);
    }

    cout << "Original Array: " << endl;
    for (int e : arr)
    {
        cout << e << " ";
    }

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == sortedarr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            sortedarr.push_back(arr[i]);
        }
    }

    cout << "Sorted Array: " << endl;
    for (int e : sortedarr)
    {
        cout << e << " ";
    }

    return 0;
}