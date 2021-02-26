#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> student;

    int k = 1, choice;
    while(k)
    {
        cout << "1. Insert";
        cout << "\n2. Size";
        cout << "\n3. Empty";
        cout << "\n4. Clear data";
        cout << "\n5. Get student marks by student name";
        cout << "\n6. Exit";
        cout << "\nEnter your choice = ";
        cin >> choice;
        string name ;
        switch(choice)
        {
            case 1:
                int no;
                cout << "Enter the name of student = ";
                cin >> name;
                cout << "Enter the no. = ";
                cin >> no;
                student.insert(pair<string,int>(name,no));
                cout << "\n\n";
                break;

            case 2:
                cout << "\n" << student.size() << "\n\n";
                break;

            case 3:
                if(student.empty())
                {
                    cout << "\nEmpty\n\n";
                }
                else
                {
                    cout << "\nNot empty\n\n";
                }
                break;

            case 4:
                student.clear();
                cout << "\nData cleared successfully.\n\n";
                break;

            case 5:
                if(!student.empty())
                {
                    cout << "Enter the name = ";
                    cin >> name;
                    cout << "Student no = " << student[name] << "\n\n";
                }
                else
                {
                    cout << "\nFailed to show marks\n\n";
                }
                break;

            case 6:
                k = 0;
                break;

            default:
                cout << "\nPlease enter valid option\n\n";
        }
    }
}
