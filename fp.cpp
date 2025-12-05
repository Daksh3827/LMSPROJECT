#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> arr;
    int top;
    int count;
    int capacity;

    Stack(int capacity)
    {
        arr.resize(capacity);
        this->capacity = capacity;
        this->top = -1;
        this->count = 0;
    }

    void push(int value)
    {
        if (this->top == this->capacity - 1)
        {
            cout << endl
                 << "Stack Overflow!!" << endl
                 << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            count++;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << endl
                 << "Stack Underflow!!" << endl
                 << endl;
        }
        else
        {
            top--;
            count--;
        }
    }

    void Display()
    {
        if (this->top == -1)
        {
            cout << endl
                 << "Stack Underflow!!" << endl
                 << endl;
        }
        else
        {
            cout << "------------------------------------" << endl;
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << endl;
            }
            cout << "------------------------------------" << endl;
        }
    }

    void Add_new_Element_to_top(int newValue)
    {
        if (this->top == -1)
        {
            cout << endl
                 << "Stack is Empty !!!" << endl;
        }
        else
        {
            top--;
            count--;
            arr[++top] = newValue;
        }
    }

    void Merge(int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            };
        }

        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    void MergeSort(int low, int high)
    {
        if (low >= high)
        {
            return;
        }

        int mid = (low + high) / 2;

        MergeSort(low, mid);
        MergeSort(mid + 1, high);

        Merge(low, mid, high);
    }
};

int main()
{
    int capacity;
    cout << "Enter size of Stack: ";
    cin >> capacity;
    vector<int> vector_cpy;

    Stack s1(capacity);
    for (int i = s1.top; i >= 0; i--)
    {
        vector_cpy.push_back(s1.arr[i]);
    }

    do
    {
        cout << "Press 1 for push element" << endl;
        cout << "Press 2 for pop element" << endl;
        cout << "Press 3 for display stack" << endl;
        cout << "Press 4 to remove first element and add new element to stack" << endl;
        cout << "Enter 5 to sort using merge sort" << endl;
        cout << "Enter Operation: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter Value: ";
            cin >> value;
            s1.push(value);
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.Display();
            break;

        case 4:
        {
            int newValue;
            cout << "Enter new value at the top: ";
            cin >> newValue;
            s1.Add_new_Element_to_top(newValue);
            break;
        }

        case 5:
            s1.MergeSort(0, s1.top);
            break;

        default:
            cout << "Enter Valid choice!!!";
            break;
        }
    } while (true);

    return 0;
}