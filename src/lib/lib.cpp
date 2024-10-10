#include "lib.h"

#include <ctime>   // Для инициализации генератора случайных чисел
#include <cstdlib> // Для очистки консоли

// Случайности

int random(const int min, const int max) {
    static bool firstCall = true;
    if (firstCall) {
        firstCall = false;
        std::srand(std::time(0));
    }
    return min + std::rand() % (max - min + 1);
}

// Математика

double roundUp(double value) {
    return std::ceil(value);
}

double roundDown(double value) {
    return std::floor(value);
}

// Консоль

string input() {
    string value;
    cin >> value;
    return value;
}

string input(const string &msg) {
    cout << msg;
    return input();
}

void print(const string &msg) {
    cout << msg << endl;
}

void clearTerminal() {
#if defined(_WIN32) || defined(_WIN64)
    std::system("cls");
#else
    std::system("clear");
#endif
}

// Типы

int Int(const string &value) {
    return std::stoi(value);
}

double Double(const string &value) {
    return std::stod(value);
}

float Float(const string &value) {
    return std::stof(value);
}

string String(int value) {
    return std::to_string(value);
}

string String(double value) {
    return std::to_string(value);
}
