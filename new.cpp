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
    int q,r;
    string w;
    cout << "Enter Flight Number- ";
    cin >> q;
    cout << "Enter Location- ";
    cin >> w;
    cout << "Enter Distance- ";
    cin >> r;

    Flight fl(q, w, r);
    fl.Display(cout);
}
