#include <iostream>
using namespace std;
int main()
{

  int n1=5,n2=10,n3=15;
  int *ptr1,*ptr2,*ptr3;
  cout<<n1<<" "<<n2<<" "<<n3<<endl;
  cout<<&n1<<" "<<&n2<<" "<<&n3<<endl;
  ptr1=&n1;ptr2=&n2;ptr3=&n3;
  cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
  cout<<&ptr1<<" "<<&ptr2<<" "<<&ptr3<<endl;
  cout<<*ptr1<<" "<<*ptr2<<" "<<*ptr3<<endl;
  cout<<*&ptr1<<" "<<*&ptr2<<" "<<*&ptr3<<endl;
  cout<<**&ptr1<<" "<<**&ptr2<<" "<<**&ptr3<<endl;
  int **p1=&ptr1,**p2=&ptr2,**p3=&ptr3;
  cout<<"the new pointers is :"<<endl;
  cout<<&p1<<" "<<&p2<<" "<<&p3<<endl;
  cout<<*&p1<<" "<<*&p2<<" "<<*&p3<<endl;
  cout<<**&p1<<" "<<**&p2<<" "<<**&p3<<endl;
  cout<<***&p1<<" "<<***&p2<<" "<<***&p3<<endl;
  cout<<"understanding "<<endl;
  int ***pr1=&p1,***pr2=&p2,***pr3=&p3;
  cout<<***&pr1<<" "<<****&pr2<<" "<<****&pr3;



}
