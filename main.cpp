#include <iostream>

#include <cmath>

#include <ctype.h>

#define ABS(a) ((a) > 0) ? +(a) : -(a)
//ЛР2:
//1. math.h — старая библиотека, пришедшая из С. В С++ используйте cmath
//2. Выводятся только знаки и не выводятся их коды
//3. Из какой библиотеки взялась toascii?
//4. Не выполнено последнее задание ЛР


int main() {
    std::cout << "Задача 1" << std::endl;
    for (int i = 33; i < 127; ++i)
        std::cout << i << ' ' << char(i) << std::endl;

    std::cout << "Задача 2" << std::endl;
    char input;
    std::cout << "Введите значение" << std::endl;
    std::cin >> input;
    if ((input >= 48) && (input <= 57)) {
        std::cout << input << " is a digit" << std::endl;
    }
    if ((65 <= input && input <= 90) || (97 <= input && input <= 122)) {
        std::cout << input << " is a character" << std::endl;
    } else {
        std::cout << input << " is an unknown symbol" << std::endl;
    }

    std::cout << "Задача 3" << std::endl;
    int x = 0;
    std::cin >> x;
    if (x % 5 == 0) {
        std::cout << -x << std::endl;
    }
    if (x % 5 == 1) {
        std::cout << x << std::endl;
    }
    if (x % 5 == 2) {
        std::cout << 5 << std::endl;
    }
    if (x % 5 == 3) {
        std::cout << 3 - x << std::endl;
    }
    if (x % 5 == 4) {
        std::cout << 0 << std::endl;
    }
    std::cout << "Задача 4" << std::endl;
    int n = 1;
    double result1 = 0;
    double result2 = 0;
#define float double
    float precision = 0;
    std::cout << "Enter precision" << std::endl;
    std::cin >> precision;
    float a = 0;
    std::cout << "enter a (-1 <= a <= 1)" << std::endl;
    std::cin >> a;

    result1 = atan(a);
    while (ABS(result1 - result2) > precision) {
        int term;
        term = (n%2 == 0) ? 1 : -1;
        result2 += term * (double) (pow(a, 2 * n + 1)) / (2 * n + 1);
        n++;
    }
    std::cout << "Precision = " << precision << std::endl;
    std::cout << "n = " << n << std::endl;

    return 0;

}

#undef ABS
