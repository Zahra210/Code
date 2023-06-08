/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;




void Hooks() {
        double F, K, X;
        cout << "To calculate the force (F)"<<endl;
        cout << "Enter the spring constant (K): ";
        cin >> K;
        cout << "Enter the displacement (X): ";
        cin >> X;
        F = - (K) * (X);
        cout << "Force (F) = " << F << " N"<<endl;
    }
    
void Gay_lussacs(){
        cout << endl << "Welcome to Gay-lussac's law calculator" << endl;
        cout << "To calculate the First Pressure (P1), press A" << endl;
        cout << "To calculate the Second Pressure (P2), press B" << endl;
        cout << "To calculate the First Temperature (Ti), press C" << endl;
        cout << "To calculate the Second Temperature (T2), press D" << endl;
        char variable;
        cout << "Enter the variable with a capital letter: ";
        cin >> variable;

        double P1, P2, T1, T2;
        if (variable == 'A') {
            cout << "Enter P2: ";
            cin >> P2;
            cout << "Enter T1: ";
            cin >> T1;
            cout << "Enter T2: ";
            cin >> T2;
            P1 = (P2 * T1) / T2;
            cout << "P1 = " << P1 << " atm" << endl;
        }
        else if (variable == 'B') {
            cout << "Enter P1: ";
            cin >> P1;
            cout << "Enter T1: ";
            cin >> T1;
            cout << "Enter T2: ";
            cin >> T2;
            P2 = (P1 * T2) / T1;
            cout << "P2 = " << P2 << " atm" << endl;
        }
        else if (variable == 'C') {
            cout << "Enter P1: ";
            cin >> P1;
            cout << "Enter P2: ";
            cin >> P2;
            cout << "Enter T2: ";
            cin >> T2;
            T1 = (P1 * T2) / P2;
            cout << "T1 = " << T1 << " K" << endl;
        }
        else if (variable == 'D') {
            cout << "Enter P1: ";
            cin >> P1;
            cout << "Enter P2: ";
            cin >> P2;
            cout << "Enter T1: ";
            cin >> T1;
            T2 = (P2 * T1) / P1;
            cout << "T2 = " << T2 << " K" <<endl;
        }
        else {
            cout << "Invalid variable choice." << endl;
        }}
        
    void Boyles(){ 
        cout << endl << "Welcome to Boyle's law calculator" << endl;
        cout << "To calculate the Initial Volume (V1), press A" << endl;
        cout << "To calculate the Final Volume (V2), press B" << endl;
        cout << "To calculate the Initial Pressure (P1), press C" << endl;
        cout << "To calculate the Final Pressure (P2), press D" << endl;
        char variable;
        cout << "Enter the variable with a capital letter: ";
        cin >> variable;

        double V1, V2, P1, P2;
        if (variable == 'A') {
            cout << "Enter V2: ";
            cin >> V2;
            cout << "Enter P1: ";
            cin >> P1;
            cout << "Enter P2: ";
            cin >> P2;
            V1 = (P1 * V2) / P2;
            cout << "V1 = " << V1 << " L" << endl;
        }
        else if (variable == 'B') {
            cout << "Enter V1: ";
            cin >> V1;
            cout << "Enter P1: ";
            cin >> P1;
            cout << "Enter P2: ";
            cin >> P2;
            V2 = (P2 * V1) / P1;
            cout << "V2 = " << V2 << " L" << endl;
        }
        else if (variable == 'C') {
            cout << "Enter V1: ";
            cin >> V1;
            cout << "Enter V2: ";
            cin >> V2;
            cout << "Enter P2: ";
            cin >> P2;
            P1 = (V1 * P2) / V2;
            cout << "P1 = " << P1 << " atm" << endl;
        }
        else if (variable == 'D') {
            cout << "Enter V1: ";
            cin >> V1;
            cout << "Enter V2: ";
            cin >> V2;
            cout << "Enter P1: ";
            cin >> P1;
            P2 = (V2 * P1) / V1;
            cout << "P2 = " << P2 << " atm" << endl;
        }
        else {
            cout << "Invalid variable choice." << endl;
        }
    }   
    
    
    
    void wave(){  cout << endl << "Welcome to Wave equation calculator" << endl;
        cout << "To calculate the Wave Velocity (v), press A" << endl;
        cout << "To calculate the Wavelength (λ), press B" << endl;
        cout << "To calculate the Frequency (f), press C" << endl;
        char variable;
        cout << "Enter the variable with a capital letter: ";
        cin >> variable;

        double v, lambda, f;
        if (variable == 'A') {
            cout << "Enter λ: ";
            cin >> lambda;
            cout << "Enter f: ";
            cin >> f;
            v = lambda * f;
            cout << "v = " << v << " m/s" << endl;
        }
        else if (variable == 'B') {
            cout << "Enter v: ";
            cin >> v;
            cout << "Enter f: ";
            cin >> f;
            lambda = v / f;
            cout << "λ = " << lambda << " m" << endl;
        }
        else if (variable == 'C') {
            cout << "Enter v: ";
            cin >> v;
            cout << "Enter λ: ";
            cin >> lambda;
            f = v / lambda;
            cout << "f = " << f << " Hz" << endl;
        }
        else {
            cout << "Invalid variable choice." << endl;
        }
    }
    
    
    int main() {
        
    int eqnum;
    cout << "--------Welcome to physics calculator--------" << endl;
    cout << "----------The laws available:----------" << endl;
    cout << "Menu:"<<endl;
    cout << "1. Hooke's law ---> 1" << endl;
    cout << "2. Gay-lussac's law ---> 2" << endl;
    cout << "3. Boyle's law ---> 3" << endl;
    cout << "4. Wave equation ---> 4" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Enter the number of the equation: ";
    cin >> eqnum; 
    
    switch (eqnum) {
        case 1:
        Hooks();
        break; 
        
        case 2:
        Gay_lussacs();
        break;
        
        case 3:
        Boyles();
        break;
        
        case 4:
        wave();
        break;
        
        default:
        cout<<"Invalid choice!!";
        
        
    }
    return 0;



    
}
