#include<iostream>
using namespace std;
class Vehicle {
    public:
        char brand[20];
        char manufacturer[20];
        int year;
        int wheels;
        void setVehicleData() {
            cout<<"\n Enter brand, manufacturer, year and wheels:";
            cin>>brand>>manufacturer>>year>>wheels;
        }
};
class Machine : public Vehicle {
    public:
        char type[20];
        int power;
        float weight;
        void setMachineData() {
            cout<<"\n Enter machine type, power (HP), and weight (kg): ";
            cin>>type>>power>>weight;
        }
};
class car : public Machine {
    public:
        char model[20];
        char fuel[20];
        int seats;
        float mileage;
        void setcarData() {
            setVehicleData();
            setMachineData();
            cout<<"\n Enter car model, fuel type, seats and mileage:";
            cin>>model>>fuel>>seats>>mileage;
        }
        void showData() {
            cout<<"\n======Vehicle Details=====";
            cout<<"\n Brand="<<brand;
            cout<<"\n Manufacturer="<<manufacturer;
            cout<<"\n Year="<<year;
            cout<<"\n Wheels="<<wheels;

            cout<< "\n======Machine Details======";
            cout<< "\n Type="<<type;
            cout<< "\n Power="<<power<<" HP";
            cout<< "\n Weight="<<weight<<" kg";
            
            cout<<"\n======Car Details======";
            cout<<"\n Model="<<model;
            cout<<"\n Fuel="<<fuel;
            cout<<"\n Seats="<<seats;
            cout<<"\n Mileage="<<mileage<<"km/l";
        }
};
main() {
    car c1;
    c1.setcarData();
    c1.showData();
}
