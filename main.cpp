#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //declaration of variables to be used
    int coefx1;
    int coefx2;
    int coefy1;
    int coefy2;
    int const1;
    int const2;
    bool complete = false;
    int randx;
    int randy;

    cout << "Please enter the coefficient of x for the first equation" << endl;
    cin >> coefx1;
    cout << "Please enter the coefficient of y for the first equation" << endl;
    cin >> coefy1;
    cout << "Please enter the constant for the first equation" << endl;
    cin >> const1;
    cout << "Please enter the coefficient of x for the second equation" << endl;
    cin >> coefx2;
    cout << "Please enter the coefficient of y for the second equation" << endl;
    cin >> coefy2;
    cout << "Please enter the constant for the second equation" << endl;
    cin >> const2;


    while (!complete){
        srand(time(0));
        randx = (rand() % 21) - 10;
        randy = (rand() % 21) - 10;
        if ((coefx1 * randx) + (coefy1 * randy) == const1) {
            if ((coefx2 * randx) + (coefy2 * randy) == const2) {
                cout << randx << " " << randy << endl;
                complete = true;
            } else {
                cout << "No solution" << endl;
            }
        }
        else{
            cout << "No solution" << endl;
        }
    }
}