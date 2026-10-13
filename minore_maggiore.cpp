#include <iostream>

int main()
{
    int n;
    int j;
    std::cout << "Inserisci il primo numero intero: ";
    std::cin >> n;
    std::cout << "Inserisci il secondo numero intero: ";
    std::cin >> j;
    if(n > j){
      std::cout << ">>>> \n";
    }

    if(n > j){
        std::cout << "<<<< \n";
    }
    if(n == j){
        std::cout << "====";
    }

    return 0;
}