#include <iostream>
#include <vector>
using namespace std;

class MemoryCalculate
{
public:
    int id;
    string name;
    vector<int> Student_ID;
    vector<string> Student_Name;

    void AddStudent(int std_id, string std_name)
    {
        id = std_id;
        name = std_name;
        Student_ID.push_back(id);
        Student_Name.push_back(name);
    }

    void DisplayDetails()
    {
        cout << "Students ID: " << endl;
        for (int ele : Student_ID)
        {
            cout << ele << endl;
        }
        
        cout << "Students Name: " << endl;
        for (string ele : Student_Name)
        {
            cout << ele << endl;
        }
    }

    void RemoveStudent(int id)
    {
        int ID = id;
        int index = 0;
        for (int i = 0; i < Student_ID.size(); i++)
        {
            if (Student_ID.at(i) == ID)
            {
                index = i;
                Student_ID.erase(Student_ID.begin() + index);
                Student_Name.erase(Student_Name.begin() + index);
            }
        }
    }

    void SearchStudent(int id)
    {
        int ID = id;
        int index = 0;
        for (int i = 0; i < Student_ID.size(); i++)
        {
            if (Student_ID.at(i) == ID)
            {
                index = i;
            }
        }

        cout << "Student ID: " << Student_ID.at(index) << " and Student Name: " << Student_Name.at(index) << endl;
    }
};

int main()
{
    MemoryCalculate m1;
    m1.AddStudent(1, "Daksh");
    m1.AddStudent(2, "Pradyman");
    m1.AddStudent(3, "Aniket");
    m1.DisplayDetails();

    cout << endl;

    m1.RemoveStudent(3);
    m1.DisplayDetails();

    cout << endl;

    m1.SearchStudent(1);

    return 0;
}