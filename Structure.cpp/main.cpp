#include<iostream>
#include<string>
using namespace std;
int numbers;
const int MAX_students=450;
struct details{
    string name;
    int roll_number;
    string department;
    string course;
    int joining_year;


};

details students [MAX_students];

void student_details(){

    cout<<"Enter how many students are applied :";
    cin>>numbers;
    for(int i=0;i<numbers;i++)
    {
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter name :"<<endl;
        cin>>students[i].name;
        cout<<"Enter roll number :"<<endl;
        cin>>students[i].roll_number;
        cout<<"Enter Department : "<<endl;
        cin>>students[i].department;
        cout<<"Enter Course :"<<endl;
        cin>>students[i].course;
        cout<<"Enter Year of joining :"<<endl;
        cin>>students[i].joining_year;
        cout<<endl;
    }
    for(int i=0;i<numbers;i++)
    {
        cout<<"Name :"<<students[i].name<<endl<<endl;
        cout<<"Roll number :"<<students[i].roll_number<<endl<<endl;
        cout<<"Department  :"<<students[i].department<<endl<<endl;
        cout<<"Course  :"<<students[i].course<<endl<<endl;
        cout<<"Joining year  :"<<students[i].joining_year<<endl<<endl;
        cout<<endl;
    }
}
void particular_year(int numbers)
{
    int year;
    cout<<"Enter year :"<<endl;
    cin>>year;
    for(int i=0;i<numbers;i++)
    {
        if(year==students[i].joining_year)
          {
           cout<<"Students who joined in particular year "<<endl<<endl;
            cout<<"Students name :"<<students[i].name<<endl<<endl;
        }
        else
        {
            cout<<"your entered year is not in record "<<endl;
        }
    }

}

void roll_no_detail(int numbers)
{
    int roll;
    cout<<"Enter Roll number to see all details of student :"<<endl<<endl;
    cin>>roll;
    for(int i=0;i<numbers;i++)
        {
    if(roll==students[i].roll_number)
        {
            cout<<"Students Details  "<<endl<<endl;
            cout<<"Students name :"<<students[i].name<<endl<<endl;
            cout<<"Roll number :"<<students[i].roll_number<<endl<<endl;
            cout<<"Department :"<<students[i].department<<endl<<endl;
            cout<<"Course :"<<students[i].course<<endl<<endl;
            cout<<"Joining year :"<<students[i].joining_year<<endl<<endl;
        }
        else{
            cout<<"your roll number is not matched :";
        }

        }
}
int main()
{
    while(true)
    {
    int press;
    cout<<"press 1 for enter the data of students :"<<endl<<endl;
    cout<<"press 2 for taking names of particular year joined students :"<<endl<<endl;
    cout<<"press 3 and enter roll number to show all details of students :"<<endl<<endl;
    cin>>press;
    switch(press)
    {
    case 1:
        student_details();
        break;
    case 2:
        particular_year(numbers);
        break;
    case 3:
        roll_no_detail(numbers);
        break;
    default:
        cout<<"Invalid Number";
    }

}}
