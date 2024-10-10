#include "../main.h"

// комментарий
/*
    многострочный
    комментарий

    (для документации)
*/

// типы данных 

/**
 * Коммент
 */
void lesson1::theme1()
{
    int number = 1; // integer
    double n = 2.5; // 2x float
    char c = '!';
    bool flag = true; // boolean (true/false)
    // string name = "";

    // // язык C
    // printf
    // scanf

    // // язык C++
    // cout << "Hello" << endl;
    // cout << "Hello\n";

    // int a;
    // cin >> a;
    // cout << a;

    string name = input("Input name: ");
    int age = Int(input("Input age: "));
    print(name + " " + String(age));

    age + 1 - 5 * 2 / 3;

    // % - остаток от деления
    1 % 2; // 1
    3 % 2; // 1
    14 % 5; // 4
    12 % 6; // 0

    int n1 = 2;
    int n2 = 3;
    int n3 = n1 / n2; // 0
    int n4 = n1 % n2; // 2
    double n5 = ((double) n1) / ((double) n2); // 0.
    print(String(n5));

    // функции округления
    round(2.5); // 3
    roundUp(2.5); // ceil(2.5) 3
    roundDown(2.5); // floor(2.5) 2

    print(String(roundUp(2.5)));

    int r = random(1, 10);

    r = r + 1;
    r += 1;
    r++;

    r = r - 1;
    r -= 1;
    r--;

    r = r * 1;
    r *= 1;
    // r**;
}
