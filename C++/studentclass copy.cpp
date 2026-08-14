#include <iostream>
using namespace std;
class student
{
    private:
    char name [50];
    int roll_no;
    float marks;
    public:
    void input()
    {
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the roll_no";
    cin>>roll_no;
    cout<<"enter the marks";
    cin>>marks;
    }
void display()
 {
    cout<<"name"<<name;
    cout<<"roll_no"<<roll_no;
    cout<<"marks"<<marks;
 }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}