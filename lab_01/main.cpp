// Переменная в с++ - именнованая область памяти

#include <iostream>

int main() {
	char c1 = 1;
	unsigned char c2 = 4;
	char c5 = 127;
	short s1 = -32768;
        short s2 = 32767;
	unsigned short us1 = 0;	
	unsigned short us2 = 65535;
	int i1 = -3333;
	int i2 = 23233;
        unsigned int ui1 = 63444;
	long long ll1;
	unsigned long long ull1;
	char c3 = 'a';
	char c4 = 'b';
	float f = 3.1415f;
	double d = 3.141511111111;
	bool b1 = 1;
	bool b2 = 0;	
	std::cout << "Тип данных " << "Размер " << "Мин значение " << "Макс значение\n" << std::endl;
	std::cout << "Числовой\n" << std::endl;
	std::cout << "char " << "1 байт " << "-128"  << " " << "127" << "\n" << std::endl;
	std::cout << "unsigned char " << "1 байт " << "0" << " " << "255" << "\n" << std::endl;
	std::cout << "short " << "2 байта " << s1  << " " << s2 << "\n" << std::endl;
	std::cout << "unsigned short " << "2 байта " << us1  << " " << us2 << "\n" << std::endl;
	std::cout << "int " << "4 байта " << "-2^31"  << " " << "2^31-1" << "\n" << std::endl;
	std::cout << "unsigned int " << "4 байта " << "0" << " " << "2^32-1" << "\n" << std::endl;
	std::cout << "long long " << "8 байта " << "-2^63" << " " << "2^63-1" << "\n" << std::endl;
	std::cout << "unsigned long long " << "8 байта " << "0" << " " << "2^64-1" << "\n" << std::endl;
	std::cout << "Вещественный\n" <<  std::endl;
	std::cout << "float " << "4 байта " << "6-7 значащих цифр"  << "\n" << std::endl;
	std::cout << "double " << "8 байта " << "15-16 значащих цифр"  << "\n" << std::endl;
	std::cout << "Символьный\n" << std::endl;
	std::cout << "char " << "1 байт\n" << std::endl;
	std::cout << "Логический\n" << std::endl;
	std::cout << "bool " << "1 байт " << "0" << "1\n" << std::endl;
	std::cout << "Примеры арифметических операций\n" << std::endl;
	std::cout << "char - char: " << "4 - 1 = " << c2 - c1 << "\n" << std::endl;
	char c6 = c5+c1;
	std::cout << "char + char: " << "127 + 1 = " << -c6 << "\n" << std::endl;
	std::cout << "short + short: " << "32767 + (-32768) = " << s1 + s2 << "\n" << std::endl;
	std::cout << "short + short: " << "32767 + 32767 = " << s1 + s1 << "\n" << std::endl;
	std::cout << "unsigned short * unsigned short: " << "0 * 65536 = " << us1*us2  << "\n" << std::endl;
	std::cout << "int / int: " << "23233 / (-3333) = " << i2 / i1 << "\n" << std::endl;
	std::cout << "int * int: " << "23233 * 23233 * 3333  = " << -i1*i2*i2 << "\n" << std::endl;
	std::cout << "char + char: " << "'a' + 'b' = " << c3 + c4 << "\n" << std::endl;
	char ch1 = c3 + c4;
	std::cout << "char + char: " << "'a' + 'b' = " << -ch1 << "\n" << std::endl;
	std::cout << "bool * bool: " << "1 * 0 = " << b1 * b2 << "\n" << std::endl;
	std::cout << "bool * bool: " << "1 * 1 = " << b1 * b1 << "\n" << std::endl;
	return 0;
}
