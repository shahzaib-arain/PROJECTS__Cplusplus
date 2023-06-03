#include <iostream>
using namespace std;
void plus_function(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void point(double *x,double *y)
{
    double temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main()
{
    int num1,num2;
    cout<<"enter int numbers :";
    cin>>num1>>num2;
    double num3,num4;
    cout<<"enter double numbers :";
    cin>>num3>>num4;
plus_function(&num1,&num2);
    point(&num3,&num4);

    cout<<"the sum is "<<num1<<","<<num2<<endl;
    cout<<"the point is "<<num3<<","<<num4<<endl;
}
