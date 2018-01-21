#include <iostream>
#include <cmath>

void inputAndPrintInteger() {
	int number = 0;
	std::cout << "Skriv inn ett tall: " << std::endl;
	std::cin >> number;
	std::cout << "Du skrev: " << number << std::endl;
}

int main() {
	inputAndPrintInteger();
}