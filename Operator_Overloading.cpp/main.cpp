#include <iostream>

using namespace std;

class Distance{
public:
    int feet;
    float inches;
    Distance(){
        feet=0;
        inches=0;
    }
    Distance(int f,float i){
        feet=f;
        inches=i;
    }
    Distance operator+(Distance d3){
        Distance temp;
        temp.feet= feet+d3.feet;
        temp.inches=inches+d3.inches;
        return temp;
}
    Distance operator-(Distance d3){
        Distance temp;
        temp.feet= feet-d3.feet;
        temp.inches=inches-d3.inches;
        return temp;
}
    Distance operator*(Distance d3){
        Distance temp;
        temp.feet= feet*d3.feet;
        temp.inches=inches*d3.inches;
        return temp;
}
    Distance operator/(Distance d3){
        Distance temp;
        temp.feet= feet/d3.feet;
        temp.inches=inches/d3.inches;
        return temp;
}
    void display(){
        cout<<"Inches : " <<inches<<endl;
        cout<<"feet  : " <<feet<<endl;

    }


};

int main()
{
    Distance d1;
    Distance d2(23,4.8);
    Distance d3(34,8.9);
    cout<<"Addition"<<endl;
    d1=d2+d3;
    d1.display();
    // if we have to perform another operators then just copy paste it .
    cout<<"Multilplication"<<endl;
    d1=d2*d3;
    d1.display();

    cout<<"Subtraction"<<endl;
     d1=d2-d3;
    d1.display();
    cout<<"Division"<<endl;
     d1=d2/d3;
    d1.display();





    return 0;
}
