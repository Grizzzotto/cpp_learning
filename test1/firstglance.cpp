#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    const double state_tax = 0.04;
    const double county_tax = 0.02;
    double clean_summ = sales*(1-state_tax)*(1-county_tax);
    cout << clean_summ;
    return 0;
}