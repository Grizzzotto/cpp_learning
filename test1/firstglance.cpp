#include <iostream>
#include <cmath>

namespace first{
    std::string cat_language = "meouch";
}

using std::string;
using std::cin;
using std::cout;
using std::endl;

typedef int a_really_long_name_for_an_integer_t;
using txt = std::string; //The same thing as typedef but more popular for whatever reason

int main() {

    a_really_long_name_for_an_integer_t a_really_long_name_for_a_number;
    a_really_long_name_for_a_number = 1;
    std::cout << "you wouldn't believe how inefficient i am showing you this number: " << a_really_long_name_for_a_number << endl;
    txt meowing_noises = "who is making meow noises?...";
    cout << "and really efdicient text: " << meowing_noises << endl;
    
    const double PI = 3.14;
    double r = 0; // Declare radius 

    cout << "type in the radius of the circle" << endl;
    cin >> r;
    cout << endl;
    
    double area = PI*r*r;
    cout << "calculating without cmath: " << area << endl;
    area = PI * pow(r, 2);
    cout << "calculating with cmath: " << area << endl;

    //Really usefull comment

    string cat_language = "miav";
    cout << cat_language << "\n";
    cout << first::cat_language << "\n";

    return 0;
}