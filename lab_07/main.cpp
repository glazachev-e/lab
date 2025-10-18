// Вариант 3

#include "../func/func.hpp"
using namespace myFunc;
int main() {
	int arr[100][100];
    int n = Readn();
    ReadM(n, arr);
    if (Positive_el(n, arr) && FT(n, arr)){
        ChangeMin(n, arr);
    }
    WriteM(n, arr);
}
