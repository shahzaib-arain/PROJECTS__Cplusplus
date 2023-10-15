#include <iostream>

using namespace std;
/*
class myCar{
private :
    int models;
    string color;

    myCar(int s,string w){
        models=s;
        color=w;
    }

public:
    void setmodel(int n,string nam){
        models=n;
        color=nam;


    }
    int getmodel(){
        return models;

    }
    string getcolor(){
        return color;

    }
    friend myCar createCar(int s, string w);

};
myCar createCar(int s, string w) {
    return myCar(s, w);

}
int main()
{

   myCar Carolla = createCar(123, "Red");

    cout<<"Color of Car is : "<<Carolla.color<<" "<<"Number Id is"<<Carolla.models<<endl;
  //  cout<<"Color of Car is : "<<toyota.color<<" "<<"Number Id is"<<toyota.models<<endl;
  //  cout<<"Color of Car is : "<<civic.color<<" "<<"Number Id is"<<civic.models<<endl;






}
*/
class Vehicle{
public:
    string color;
    int model;

    void colorOfVehicle(string s){
    color=s;

    }
    void modelOfVehicle(int s){
    model=s;

    }
    void horn(){
        cout<<"Horn........."<<endl;


    }




};
class Car: public Vehicle{
public:
    string engine;

    void engineOf(string p){
        engine=p;


    }

};

int main(){

    Vehicle cars;
    cars.colorOfVehicle("Red");
    cars.modelOfVehicle(123);
    cars.horn();

    Car Civic;
    Civic.colorOfVehicle("black");
    Civic.modelOfVehicle(456);
    Civic.horn();

    cout<<"Color of Cars :"<<cars.color<<endl;
    cout<<"Model of Cara :"<<cars.model<<endl;

    cout<<"Color of Civic :"<<Civic.color<<endl;
    cout<<"Model of Civic :"<<Civic.model<<endl;











}

