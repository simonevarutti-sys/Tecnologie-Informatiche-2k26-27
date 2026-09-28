#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0) {
            std::cout << i << "Fizz" << endl;
        }
        else if (i % 5 == 0) {
            std::cout << i << "Buzz" << endl;
        }
        else {
            std::cout << i << endl;
        }
    }

    return 0;
}