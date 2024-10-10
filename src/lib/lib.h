#pragma once

// boost
#include <iostream> // Для консольного ввода/вывода
#include <cmath>    // Для математических операций
#include <cstdlib>  // Для генерации случайных чисел

// Стандартные функции

using std::string;

using std::cin;
using std::cout;
using std::endl;

using std::invalid_argument;

// Случайности

int random(const int min, const int max);

// Математика

double roundUp(double value);
double roundDown(double value);

// Консоль

string input();
string input(const string &msg);

void print(const string &msg);

void clearTerminal();

// Типы

int Int(const string &value);
float Float(const string &value);
double Double(const string &value);

string String(int value);
string String(double value);
