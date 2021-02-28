#pragma once
#ifndef LABA1_NUMBER_H
#define LABA1_NUMBER_H

#include "iostream"

namespace Numbers {
    class Number {
    private:
        long double value;

        explicit Number(short a);

        explicit Number(unsigned short a);

        explicit Number(int a);

        explicit Number(unsigned int a);

        explicit Number(long a);

        explicit Number(unsigned long a);

        explicit Number(long long a);

        explicit Number(unsigned long long a);

        explicit Number(float a);

        explicit Number(double a);

        explicit Number(long double a);

        Number(Number const &number);

    public:
        [[nodiscard]] long double getValue() const;

        [[maybe_unused]] void setValue(long double d);

        Number operator+(const Number &a) const;

        Number operator-(const Number &a) const;

        Number operator*(const Number &a) const;

        Number operator/(const Number &a) const;

        Number &operator=(const Number &a);

        friend std::ostream &operator<<(std::ostream &out, const Number &number);

        Number sqr();

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(short a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(unsigned short a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(int a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(unsigned int a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(long a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(unsigned long a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(long long a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(unsigned long long a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(float a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(double a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(long double a);

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number getOneElement();

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number getZeroElement();

        [[maybe_unused]] [[maybe_unused]] static Numbers::Number createElement(Number a);

        explicit Number();
    };
}

#endif //LABA1_NUMBER_H
