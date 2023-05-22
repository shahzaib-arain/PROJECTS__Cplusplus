#include <iostream>
using namespace std;
string name[500], Father_NIC[500], Mother_name[500], Birht_certificate[500], Resident_form[500],NIC_STORE[500],Maternal_marital[500];
int total = 0;
void new_identity_card(){
    int num,age;
    cout<<"How many person are going to apply NIC card"<<endl;
    cin>>num;
    cout<<"the age must be 18 to apply NIC_Card"<<endl;
    cin>>age;

    if(total == 0&&age>=18){
total = total + num;

    for(int i = 1; i <= num; i++){
        cout<<" \"Enter the data of person " <<i <<"\" "<< endl << endl;
        cout<<"Enter the age of person"<<endl;
        cin>>age;
        cout<<"Enter name of person"<<endl;
        cin>>name[i];
        cout<<"\nEnter father or another relative NIC number"<<endl;
        cin>>Father_NIC[i];
        cout<<"\nEnter mother name of person "<<endl;
        cin>>Mother_name[i];
        cout<<"\nEnter the birth certificate or SSCII certificate of person "<<endl;
        cin>>Birht_certificate[i];
        cout<<"\nEnter the resident form number of person "<<endl;
        cin>>Resident_form[i];
        cout<<"\nEnter the Maternal_marital status of person "<<endl;
        cin>>Maternal_marital[i];
        cout<<"\nGive the NIC number to person"<<endl;
        cin>>NIC_STORE[i];
        cout<<endl;

    }
    }

    else{
            if(age>=18){
        for(int i = total+1; i <= num+total; i++){
        cout<<" \"Enter the data of person " <<i <<"\" "<< endl << endl;
        cout<<"Enter name of person"<<endl;
        cin>>name[i];
        cout<<"\nEnter father or another relative NIC of Person"<<endl;
        cin>>Father_NIC[i];
        cout<<"\nEnter mother name of person "<<endl;
        cin>>Mother_name[i];
        cout<<"\nEnter the birth certificate or SSCII certificate of person "<<endl;
        cin>>Birht_certificate[i];
        cout<<"\nEnter the resident form number of person "<<endl;
        cin>>Resident_form[i];
        cout<<"\nEnter the Maternal_marital status of person "<<endl;
        cin>>Maternal_marital[i];
        cout<<"\nGive the NIC number to person"<<endl;
        cin>>NIC_STORE[i];
        cout<<endl;

    }}
    else{
        cout<<"you are not eligible for NIC_Card";
    }
    total = total + num;
    }
}

void allRecords(){
        cout<<"->Records of all Person"<<endl<<endl;
    for( int i = 1; i <= total; i++){
        cout<<" \"Record of student " <<i <<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"\nFather NIC number: "<<Father_NIC[i]<<endl;
        cout<<"\nMother name: "<<Mother_name[i]<<endl;;
        cout<<"\nBirth certificate or SSCII certificate: "<<Birht_certificate[i]<<endl;;
        cout<<"\nResident form number: "<<Resident_form[i]<<endl<<endl;
        cout<<"\nMaternal_Status :"<<Maternal_marital[i]<<endl;
        cout<<"\n the NIC number of person is: "<<NIC_STORE[i]<<endl<<endl;

        }
        if(total == 0){
            cout<<"No Records ---- Press 1 to enter records"<<endl<<endl;
    }
}

