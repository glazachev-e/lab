// Вариант 3

#include <iostream>

int main() {
	short n;
	std::cout << "Введите номер пункта: ";
	std::cin >> n;
	if (n==1) {
		std::cout << "Пункт 1." << std::endl;
		int n1;
        std::cout << "Введите длину последовательности: ";
		std::cin >> n1;
		const int n = n1;
        int x[n];
        std::cout << "Введите члены последовательности: ";
		for (int i = 0; i < n; ++i) {
            std::cin >> n1;
            x[i] = n1;
        }
        int s = 0;
        bool flag = 0;
        for (int i = 0; i < n; ++i) {
            n1 = x[i];
            while (n1 > 0) {
                s += n1%10;
                n1 /= 10;
            }
            if (s == 14) {
                flag = 1;
                break;            
            }
            else {
                s = 0;
            }
        }
        if (flag) {
            int key;
            int i;
            for (int j = 1; j < n; ++j) {
                key = x[j];
                i = j-1;
                while (i>-1 && x[i]>key) {
                    x[i+1] = x[i];
                    i = i-1;
                }
                x[i+1] = key;
            }
            std::cout << "Отсортированная последовательность: ";
            for (int i = 0; i < n; ++i) {
                std::cout << x[i] << " ";
            }
            std::cout << std::endl;
        }
        else {
            std::cout << "Члена последовательности с суммой цифр равной 14 - нет" << std::endl;
        }
	}
	else if (n==2) {
		std::cout << "Пункт 2." << std::endl;
        int n1;
        std::cout << "Введите длину последовательности: ";
		std::cin >> n1;
		const int n = n1;
        int x[n];
        int y[n];
        int z[n];
        int mx = -1;
        std::cout << "Введите члены последовательности: ";
		for (int i = 0; i < n; ++i) {
            std::cin >> n1;
            x[i] = n1;
            while (n1 > 0) {
                if (n1 < 10) {
                    y[i] = n1;
                }
                if (n1%10 > mx) {
                    mx = n1%10;
                }
                n1 /= 10;
            }
            z[i] = mx;
            mx = 0;
        }
        int key1, key2, key3, i;
        for (int j = 1; j < n; ++j) {
            key1 = y[j];
            key3 = z[j];
            key2 = x[j];
            i = j - 1;
            while (i > -1 && y[i] > key1) {
                y[i+1] = y[i];
                x[i+1] = x[i];
                z[i+1] = z[i];
                i = i - 1;                               
            }
            y[i+1] = key1;
            x[i+1] = key2;
            z[i+1] = key3;
        }
        for (int j = 1; j < n; ++j) {
            key1 = z[j];
            key2 = y[j];
            key3 = x[j];
            i = j - 1;
            while (i > -1 && z[i] > key1 && y[i] >= key2) {
                z[i+1] = z[i];
                y[i+1] = y[i];
                x[i+1] = x[i];
                i = i - 1;                               
            }
            z[i+1] = key1;
            y[i+1] = key2;
            x[i+1] = key3;
        }
        for (int j = 1; j < n; ++j) {
            key1 = x[j];
            key2 = y[j];
            key3 = z[j];
            i = j - 1;
            while (i > -1 && x[i] > key1 && y[i] >= key2 && z[i] >= key3) {
                x[i+1] = x[i];
                y[i+1] = y[i];
                z[i+1] = z[i];
                i = i - 1;                               
            }
            x[i+1] = key1;
            y[i+1] = key2;
            z[i+1] = key3;
        }
        std::cout << "Отсортированная последовательность: ";
        for (int i = 0; i < n; ++i) {
            std::cout << x[i] << " ";
        }
        std::cout << std::endl;
	}
	else if (n==3) {
		std::cout << "Пункт 3." << std::endl;
		int n1, m1;
        std::cout << "Введите кол-во строк: ";
		std::cin >> n1;
        std::cout << "Введите кол-во столбцов: ";
		std::cin >> m1;
		const int n = n1;
        const int m = m1;
        int x[n][m];
        int t, mn = 10000000;
        std::cout << "Введите матрицу(по строчно): " << std::endl;
		for (int i = 0; i < n; ++i) {
            std::cout << "Введите "  << i+1 << " строку: ";
            for (int j = 0; j < m; ++j) {
                std::cin >> m1;
                if (m1 < 0) {
                    m1 = 0;
                }
                x[i][j] = m1;
                if (m1<mn || (m1==mn && j<t)) {
                    mn = m1;
                    t = j;
                }
            }
        }
        std::cout << "Матрица: " << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << x[i][j] << " "; 
            }
            std::cout << std::endl;
        }
        std::cout << "Номер столбца мин. эл.(начиная с 1) - " << t+1 << std::endl;
	}
	else if (n==4) {
		std::cout << "Пункт 4." << std::endl;
        int n1;
        std::cout << "Введите длину последовательности: ";
		std::cin >> n1;
		const int n = n1;
        int x[n];
        std::cout << "Введите члены последовательности: ";
		for (int i = 0; i < n; ++i) {
            std::cin >> n1;
            x[i] = n1;
        }
        std::cout << "Введите сколько членов хотите удалить: ";
		std::cin >> n1;
        if (n1!=0)
            std::cout << "Введите номера элементов, которые хотите удалить(начиная с нуля): ";
        const int m = n1;
        int y[m];
        for (int i = 0; i < m; ++i) {
            std::cin >> n1;
            y[i] = n1;
        }
        std::cout << "Введите сколько членов хотите продублировать: ";
		std::cin >> n1;
        if (n1!=0)
            std::cout << "Введите номера элементов, которые хотите продублировать(не совпадают с удалёнными): ";
        const int l = n1;
        int z[l];
        for (int i = 0; i < l; ++i) {
            std::cin >> n1;
            z[i] = n1;
        }
        const int f = n-m+l;
        int w[f];
        int c = 0;
        bool flag;
        for (int i = 0; i < n; ++i){
            flag = 0;
            for(int j = 0; j < m; ++j) {
                if (i == y[j]) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                continue;
            }
            w[c] = x[i];
            ++c;
            for(int j = 0; j < l; ++j) {
                if (i == z[j]) {
                    w[c] = x[i];
                    ++c;
                }
            }
        }
        std::cout << "Итоговая последовательность: ";
        for (int i = 0; i < f; ++i) {
                std::cout << w[i] << " ";
        }
        std::cout << std::endl;
	}
	else {
		std::cout << "Введен несуществующий пункт" << std::endl;
	}
	return 0;
}
