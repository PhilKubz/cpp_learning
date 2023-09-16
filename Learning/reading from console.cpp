#include <iostream>

using namespace std;

int main() {
    cout << "Enter the temperature in faranheit ";
    double faranheitTemp;
    cin >> faranheitTemp;

    double celsiusTemp = (faranheitTemp -32) / (1.8);
    cout << "The temperature in Celsius is " << celsiusTemp;
    return 0;
}

/*
int main() {
    cout << "Enter values for x and y ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}
*/