void searchRecord(){
        if(total == 0){
             cout<<"No Records ---- Press 1 to enter records"<<endl<<endl;
        }

    else if(true){
    cout<<"Enter NIC_number  to view the record of this NIC "<<endl;
    string rroll;
    cin>>rroll;
    cout<<endl;
        for(int i = 1; i <= total; i++){

   if(rroll == NIC_STORE[i])
    {
        cout<<" \"Record of person "<<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"NIC_NUMBER :"<<NIC_STORE[i]<<endl;
        cout<<"\nFather NIC_number: "<<Father_NIC[i]<<endl;
        cout<<"\nMother name: "<<Mother_name[i]<<endl;;
        cout<<"\nBirth certificate details: "<<Birht_certificate[i]<<endl;
        cout<<"\nResident form number: "<<Resident_form[i]<<endl;
        cout<<"\nMaternal_status of person:"<<Maternal_marital[i]<<endl<<endl;
    }

}


}


}
void updateRecord(){
      cout<<"Enter NIC_NUMBER to update the record of this NIC"<<endl;
    string rollnum1;
    cin>>rollnum1;
    cout<<endl;

        for(int i = 1; i <= total; i++){
    if(rollnum1 == NIC_STORE[i])
    {
        cout<<" \"previous record of Person "<<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"\nFather NIC: "<<Father_NIC[i]<<endl;
        cout<<"\nNIC_NUMBER:"<<NIC_STORE[i]<<endl;
        cout<<"\nMother name : "<<Mother_name[i]<<endl;;
        cout<<"\nBirth certificate: "<<Birht_certificate[i]<<endl;
        cout<<"\nResident form number: "<<Resident_form[i]<<endl;
        cout<<"\nMaternal_Status_of_person :"<<Maternal_marital[i]<<endl<<endl;
        cout<<"Now, type data that you want to update"<<endl<<endl;
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter New NIC_NUMBER :";
        cin>>NIC_STORE[i];
        cout<<endl;
        cout<<"Enter father NIC:";
        cout<<Father_NIC[i];
        cout<<endl;
        cout<<"Enter Mother name:";
        cin>>Mother_name[i];
        cout<<endl;
        cout<<"Enter Birth certificate detail: ";
        cin>>Birht_certificate[i];
        cout<<endl;
        cout<<"Enter Resident form number: ";
        cin>>Resident_form[i];
        cout<<endl;
        cout<<"Enter Maternal_marital status:";
        cin>>Maternal_marital[i];
        cout<<endl;
        }
    }
}

void deleteRecord(){
    int opt;
    cout<<"Press 1 to delete all record"<<endl;
    cout<<"Press 2 to delete specific record of any person "<<endl;
    cin>>opt;
    if(opt == 1){
        total = 0;
        cout<<"Your all record has been deleted"<<endl<<endl;
    }


  else if(opt==2)

{

string rollno;

cout<<"Enter the NIC_Number of person which you wanted to delete"<<endl;

cin>>rollno;

for(int i=0;i<=total;i++)

{

if(rollno==NIC_STORE[i])

{

for(int j=i;j<total;j++)

{
NIC_STORE[j]=NIC_STORE[j+1];

name[j]=name[j+1];

Father_NIC[j]=Father_NIC[j+1];

Mother_name[j]=Mother_name[j+1];

Birht_certificate[j]=Birht_certificate[j+1];

Resident_form[j]=Resident_form[j+1];

Maternal_marital[j]=Maternal_marital[j+1];



    }

total--;

cout<<"Your required record is deleted"<<endl;

}

}

}

else

{

cout<<"Invalid input";

}

}

int main()
{
    while(true){
        int press;
cout<<"\n\n\n\t\t\t----------------------->>Welcome On NADRA__MANAGEMENT System<<-----------------------"<<endl<<endl;
        cout<<"Press 1 for making new  NIC_CARD"<<endl<<endl;
        cout<<"Press 2 to show all records"<<endl<<endl;
        cout<<"Press 3 to search any record"<<endl<<endl;
        cout<<"Press 4 to update the record"<<endl<<endl;
        cout<<"Press 5 to delete any record"<<endl<<endl;
        cout<<"Press 6 for exit"<<endl<<endl;
        cin>>press;
        cout<<endl;


        switch(press){
            case 1:
            new_identity_card();
            break;

            case 2:
            allRecords();
            break;

            case 3:
            searchRecord();
            break;

            case 4:
            updateRecord();
            break;

            case 5:
            deleteRecord();
            break;

            case 6:
            exit(0);
            break;

            default:
            cout<<" \"Invalid Number   Please enter valid number between ( 1 to 6) because right now only 6 options are available\""<<endl<<endl;;

        }

    }

    return 0;
}
