#include <iostream>
using namespace std;

int main() {
    int length = 10, breadth = 5;
    int area = 2 * (length + breadth); // Logical error (formula for perimeter, not area)
    cout << "Area of rectangle = " << area;
    return 0;
}
