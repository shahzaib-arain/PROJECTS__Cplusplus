#include <iostream>

using namespace std;
void key_line(int size,int user[],int key)
{
    bool found=false;

        for(int i=0;i<size;i++)
        {

      if(key==user[i])
      {
          found=true;
          break;
      }}


    if (found)
    {
        cout << "The key " << key << " is found in the array." << endl;
    }
    else
    {
        cout << "The key " << key << " is not found in the array." << endl;
    }

}

int main()
{

  int size;
    cout<<"enter the size :";
    cin>>size;

    int user[size];
    for(int i=0;i<size;i++)
    {
      cout<<"enter the numbers :";
      cin>>user[i];
      }

    int key;
    cout<<"enter the key:";
        cin>>key;
 key_line(size,user,key);

}
