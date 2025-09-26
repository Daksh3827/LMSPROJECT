#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    string title;
    string author;
    string due_Date;

protected:
    virtual void checkout() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

public:
    void settitle(string title)
    {
        this->title = title;
    }
    void gettitle()
    {
        cout << "Title of the Book is :" << title << endl;
    }

    void setauthor(string author)
    {
        this->author = author;
    }

    void getauthor()
    {
        cout << "Author of The Book is :" << author << endl;
    }

    void setdue_date(string due_Date)
    {
        this->due_Date = due_Date;
    }

    void getdue_date()
    {
        cout << "Duedate of the Book is :" << due_Date << endl;
    }
};

class Book : public LibraryItem
{
protected:
    int ISBN;

public:
    Book(int ISBN, string title, string author, string due_Date)
    {
        this->ISBN = ISBN;
        this->title = title;
        this->author = author;
        this->due_Date = due_Date;
    }

    void checkout() override
    {
        cout << " checkout successfully..." << endl;
    }

    void returnItem() override
    {
        cout << "returnItem sucessfully..." << endl;
    }

    void displayDetails() override
    {
        cout << "<------- Display Details ------>" << endl;
        cout << "ISBN of the book is: " << ISBN << endl;
        cout << "Title of the Book is :" << title << endl;
        cout << "Author of The Book is :" << author << endl;
        cout << "Duedate of the Book is :" << due_Date << endl;
    }
};

int main()
{
    Book b1(125, "Ramayan", "Vedvyash", "10 november");
    b1.displayDetails();

    return 0;
}
