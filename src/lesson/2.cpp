#include "../main.h"

void lesson2::theme1() {
    const int age = 20;
    const int adultAge = 18;

    const bool isAdmin = true; // boolean

    /*
        && и
        || или
        ! не

        == равно
        != не равно

        > >= < <=

        0 -> false
        всё остальное -> true
    */

    if (10) {

    }
    
    if (age >= 18) {
        print(";)");
    } 
    else if (isAdmin) {
        print("Здравствуйте, господин");
    }
    else {
        print("Обойдёшся)))");
    }
}

enum class ZeroErros {
    isNotZero = 1,
    nothing = 2,
}; // Внимание! Нужна ";"

// using lesson2::ZeroErros;

string lesson2::happyZero(const int n) {
    if (n == 0) {
        return "Ура, это ноль!"; // нормальное завершение функции со значением
    }
    throw ZeroErros::isNotZero; // прерывание функции с ошибкой
}

void lesson2::theme2() {
    try {
        happyZero(2);
    } catch (ZeroErros code) { // ловим ошибку ZeroErros
        if (code == ZeroErros::isNotZero) { // ZeroErros::isNotZero
            print("Это не ноль!");
        } else {
            throw code; // не смогли обработать ошибку, бросаем её снова
        }
    }
    
    try {
        const int n = Int(input("Введите любое число: "));
        print(String(n + 1));
    } catch (invalid_argument &error) {
        print("Ошибка!");
    }
    print("Ценок");
}
