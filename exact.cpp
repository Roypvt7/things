#include <iostream>
#include <string>
using namespace std;
class Flight {
    int numberFlight;
    string Destination;
    float Distance;
    float Fuel;
    
    float CALFUEL() {
        float fuel = 0;
        if(Distance <= 1000)
           fuel = 500;
        else if  (Distance > 1000 && Distance <= 2000)
           fuel = 1100;
        else   
            fuel = 2200;
        return fuel;
    }     
public:
     Flight(){       // default constructor
         cout<<"Flight information:"<<endl;
       FEEDINFO () ;
     }
      // parameterized constructor
    Flight (int num, string destination, float distance){
       numberFlight = num;
       Destination = destination;
       Distance = distance;
       Fuel = CALFUEL();
    }
    ~Flight() {    }  // destructor
    void FEEDINFO () {
        cout << "Enter Flight number: " ;
        cin >> numberFlight;
        cout << "Enter Destination:   " ;
        cin >> Destination;
        cout << "Enter Distance:      " ;
        cin >>  Distance ;
        Fuel = CALFUEL();
        cout << "Fuel :         " << Fuel  << endl;
    }
    void SHOWINFO ()  {
        cout<<endl;
        cout<<"_______________________________________"<<endl;
        cout << "Flight number: " << numberFlight << endl;
        cout << "Destination:   " << Destination << endl;
        cout << "Distance:      " << Distance  << endl;
        cout << "Fuel :         " << Fuel  << endl <<endl;             
        };

};
int main()
{
    // default constructor
    Flight Dubai;
    Dubai.SHOWINFO();
    // parameterized constructor    
    Flight Mexico(123, "Mexico", 1200);
    Mexico.SHOWINFO();    
     return 0;
}
