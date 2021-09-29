#include <iostream>
using namespace std;
#include <math.h>
#include "roundCone.h"


void roundCone::In(void) {

    cout << "\nВведите координаты центра окружности: ";
    cin >> x >> y >> z;

    cout << "\nВведите радиус: ";
    cin >> r;

    cout << "\nВведите высоту: ";
    cin >> h;

    return;
}

void roundCone::Out(void) {
    cout << "\nКоординаты центра окружности: ";
    cout << "(" << x << "; " << y << "; " << z << ")" << endl;

    cout << "Радиус: ";
    cout << r << endl;

    cout << "Высота: ";
    cout << h << endl;

    return;
}

double roundCone::Volume()const {

    return 3.14 * r * r * h / 3;
}

const roundCone& roundCone::operator=(const roundCone& R) {

    if (this == &R)  //проверка, не проводится ли присваивание самому себе типа A=A
        return *this;

    x = R.x;
    y = R.y;
    z = R.z;
    r = R.r;
    h = R.h;

    return *this;
}

const roundCone& roundCone::operator/=(double R) {
    x /= R;
    y /= R;
    z /= R;
    r /= R;
    h /= R;

    return *this;
}

bool roundCone::operator<=(const roundCone& R) {

    double V1, V2;

    V1 = this->Volume();
    V2 = R.Volume();

    if (V1 <= V2)
        return true;
    else
        return false;
}

istream& operator>>(istream& stream, roundCone& V) {

    cout << ("\nВведите координаты (x, y, z), радиус и высоту конуса: ");
    stream >> V.x >> V.y >> V.z >> V.r >> V.h;

    return stream;
}

ostream& operator<<(ostream& stream, const roundCone& V) {

    stream << "(" << V.x << "; " << V.y << "; "<< V.z <<")" " r = "<< V.r <<", h = "<< V.h <<"";
    stream << endl;

    return stream;
}