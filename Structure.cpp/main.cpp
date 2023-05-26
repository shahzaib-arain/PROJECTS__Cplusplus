#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int roll_number;
    float gpa;


};
int main()
{
    int numbers;
    cout<<"Enter the quantity of student ";
    cin>>numbers;
    student students[numbers];
    for(int i=0;i<numbers;i++)
    {
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter name :";
        cin>>students[i].name;
        cout<<"Enter roll number :";
        cin>>students[i].roll_number;
        cout<<"Enter GPA ";
        cin>>students[i].gpa;
        cout<<endl;
    }
    for(int i=0;i<numbers;i++)
    {
        cout<<"Name :"<<students[i].name<<endl;
        cout<<"roll number :"<<students[i].roll_number<<endl;
        cout<<" GPA :"<<students[i].gpa<<endl;
        cout<<endl;
    }

}
