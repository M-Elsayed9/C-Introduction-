#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int
        DISTANCE_MIN = 1,
        DISTANCE_MAX = 2000;

    float
        distance,
        total_charges;

    cout << "\nwhat is the distance in miles please? ";
    cin >> distance;
    
    if 
        (distance < DISTANCE_MIN ||
        distance > DISTANCE_MAX)        
    {
            cout << "the distance must be\n "
                << "within 0 and 2000 miles.\n "
                << "Rerun the program and try again.\n "
                << endl;
        }
        else
        {
       
            if (distance <= 50)
                total_charges = 0;
            else if (distance > 50 &&
                distance <= 200)
                total_charges = 2.50;
            else if (distance > 200 &&
                distance <= 500)
                total_charges = 5;
            else if (distance > 50 &&
                distance <= 1000)
                total_charges = 7.50;
            else if (distance > 1000 &&
                distance <= 2000)
                total_charges = 10;
            
            cout << setprecision(2) << fixed
                << "\ntotal charges are $"
            << total_charges
                << "\nFor a distance of "
                << distance
                << "\nmiles"
                << endl;
        }


    return 0;
}