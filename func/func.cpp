#include "func.hpp"
#include <limits>

namespace myFunc 
{
    int Readn() {
        int n;
        std::cout << "Введите порядок матрицы: ";
        std::cin >> n;
        return n;
    }

    void ReadM(int n, int arr[][100]) {
        std::cout << "Введите матрицу: ";
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j){
                std::cin >> arr[i][j];
            }
        }
    }

    void WriteM(int n, int arr[][100]) {
        std::cout << "Матрица: " << std::endl;
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j){
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    bool Positive_el(int n, int arr[][100]) {
        for (int i=0; i<n; ++i) {
            if ((arr[i][i]<=0) || (arr[i][n-i-1]<=0)) {
                return 0;
            }
        }
        return 1;
    }

    bool Five_or_Three(int n1){
        while (n1>0) {
            if (n1%10==3 || n1%10==5) {
                return 1;
            }
            n1/=10;
        }
        return 0;
    }



    bool FT (int n, int arr[][100]) {
        for (int i=0; i<n; ++i){
            if (Five_or_Three(arr[i][i]) || Five_or_Three(arr[i][n-i-1])){
                return 1;        
            }
        }
        return 0;
    }

    int Mins(int n, int j, int mn, int arr[][100]) {
        for (int i=0; i<n; ++i){
            if (arr[i][j]<mn) {
                mn = arr[i][j];
            }
        }
        return mn;
    }

    int SummSq(int n, int j, int s, int arr[][100]) {
        for (int i=0; i<n; ++i){
                s += arr[i][j]*arr[i][j];
        }
        return s;
    }

    void ChangeMin(int n, int arr[][100]) {
        int MN = std::numeric_limits<int>::max();
        int mn;
        int s=0;
        for (int j=0; j<n; ++j) {
            mn = Mins(n, j, MN, arr);
            s = SummSq(n, j, s, arr);
            std::cout << s << " ";
            for (int i=0; i<n; ++i){
                if (arr[i][j]==mn)
                    arr[i][j] = s;    
            }
            s = 0;
        }
    }
}













