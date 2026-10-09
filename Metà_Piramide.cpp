#include <iostream>

int main() {
	int n;
	std::cout << "Inserisci un numero >=1: ";
	std::cin >> n;

	for(int i = 1; i <= n; i = i + 1) {

		for(int j = 1; j <= i; j = j + 1) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}