#include <iostream>
#include <string>
using namespace std;

class Flight {
    int FlightNumber;
    string Destination;
    float Distance;
    float Fuel;
    void CALFUEL();
public:
    Flight(int num, string dest, float dist);
    void Display(ostream& os);
};

Flight::Flight(int num, string dest, float dist) :
FlightNumber(num), Destination(dest), Distance(dist) {
    CALFUEL();
}

void Flight::CALFUEL() {
    if (Distance <= 1000)
        Fuel = 500;
    else if (Distance <= 2000)
        Fuel = 1100;
    else
        Fuel = 2200;
}

void Flight::Display(ostream& os) {
    os << "Flight number " << FlightNumber << " to " 
       << Destination << " needs " << Fuel << " fuel" << endl;
}

int main() {
    Flight fl1(123, "Philadelphia", 200);
    Flight fl2(345, "Memphis", 1230);
    Flight fl3(987, "Austin", 2120);


    fl1.Display(cout);
    fl2.Display(cout);
    fl3.Display(cout);
}
