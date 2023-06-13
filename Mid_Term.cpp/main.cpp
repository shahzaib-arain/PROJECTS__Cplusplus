#include <iostream>
using namespace std;

int calculateSum(int num){
if(num < 10){
    return num;
}

else{
    return (num % 10) + calculateSum(num / 10);
}

}

int main(){

cout<<"Enter any 5 digits number " ;
int num;
cin>>num;

cout<<calculateSum(num);
}
