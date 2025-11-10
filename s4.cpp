#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, pos = 0, neg = 0, zero = 0;
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
        if (arr.at(i) > 0)
        {
            pos++;
        }
        else if (arr.at(i) < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }

    cout << "Count of Positive number in the array is: " << pos << endl;
    cout << "Count of Negative number in the array is: " << neg << endl;
    cout << "Count of Zero in the array is: " << zero << endl;

    return 0;
}