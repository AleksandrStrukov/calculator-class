#include "calculator.h"

#include <cassert>
#include <cmath>

using namespace std;
#include <string>

using Number = long double;
void Calculator::Set(Number n) {
    this->res = n;
}
Number Calculator::GetNumber() const {
    if (!this->res) {
        return 0;
    }
    return this->res;
}
void Calculator::Add(Number n) {
    this->res+=n;
}
void Calculator::Sub(Number n) {
    this->res-=n;
}
void Calculator::Div(Number n) {
    this->res/=n;
}
void Calculator::Mul(Number n) {
    this->res*=n;
}
void Calculator::Pow(Number n) {
    this->res=pow(this->res,n);
}
void Calculator::Save() {
    this->save = this->res;
    this->is_not_empty=true;
}
void Calculator::Load() {

    this->res = this->save;
}

bool Calculator::HasMem() const {
    if (this->is_not_empty) {return true;}
    return false;
}
std::string Calculator::GetNumberRepr() const {
    return std::to_string (this->res);
}
