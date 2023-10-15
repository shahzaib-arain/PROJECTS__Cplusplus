#include <iostream>
#include<string>

using namespace std;

class Account{
    public:
    int Account_no;
    string Account_title;
    string type_of_account;
    double balance;

    void show_balance(){
        cout<< "The balance of the account is "<<balance<<endl;

    }

    Account(int a,string b,string c,double d){
        Account_no=a;
        Account_title=b;
        type_of_account=c;
        balance=d;

    }

};

int main()
{
    Account account1(4455,"Shahzaib","current",9009.23);
    Account account2(5566,"Ali","saving",5009.2);
    Account account3(6677,"Uzair","fixed",6009.35);

    cout<<"Account Details and Balance of the Persons "<<endl;
    cout<<"press 1 for checking account 1 "<<endl;
    cout<<"press 2 for checking account 2 "<<endl;
    cout<<"press 3 for checking account 3 "<<endl;
    int num;
    while(true){
    cin>>num;

    switch(num){
    case 1:
            account1.show_balance();
            cout<<"the name of the person is "<<account1.Account_title<<endl;
            cout<<"the account number of the person is "<<account1.Account_no<<endl;
            cout<<"the type of this account is "<<account1.type_of_account<<endl;
    break;
    case 2:
            account2.show_balance();
            cout<<"the name of the person is "<<account2.Account_title<<endl;
            cout<<"the account number of the person is "<<account2.Account_no<<endl;
            cout<<"the type of this account is "<<account2.type_of_account<<endl;
    break;
    case 3:
            account3.show_balance();
            cout<<"the name of the person is "<<account3.Account_title<<endl;
            cout<<"the account number of the person is "<<account3.Account_no<<endl;
            cout<<"the type of this account is "<<account3.type_of_account<<endl;
    default:
            cout << "Invalid option. Please enter 1, 2, 3, or 0 to exit." << endl;
        }
        }



    return 0;
}
