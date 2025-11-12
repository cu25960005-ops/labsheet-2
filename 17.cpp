#include <iostream>
using namespace std;

int main() {
    int result = 10 + 20 * 3; // * has higher precedence than +
    cout << "Result = " << result; // Output = 70 (not 90)
    return 0;
}
