#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    const double pi = 3;
    double r = 0;

    cout << "type in the radius of the circle" << endl;
    cin >> r;
    cout << endl;
    
    double area = pi*r*r;
    cout << "calculating without cmath: " << area << endl;
    area = pi * pow(r, 2);
    cout << "calculating with cmath: " << area << endl;



    return 0;
}