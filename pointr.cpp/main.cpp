    #include <iostream>

    using namespace std;

    int main()
    {
        int a=3;
        int *ptr=&a;
        int **ptr1=&ptr;
        cout<<a<<endl;
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        cout<<**ptr1<<endl;


        return 0;
    }
