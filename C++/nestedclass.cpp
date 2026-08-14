#include <iostream>
using namespace std;

class Student
{
public:
    class Marks
    {
    public:
        int math, science;

        void input()
        {
            cout << "Enter Math and Science marks: ";
            cin >> math >> science;
        }

        void display()
        {
            cout << "Math Marks: " << math << endl;
            cout << "Science Marks: " << science << endl;
        }
    };
};

int main()
{
    Student::Marks m;

    m.input();
    m.display();

    return 0;
}