//Scrivere un programma che stampi SOLO i numeri pari da 1 a 1000. L'output atteso sarà quindi 2 4 6 8 10 ... 1000.//
#include <iostream>

int main() {
	for (int i = 2; i <= 1000; i += 2) {
		std::cout << i << " " << "\n";
	}

	return 0;
}
