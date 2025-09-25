#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    string title;
    string author;
    string due_date;

protected:
    virtual void checkout() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

public:
    void setTitle(string title)
    {
        this->title = title;
    }

    void gettitle()
    {
        cout << "Title of the Book is: " << title << endl;
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    void getAuthor()
    {
        cout << "Author of the Book is: " << author << endl;
    }

    void setduedate(string due_date)
    {
        this->due_date = due_date;
    }

    void getduedate()
    {
        cout << "Due Date of the Book is: " << due_date << endl;
    }
};

class Book : public LibraryItem
{
    int ISBN;

public:
    Book(int ISBN, string title, string author, string due_date)
    {
        this->ISBN = ISBN;
        this->title = title;
        this->author = author;
        this->due_date = due_date;
    }

    void checkout() override
    {
        cout << "Book check out successfully..." << endl;
    }

    void returnItem() override
    {
        cout << "Book returned successfully..." << endl;
    }

    void displayDetails() override
    {
        cout << endl;
        cout << "-----Book Details-----" << endl;
        cout << "Title of the Book is: " << title << endl;
        cout << "Author of the Book is: " << author << endl;
        cout << "Due date of the Book is: " << due_date << endl
             << endl;
    }
};

class DVD : public LibraryItem
{
    int duration;

public:
    DVD(int duration, string title, string author, string due_date)
    {
        this->duration = duration;
        this->title = title;
        this->author = author;
        this->due_date = due_date;
    }

    void checkout() override
    {
        cout << "DVD check out successfully..." << endl;
    }

    void returnItem() override
    {
        cout << "DVD returned successfully..." << endl;
    }

    void displayDetails() override
    {
        cout << endl;
        cout << "-----DVD Details-----" << endl;
        cout << "Title of the DVD is: " << title << endl;
        cout << "Author of the DVD is: " << author << endl;
        cout << "Due date of the DVD is: " << due_date << endl
             << endl;
    }
};

class Magazine : public LibraryItem
{

public:
    Magazine(string title, string author, string due_date)
    {
        this->title = title;
        this->author = author;
        this->due_date = due_date;
    }

    void checkout() override
    {
        cout << "Magazine check out successfully..." << endl;
    }

    void returnItem() override
    {
        cout << "Magazine returned successfully..." << endl;
    }

    void displayDetails() override
    {
        cout << endl;
        cout << "-----DVD Details-----" << endl;
        cout << "Title of the DVD is: " << title << endl;
        cout << "Author of the DVD is: " << author << endl;
        cout << "Due date of the DVD is: " << due_date << endl
             << endl;
    }
};

int main()
{
    Book b1(12345, "ABC", "Daksh Khuha", "25/09/2025");
    b1.checkout();
    b1.returnItem();
    b1.displayDetails();

    DVD d1(150, "XYZ", "Jash Vaishanani", "15/05/2025");
    d1.checkout();
    d1.returnItem();
    d1.displayDetails();

    Magazine m1("PQR", "Shyam jagani", "22/01/2015");
    m1.checkout();
    m1.returnItem();
    m1.displayDetails();
    return 0;
}
