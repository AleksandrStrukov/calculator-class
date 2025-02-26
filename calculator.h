#pragma once

#include <string>

using Number = long double;

// Разместите тут реализацию класса Calculator из вашего решения
// задания темы «Классы».
// Реализуйте здесь класс Calculator.
class Calculator {
   static Number res;
   static Number save;
    bool is_not_empty = false;
public:
    void Set(Number n);
    Number GetNumber() const;
    void Add(Number n);
    void Sub(Number n);
    void Div(Number n);
    void Mul(Number n);
    void Pow(Number n);
    void Save();
    void Load();
    bool HasMem() const;
    std::string GetNumberRepr() const;


};
