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
                x[i][j] = m1;
                if (m1<mn || (m1==mn && j<t)) {
                    mn = m1;
                    t = j;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (j==t && x[i][j]<0) {
                    x[i][j] = 0;
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
        int x[20000];
        int n2, n3, c1 = 0, c2;
        bool flag1, flag2;
        std::cout << "Введите члены последовательности: ";
		for (int i = 0; i < n; ++i) {
            std::cin >> n1;
            x[i]=n1;
        }
        int i = 0;
        while (i<n) {
            n1 = x[i];
            flag1 = 0;
            c1 = 0;
            while (n1>0 && !flag1){
                n2 = x[i];
                ++c1;
                c2 = 0;
                while (n2>0){
                    ++c2;
                    if (n1%10==n2%10 && c1!=c2){
                        flag1 = 1;
                        break;                    
                    }
                    n2/=10;
                }
                n1/=10;
            }
            if (flag1) {
                for (int j = i; j<n; ++j) {                   
                        x[j] = x[j+1];
                }            
            }
            else {
                ++i;
            }
        }
        i = 0;
        while (i<20000){
            n1 = x[i];
            flag2 = 0;
            while (n1>0) {
                if (n1%10==5){
                    flag2 = 1;
                    break;                
                }
                n1/=10;
            }
            if (flag2) {
                n1 = x[i];
                for (int j = i+1; j<20000; ++j) {
                    n2 = x[j]; 
                    x[j] = n1; 
                    n1 = n2;              
                }
                ++i;
            }
            ++i;
        }
        
        
        
        std::cout << "Итоговая последовательность: ";
        for (int i = 0; i < 15; ++i) {
            std::cout << x[i] << " ";
        }
        std::cout << std::endl;
        
	}
	else {
		std::cout << "Введен несуществующий пункт" << std::endl;
	}
	return 0;
}
