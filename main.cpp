#include <iostream>

#include <cmath>

#include <cctype>

#define ABS(a) ((a) > 0) ? +(a) : -(a)
//ЛР

//1)+ ctype.h — это тоже старая библиотека. Все стандартные заголовки с ".h" - это устаревшие версии прямиком из С++. Для подавляющего большинства из них есть обновлённый аналог без ".h" в конце, но с буквой "c" в начале. Например, для ctype.h это cctype
//2)+ Зачем вам в середине main вдруг #define float double? Очень плохой ход
//3)+ Преобразования в стиле С - char(i) и (double). Забудьте их. В С++ для преобразования типов используются cast'ы. В частности, static_cast.
//4)+ Ошибка в последней части задания. Посмотрите, какой ряд у вас получается и какой должен.


int main() {
    std::cout << "Задача 1" << std::endl;
    for (int i = 33; i < 127; ++i)
        std::cout << i << ' ' << static_cast<char>(i) << std::endl;

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
    int n = 0;
    double result1 = 0;
    double result2 = 0;
    double precision = 0;
    std::cout << "Enter precision" << std::endl;
    std::cin >> precision;
    double a = 0;
    std::cout << "enter a (-1 <= a <= 1)" << std::endl;
    std::cin >> a;

    result1 = atan(a);
    while (ABS(result1 - result2) > precision) {
        int term;
        term = (n%2 == 0) ? 1 : -1;
        result2 += term * static_cast<double>((pow(a, 2 * n + 1)) / (2 * n + 1));
        n++;
    }
    std::cout << "Precision = " << precision << std::endl;
    std::cout << "n = " << n << std::endl;

    return 0;

}

#undef ABS