#include <iostream>
# include<string>
using namespace std;
class Car {
public:
string brand;
string model;
int year;
};
int main() {
// Create an object of Car
Car carObj1;
carObj1.brand = "maruti suzuki";
carObj1.model = "alto 800";
carObj1.year = 2001;
// Create another object of Car
Car carObj2;
carObj2.brand = "Toyota";
carObj2.model = "Fortuner";
carObj2.year = 1969;
// Print attribute values
cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
return 0;
}