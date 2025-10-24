#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    cout << "Enter values for x and y: ";
    double x = 0;
    double y = 0;
    cin >> x >> y;

    double z = pow(x, y);
    cout << "The value is: " << z << endl;


    return 0;
}