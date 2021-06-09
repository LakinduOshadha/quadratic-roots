//@author Lakindu Oshadha (lakinduoshadha98@gmail.com)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Initializing variables
    float a, b, c;
    float r1, r2;
    float dis, rp, ip;

    // Getting user inputs
    cout << "Enter a : "; cin >> a ;
    cout << "Enter b : "; cin >> b ;
    cout << "Enter c : "; cin >> c ;

    // Finding the discriminant
    dis = pow(b,2) - 4*a*c;

    cout<<endl<<"------------------------------------------------"<<endl;

    //checking the discriminant is 0 or <0 or >0
    if (dis > 0) {
        r1 = (-b + sqrt(dis)) / (2*a);      //finding root1
        r2 = (-b - sqrt(dis)) / (2*a);      //finding root2
        cout << "There are 2 real distinct roots." << endl;
        cout << "root1 = " << r1 << endl;
        cout << "root2 = " << r2 << endl;
    } else if(dis < 0) {
        rp = -b/(2*a);            //finding the real part of the roots
        ip = sqrt(-dis)/(2*a);     //finding the imaginary part of roots
        cout << "There are 2 complex distinct roots."  << endl;
        cout << "root1 = " << rp << "+" << ip << "i" << endl;
        cout << "root2 = " << rp << "-" << ip << "i" << endl;
    } else {
        cout << "There are 2 real identical roots." << endl;
        r1 = (-b  / (2*a));     //finding the roots
        cout << "root1 = root2 =" << r1 << endl;
    }
    return 0;
}
