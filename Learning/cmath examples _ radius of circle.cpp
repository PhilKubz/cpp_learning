#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);

    cout << area;
    return 0;
}







/*
int main() {
    double result = floor(1.2);
    cout << result;
    return 0;
}
*/