#include <iostream>

int main() {
	// Вариант 3
	short i;
	long long x;
	std::cout << "Введите i: ";
	std::cin >> i;
	std::cout << "Введите x: ";
	std::cin >> x;
	std::cout << "i-ый бит числа x: " << ((x & (1<<i))>>i) << std::endl;
	return 0;
}
