#include <iostream>

int main() {
	short a;
	short b;
	std::cout << "Сторона A: " << std::endl;
	std::cin >> a;
	std::cout << "Сторона B: " << std::endl;
	std::cin >> b;
	a+=b;
	std::cout << "Периметр равен: " << 2*a << std::endl;
	return 0;
}
