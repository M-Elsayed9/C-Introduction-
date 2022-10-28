#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int state;
       
    cout << "\nChoose one of the following state codes: ";
    cout << "\nTX: Code 1 " ;
    cout << "\nLA & OK: Code 2 " ;
    cout << "\nCO & MS: Code 3 " ;
    cout << "\nNV & WV: Code 4 " ;
    cout << "\nWA & NY: Code 5\n " ;
    cin >> state;

    switch (state)
    {
    case 1:  
        cout << "Your shipping charges are: free!\n " ;
        break;
    case 2:
        cout << "Your shipping charges are: 2.50$\n " ;       
        break;
    case 3:
        cout << "Your shipping charges are: 5$\n " ;
        break;
    case 4:
        cout << "Your shipping charges are: 7.50$\n " ;
        break;
    case 5:  
        cout << "Your shipping charges are: 10$\n " ;
        break;

    default: 
        cout << "invalid state code\n ";
        

    }
    
    return 0;
}