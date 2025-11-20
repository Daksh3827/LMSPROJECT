#include <iostream>
#include <stack>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int count;
    int capacity;

public:
    Stack(int capacity)
    {
        arr = new int[capacity];
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

    void peek()
    {
        if (this->top == -1)
        {
            cout << endl
                 << "Stack Underflow!!" << endl
                 << endl;
        }
        else
        {
            cout << "Top Element in Stack is: " << this->arr[this->top] << endl;
        }
    }

    void IsEmpty()
    {
        if (this->top == -1)
        {
            cout << endl
                 << "True" << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "False" << endl
                 << endl;
        }
    }

    void IsFull()
    {
        if (this->top == this->capacity - 1)
        {
            cout << endl
                 << "True" << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "False" << endl
                 << endl;
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
};

int main()
{
    int capacity;
    cout << "Enter size of Stack: ";
    cin >> capacity;

    Stack s1(capacity);
    do
    {
        cout << "Press 1 for push element" << endl;
        cout << "Press 2 for pop element" << endl;
        cout << "Press 3 to check top element in stack" << endl;
        cout << "Press 4 to check if stack is empty" << endl;
        cout << "Press 5 to check if stack is full" << endl;
        cout << "Press 6 for display stack" << endl;
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
            s1.peek();
            break;

        case 4:
            s1.IsEmpty();
            break;

        case 5:
            s1.IsFull();
            break;

        case 6:
            s1.Display();
            break;

        default:
            break;
        }
    } while (true);
    return 0;
}