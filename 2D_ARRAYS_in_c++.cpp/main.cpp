#include <iostream>

using namespace std;
int main()
{
 int array[2][3];
 for(int i=0;i<2;i++)
 {
    for(int j=0;j<3;j++){
        cout<<"enter the numbers:";
            cin>>array[i][j];
    }

    }
    int sum=0;

        for(int i=0;i<2;i++)
 {
    for(int j=0;j<3;j++)
    {
        sum+=array[i][j];
    }}
    cout<<"sum of elements :"<<sum<<endl;
    cout<<endl;





    return 0;
}
   // int arrays[2][2][2]={10,20,30,4,5,6,7,9};//{40,50,60,8,7,6,5},{70,80,90,9,2,3,5},{100,110,120,7,6,7,6}};
    //for(int i=0;i<2;i++)
  //  {
    //    for(int j=0;j<2;j++)
     //        for(int k=0;k<2;k++)
      //  cout<<arrays[i][j][k]<<" ";
    //    cout<<endl;
   // }
//}
