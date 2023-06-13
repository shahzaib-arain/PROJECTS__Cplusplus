#include <iostream>

using namespace std;
int main()
{
    int a=3;
    int *p=&a;
    int **c=&p;

    cout<<a<<endl;
    cout<<p<<endl;
    *p=5;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;

     cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
}











//int fib(int n)
//{
//    if (n==1 || n==2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(n-1)+fib(n-2);
//    }
//}
//int main()
//{
//    fib(3);
//}








//void my_function(int *size,int *siz,int *si ,int *array)
//{
//
//
//	for(int i=0;i<*size;i++)
// {
//    for(int j=0;j<*siz;j++)
//        {
//            for(int k=0;k<*si;k++)
//        {
//
//
//        cout<<"enter the numbers:";
//            cin>>*array[i][j][k];
//        }
//        }
// }
//
//int main()
//{
//	int size,siz,si;
// int array[size][siz][si];
// cout<<" enter size:";
// cin>>size;
// cout<<" enter size:";
// cin>>siz;
// cout<<" enter size:";
// cin>>si;
//
//	 int sum=0;
//for(int i=0;i<size;i++)
//{
//    for(int j=0;j<siz;j++)
//    {
//        for(int k=0;k<si;k++)
//        {
//            sum+=array[i][j][k];
//
//
//
//    }
//}
//}
//
//        cout<<"the sum of the array is "<<my_function(&size,&siz,&si,&array);
//}
//
//
//
//}
   // int arrays[2][2][2]={10,20,30,4,5,6,7,9};//{40,50,60,8,7,6,5},{70,80,90,9,2,3,5},{100,110,120,7,6,7,6}};
    //for(int i=0;i<2;i++)
  //  {
    //    for(int j=0;j<2;j++)
     //        for(int k=0;k<2;k++)
      //  cout<<arrays[i][j][k]<<" ";
    //    cout<<endl;
   // }
//}
