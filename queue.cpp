#include <iostream>
#include <queue>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int count;
    int capacity;

public:
    Queue(int capacity)
    {
        arr = new int[capacity];
        this->capacity = capacity;
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    void enqueue(int value)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "queue is full" << endl
                 << endl;
        }
        else
        {
            this->rear++;
            arr[this->rear] = value;
            this->count++;
            this->front = 0;
        }
    }

    void dequeue()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty!!!" << endl
                 << endl;
        }
        else
        {
            front++;
            count--;
        }
    }

    void peek()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty!!!" << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Front Element is: " << arr[front] << endl;
            cout << "Rear Element is: " << arr[rear] << endl
                 << endl;
        }
    }

    void IsFull()
    {
        if (this->rear == this->capacity - 1)
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

    void Isempty()
    {
        if (this->front == -1 && this->rear == -1)
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
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty!!!" << endl
                 << endl;
        }
        else
        {
            cout << "------------------------------------" << endl;
            for (int i = this->rear; i >= this->front; i--)
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
    cout << "Enter Capacity of the Queue: ";
    cin >> capacity;
    Queue q(capacity);

    do
    {
        cout << "Press 1 to Insert Element in Queue" << endl;
        cout << "Press 2 to Delete Element in Queue" << endl;
        cout << "Press 3 to to check First and Last element of the Queue" << endl;
        cout << "Press 4 to to check Queue is Empty" << endl;
        cout << "Press 5 to to check Queue is Full" << endl;
        cout << "Press 6 to display the Queue" << endl;
        cout << "Enter Operation: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter Value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.Isempty();
            break;

        case 5:
            q.IsFull();
            break;

        case 6:
            q.Display();
            break;

        default:
            break;
        }
    } while (true);
    return 0;
}