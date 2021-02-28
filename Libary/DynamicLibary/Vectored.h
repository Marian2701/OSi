//
// Created by Maryan_Makarski on 27.02.21.
//

#pragma once
#ifndef LABA1_VECTORED_H
#define LABA1_VECTORED_H

#include "../StaticLibary/Number.h"
#include "cmath"

class Vectored {
private:
    Numbers::Number x, y;
public:

    Vectored();

    Vectored(const Numbers::Number &x, const Numbers::Number &y);

    [[nodiscard]] const Numbers::Number &getX() const;

    [[maybe_unused]] void setX(const Numbers::Number &number);

    [[nodiscard]] const Numbers::Number &getY() const;

    [[maybe_unused]] void setY(const Numbers::Number &number);

    [[nodiscard]] Numbers::Number getRo() const;

    [[maybe_unused]] Numbers::Number getPhi();

    Vectored operator+(const Vectored &a) const;

    Vectored operator-(const Vectored &a) const;

    friend std::ostream &operator<<(std::ostream &out, const Vectored &vectored);
};


#endif //LABA1_VECTORED_H
