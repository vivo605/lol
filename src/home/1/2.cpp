#include "../../main.h"

/*
2. Умножатель
Попросить ввести число, вывести это число в квадрате с подсказкой, например:
"3 в квадрате = 9"
*/

void home1::task2() {
    const int number1 = Int(input("Введите число: "));

    print(String(number1 * number1));
}
