#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void Add_Element_at_HEAD(Node *&HEAD)
{
    cout << "Enter data to insert at HEAD: ";
    int value;
    cin >> value;

    Node *n1 = new Node();
    n1->data = value;
    n1->next = HEAD;
    HEAD = n1;
}

void display(Node *ptr)
{
    cout << "----------------------" << endl;
    int i = 1;
    while (ptr != NULL)
    {
        cout << "Data " << i << ": " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
    cout << "----------------------" << endl;
}

void Reversedisplay(Node *ptr)
{
    vector<int> arr;
    while (ptr != NULL)
    {
        arr.push_back(ptr->data);
        ptr = ptr->next;
    }

    cout << "----------------------" << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << "Data: " << arr[i] << endl;
    }
    cout << "----------------------" << endl;
}

void Search_Element(Node *ptr)
{
    cout << "Enter value to search: ";
    int SearchValue;
    cin >> SearchValue;

    int ans = 0;

    while (ptr != NULL)
    {
        if (ptr->data == SearchValue)
        {
            ans++;
        }
        ptr = ptr->next;
    }

    if (ans > 0)
        cout << endl
             << "Element found " << ans << " time/s" << endl;
    else
        cout << endl
             << "Element not found!" << endl;
}

void Delete_Element(Node *&HEAD)
{
    if (HEAD == NULL || HEAD->next == NULL)
    {
        cout << endl
             << "List is too short" << endl;
    }
    else
    {
        HEAD->next = HEAD->next->next;
        cout << endl
             << "Second Element is deleted from the List!!!" << endl;
    }
}

int main()
{
    Node *HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

    Node *current = new Node();
    current->data = 20;
    current->next = NULL;
    HEAD->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    HEAD->next->next = current;

    current = new Node();
    current->data = 40;
    current->next = NULL;
    HEAD->next->next->next = current;

    current = new Node();
    current->data = 50;
    current->next = NULL;
    HEAD->next->next->next->next = current;

    while (true)
    {
        cout << "\nPress 1 to Add Element at HEAD" << endl;
        cout << "Press 2 to Search Element" << endl;
        cout << "Press 3 to Reverse Display" << endl;
        cout << "Press 4 to delete Element from List (2nd Element from the List will be deleted)" << endl;
        cout << "Press 5 to Display List" << endl;
        cout << "Press 0 to Exit" << endl;
        int choice;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Add_Element_at_HEAD(HEAD);
            break;

        case 2:
            Search_Element(HEAD);
            break;

        case 3:
            Reversedisplay(HEAD);
            break;

        case 4:
            Delete_Element(HEAD);
            break;

        case 5:
            display(HEAD);
            break;

        case 0:
            exit(0);
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
