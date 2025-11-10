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
            if (arr.at(j) < arr.at(i))
            {
                temp = arr.at(i);
                arr.at(i) = arr.at(j);
                arr.at(j) = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr.at(i) == arr.at(i + 1))
        {
            continue;
        }
        else
        {
            cout << "First largest number: " << arr.at(i) << endl;
            cout << "Second largest number: " << arr.at(i + 1) << endl;
        }
        break;
    }

    return 0;
}