#include <iostream>

int main(){
    /* Вариант 3.1
    int A, B, C;
    std::cin >> A >> B >> C;
    std::cout << std::endl;
    if ((A > B) && (B > C)) {
	std::cout << A-B-C << std::endl;
    }
    else if ((B > A) && (B % C == 0)) {
	std::cout << B/C+B-A << std::endl;
    }   
    else {
	std::cout << A+B+C << std::endl;
    } 
    */
    /* Вариант 3.2  
    int N;
    std::cin >> N;
    std::cout << std::endl;
    switch(N) {
    	case 0: std::cout << "Zero" << std::endl; break;
	case 1: std::cout << "One" << std::endl; break;
	case 2: std::cout << "Two" << std::endl; break;
	case 3: std::cout << "Three" << std::endl; break;
	case 4: std::cout << "Four" << std::endl; break;
	case 5: std::cout << "Five" << std::endl; break;
	case 6: std::cout << "Six" << std::endl; break;
	case 7: std::cout << "Seven" << std::endl; break;
	case 8: std::cout << "Eight" << std::endl; break;
	case 9: std::cout << "Nine" << std::endl; break;
	default: std::cout << "Not numeric" << std::endl;
    }
	*/   
    /*	Вариант 3.3 (Если данные считываеются с клавиатуры)
    char x; // выбераем тип данных char, так как занимает меньше всего оп. памяти
    std::cin >> x; // в х попадает либо '-' либо  '1', так как char считывает по символьно
    std::cout << std::endl; 
    if (x == '-') //  соответственно делаем проверку и выводим результат
            std::cout << "Negative Number" << std::endl;
    else
            std::cout << "Positive Number" << std::endl;
    return 0;
    */
    /* Вариант 3.3 (Если данные изначально даны), переменные i2, х2 введены для наглядности
    int i1 = 1; int i2 = -1;
    bool x1 = (i1)+1; // полуается, что в х1 записано 1, так как тип данных bool, и любое число не равное нулю для него 1.   
    bool x2 = (i2)+1; // в х2 записано 0. В итоге мы используем 1 переменную bool, то есть мы используем 1 байт памяти.
    if (x1 == 1) {
	std::cout << "Positive Number" << std::endl;
    }
    else {
	std::cout << "Negative Number" << std::endl;    	
    } 
    if (x2 == 1) {
        std::cout << "Positive Number" << std::endl;
    }
    else {
        std::cout << "Negative Number" << std::endl;
    }
    */
}

