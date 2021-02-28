#include "Number.h"
#include <cmath>

Numbers::Number::Number(short a) : value(a) {}

Numbers::Number::Number(unsigned short a) : value(a) {}

Numbers::Number::Number(int a) : value(a) {}

Numbers::Number::Number(unsigned int a) : value(a) {}

Numbers::Number::Number(long a) : value(a) {}

Numbers::Number::Number(unsigned long a) : value(a) {}

Numbers::Number::Number(long long int a) : value(a) {}

Numbers::Number::Number(unsigned long long int a) : value(a) {}

Numbers::Number::Number(float a) : value(a) {}

Numbers::Number::Number(double a) : value(a) {}

Numbers::Number::Number(long double a) : value(a) {}

Numbers::Number Numbers::Number::operator-(const Numbers::Number &a) const {
    return Numbers::Number(this->value - a.value);
}


Numbers::Number Numbers::Number::operator/(const Numbers::Number &a) const {
    return Numbers::Number(this->value / a.value);
}

Numbers::Number Numbers::Number::sqr() {
    this->value = sqrt(this->value);
    return *this;
}


Numbers::Number::Number(Numbers::Number const &number) : value(number.value) {}

long double Numbers::Number::getValue() const {
    return value;
}

[[maybe_unused]] void Numbers::Number::setValue(long double d) {
    Number::value = d;
}

Numbers::Number::Number() : value(0) {}

Numbers::Number &Numbers::Number::operator=(const Numbers::Number &a) {
    this->value = a.getValue();
    return *this;
}

Numbers::Number Numbers::Number::operator*(const Numbers::Number &a) const {
    return Numbers::Number(this->value * a.value);
}

Numbers::Number Numbers::Number::operator+(const Numbers::Number &a) const {
    return Numbers::Number(this->value + a.value);
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(short a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(unsigned short a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(int a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(unsigned int a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(long a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(unsigned long a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(long long int a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(unsigned long long int a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(float a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(double a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::createElement(long double a) {
    return Numbers::Number(Numbers::Number(a));
}

[[maybe_unused]] Numbers::Number Numbers::Number::getOneElement() {
    return Numbers::Number(Numbers::Number(1));
}

[[maybe_unused]]  Numbers::Number Numbers::Number::getZeroElement() {
    return Numbers::Number(Numbers::Number(0));
}

Numbers::Number Numbers::Number::createElement(Numbers::Number a) {
    return a;
}

std::ostream &Numbers::operator<<(std::ostream &out, const Numbers::Number &number) {
    out << number.getValue() << "\n";
    return out;
}

