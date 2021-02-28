#include "Number.h"
#include "iostream"
#include "Vectored.h"

using namespace Numbers;

int main() {

    //Работа функции createElement с разными типами данных, а также перегрузка вывода

    short s = 1;
    auto sn = Number::createElement(s);
    std::cout << "The value of this Number is: " << sn;
    unsigned short su = 2;
    auto sun = Number::createElement(su);
    std::cout << "The value of this Number is: " << sun;

    int i = 3;
    auto in = Number::createElement(i);
    std::cout << "The value of this Number is: " << in;
    unsigned int iu = 4;
    auto iun = Number::createElement(iu);
    std::cout << "The value of this Number is: " << iun;

    long l = 5;
    auto ln = Number::createElement(l);
    std::cout << "The value of this Number is: " << ln;
    unsigned long lu = 6;
    auto lun = Number::createElement(lu);
    std::cout << "The value of this Number is: " << lun;

    long ll = 7;
    auto lln = Number::createElement(ll);
    std::cout << "The value of this Number is: " << lln;
    unsigned long llu = 8;
    auto llun = Number::createElement(llu);
    std::cout << "The value of this Number is: " << llun;

    float f = 8.5;
    auto fn = Number::createElement(f);
    std::cout << "The value of this Number is: " << fn;
    double d = 9.3;
    auto dn = Number::createElement(d);
    std::cout << "The value of this Number is: " << dn;
    double ld = 11.1;
    auto ldn = Number::createElement(ld);
    std::cout << "The value of this Number is: " << ldn;

    auto nn = Number::createElement(ld);
    std::cout << "The value of this Number is: " << nn;

    //Работа перегруженных арифмитических операторов и функции sqr()

    std::cout << "\nThe sum of values sn and sun = " << sn + sun;
    std::cout << "The subtraction of values in and iun = " << in - iun;
    std::cout << "The multiplication of values f and ll = " << fn * lln;
    std::cout << "The division of values d and ld = " << dn / ldn;
    std::cout << "The sqrt of value iun = " << iun.sqr();

    //проверка рабоыты функций по возвраты числа с 0 и 1

    auto numberOne = Number::getOneElement();
    std::cout << "\nThe value of this Number is: " << numberOne;
    auto numberZero = Number::getZeroElement();
    std::cout << "The value of this Number is: " << numberZero;

    //Проверка работоспособности оператора =
    auto value = ld + d;
    std::cout << "\nCheck of operator = " << value;

    //Провекрка класса Vectored

    auto vector1 = Vectored(sn,sn);
    auto vector2 = Vectored(in, in);

    //Провекрка работы перевод в полярные координаты

    std::cout << "\n\nThe value ro of vector2 is: " << vector2.getRo();
    std::cout << "The value phi of vector2 is: " << vector2.getPhi();

    //Сложение и вычитание векторов а также перегрузки <<

    std::cout << "\nThe sum  of vector2 and vector1 is:\n" << vector2 + vector1;
    std::cout << "The subtraction  of vector2 and vector1 is:\n" << vector2 - vector1;


    return 0;
}
