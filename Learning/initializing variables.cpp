#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    float interestRate = 3.67F;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    return 0;
}


/* Auto versions
int main() {
    auto price = 99.99;
    auto interestRate = 3.67F;
    auto fileSize = 90000L;
    auto letter = 'a';
    auto isValid = false;
    return 0;
}
*/



/* Empty brace initializer {} ensures empty variables are set to 0 and don't pick up garbage values

int main() {
    int number {1.2};
    return 0;
}

*/