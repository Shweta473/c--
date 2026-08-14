#include<iostream>
using namespace std;
class student
{
private:int roll_number;
        char name[30];
        float marks;
public:
void input()
{
    cout<<"enter the roll_number\n";
    cin>>roll_number;
    cout<<"enter the name\n";
    cin>>name;
    cout<<"enter the marks:\n";
    cin>>marks;
}
    void display()
{
cout<<"roll number of student\n"<<roll_number;
cout<<"name of the student\n"<<name;
cout<<"marks of student\n"<<marks;
}
};

int main()
{
   student s[5];
   for(int i=0;i<5;i++)
{   s[i].input();
   s[i].display();
}
return 0;
}                                                                                                       
