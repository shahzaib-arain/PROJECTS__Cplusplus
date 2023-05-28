#include <iostream>
#include <string>

using namespace std;
int numbers;
const int Max_customer = 200;
struct bank {
    int account;
    string name;
    int balance;
};
bank customer[Max_customer];

void person_details()
{
    cout << "How many persons applied for making an account in the bank: ";
    cin >> numbers;

    for (int i = 0; i < numbers; i++)
    {
        cout << "Enter Details of Person " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        cin >> customer[i].name;
        cout << "Enter account number: ";
        cin >> customer[i].account;
        cout << "Enter account balance: ";
        cin >> customer[i].balance;
        cout << endl;
    }

    for (int i = 0; i < numbers; i++)
    {
        cout << "Name: " << customer[i].name << endl;
        cout << "Account No: " << customer[i].account << endl;
        cout << "Account Balance: " << customer[i].balance << endl << endl;
    }
}

void account_balance()
{
    for (int i = 0; i < numbers; i++)
    {
        if (customer[i].balance <= 100)
        {
            cout << "Name: " << customer[i].name << endl;
            cout << "Account No: " << customer[i].account << endl;
            cout << "Account Balance: " << customer[i].balance << endl << endl;
        }
    }
}

void deposit_withdraw()
{
    int num, acc, balance;
    cout << "Enter 1 for deposit and 0 for withdrawal: ";
    cin >> num;

    if (num == 1)
    {
        cout << "Enter Account number: ";
        cin >> acc;
        int j;
        for (j = 0; j < numbers; j++)
        {
            if (acc == customer[j].account)
            {
                cout << "Name: " << customer[j].name << endl;
                cout << "Account No: " << customer[j].account << endl;
                cout << "Account Balance: " << customer[j].balance << endl;
                cout << "Deposit balance: ";
                cin >> balance;
                customer[j].balance += balance;
                cout << "Deposit successful. Updated balance: " << customer[j].balance << endl;
                break;
            }
        }
        if (j == numbers)
        {
            cout << "Account not found." << endl;
        }
    }
    else if (num == 0)
    {
        cout << "Enter Account number: ";
        cin >> acc;
        int j;
        for (j = 0; j < numbers; j++)
        {
            if (acc == customer[j].account)
            {
                cout << "Name: " << customer[j].name << endl;
                cout << "Account No: " << customer[j].account << endl;
                cout << "Account Balance: " << customer[j].balance << endl;
                cout << "How much amount you want to withdraw: ";
                cin >> balance;
                if (balance > customer[j].balance)
                {
                    cout << "Insufficient balance. Withdrawal failed." << endl;
                }
                else
                {
                    customer[j].balance -= balance;
                    cout << "Withdrawal successful. Updated balance: " << customer[j].balance << endl;
                }
                break;
            }
        }
        if (j == numbers)
        {
            cout << "Account not found." << endl;
        }
    }
    else
    {
        cout << "Invalid number." << endl;
    }
}

int main()
{
    while (true)
    {
        cout << "----------Banking_Management_System------------" << endl << endl;
        cout << "Press 1 to make an account in the bank" << endl;
        cout << "Press 2 to see account details of person which have less then 100 " << endl;
        cout << "Press 3 to deposit or withdraw amount" << endl;
        cout << "Press 0 to exit" << endl << endl;
        cout << "Enter your choice: ";

        int press;
        cin >> press;

        switch (press)
        {
        case 1:
            person_details();
            break;

        case 2:
            account_balance();
            break;

        case 3:
            deposit_withdraw();
            break;

        case 0:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid number." << endl;
        }
    }
    return 0;
}
