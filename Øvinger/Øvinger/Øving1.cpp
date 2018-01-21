#include <iostream>
#include <cmath>

bool isFibonacciNumber(int n) {
	int a = 0;
	int b = 1;
	while (b < n) {
		int temp = b;
		b += a;
		a = temp;
	}
	return b == n;
}

/* Oppgave 1 oversatt til Python
def isFibonacciNumber(int n):
a = 0
b = 1
while (b < n):
temp = b
b += a
a = temp
return b == n
*/

int max(int a, int b) {
	if (a > b) {
		std::cout << "A is greater than B" << std::endl;
		return a;
	}
	else {
		std::cout << "B is greater or equal to A" << std::endl;
		return b;
	}
}

int fibonacci(int n) {
	int a = 0;
	int b = 1;
	std::cout << ("Fibonacci numbers: ") << std::endl;
	for (int x = 1; x < (n + 1); x++) {
		std::cout << (x, b) << std::endl;
		int temp = b;
		b += a;
		a = temp;
	}
	std::cout << "----" << std::endl;
	return b;
}

int squareNumberSum(int n) {
	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum += i * i;
		std::cout << "i*i" << std::endl;
	}
	std::cout << "totalSum" << std::endl;
	return totalSum;
}

int triangleNumbersBelow(int n) {
	int acc = 1;
	int num = 2;
	std::cout << "Triangle numbers below " << n << ":" << std::endl;
	while (acc < n) {
		std::cout << acc << " is below " << n << std::endl;
		acc += num;
		num += 1;
	}
	std::cout << "" << std::endl;
	return 0;
}

bool isTriangleNum(int num) {
	int acc = 1;
	while (num > 0) {

		num -= acc;
		acc += 1;
	}
	return num == 0;
}

bool isPrime(int n) {
	bool primeness = true;
	for (int j = 2; j < n; j++) {
		if (n%j == 0) {
			primeness = false;
			break;
		}
	}
	return primeness;
}

void naivePrimeNumberSearch(int n) {
	for (int number = 2; number <= n; number++) {
		if (isPrime(number)) {
			std::cout << number << " is a prime" << std::endl;
		}
	}
}

int findGreatestDivisor(int n) {
	for (int divisor = n - 1; divisor > 0; divisor--) {
		if (n%divisor == 0) {
			return divisor;
		}
	}
}

int main() {
	std::cout << "Oppgave a)" << std::endl;
	std::cout << max(5, 15) << std::endl;
	std::cout << "fibonacci" << std::endl;
	std::cout << fibonacci(5) << std::endl;
	std::cout << "squarenum" << std::endl;
	std::cout << squareNumberSum(5) << std::endl;
	std::cout << "trianblenum below" << std::endl;
	std::cout << triangleNumbersBelow(15) << std::endl;
	std::cout << "trianglenum" << std::endl;
	std::cout << isTriangleNum(15) << std::endl;
	std::cout << "primenum" << std::endl;
	std::cout << isPrime(12) << std::endl;
	std::cout << "naiveprime" << std::endl;
	naivePrimeNumberSearch(13);
	std::cout << "divisor" << std::endl;
	std::cout << findGreatestDivisor(6) << std::endl;
}