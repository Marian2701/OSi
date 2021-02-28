//
// Created by Maryan_Makarsky on 27.02.21.
//

#include "Vectored.h"
#include "../StaticLibary/Number.h"

using namespace Numbers;

const Numbers::Number &Vectored::getX() const {
    return x;
}

[[maybe_unused]] void Vectored::setX(const Numbers::Number &number) {
    this->x = number;
}

const Numbers::Number &Vectored::getY() const {
    return y;
}

[[maybe_unused]] void Vectored::setY(const Numbers::Number &number) {
    Vectored::y = number;
}

Vectored::Vectored(const Number &x, const Number &y) {
    this->setX(x);
    this->setY(y);
}

Vectored::Vectored() {
    this->x = Number::createElement(0);
    this->y = Number::createElement(0);
}

Numbers::Number Vectored::getRo() const {
    return ((this->getX() * this->getX()) + (this->getY() * this->getY())).sqr();
}

[[maybe_unused]] Numbers::Number Vectored::getPhi() {
    return Numbers::Number::createElement(atan((x / y).getValue()));
}

Vectored Vectored::operator+(const Vectored &a) const {
    return Vectored(this->getX() + a.getX(), this->getY() + a.getY());
}

Vectored Vectored::operator-(const Vectored &a) const {
    return Vectored(this->getX() - a.getX(), this->getY() - a.getY());
}

std::ostream &operator<<(std::ostream &out, const Vectored &vectored) {
    out<<"The x is: "<< vectored.getX() <<"The y is: "<<vectored.getY();
    return out;
}




