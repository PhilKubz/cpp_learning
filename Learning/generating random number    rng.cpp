#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));
    short firstRoll = (rand() % (maxValue - minValue + 1)) + minValue;
    short secondRoll = (rand() % (maxValue - minValue + 1)) + minValue;

    cout <<"Dice roll one is: " << firstRoll << endl;
    cout << "Dice roll two is: " << secondRoll;
    return 0;
}