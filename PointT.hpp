#ifndef POINTT_HPP
#define POINTT_HPP

#include <iostream>

using namespace std;

template <typename T>
class pointT
{
private:
    template <typename U>
    friend ostream &operator<<(ostream &os, const pointT<U> &point);

protected:
    T x;
    T y;

public:
    pointT();

    pointT(T x, T y);
    pointT(pointT const &d);
    T getX() const;
    void setX(T x);
    T getY() const;
    void setY(T x);
    T norm2() const;
    void translater(T dx, T dy);
};

template <>
void pointT<string>::translater(string dx, string dy)
{
    swap(x, dx);
    swap(y, dy);
}

template <typename T>
pointT<T>::pointT(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <typename T>
pointT<T>::pointT()
{
    this->x = T(0);
    this->y = T(0);
}

template <typename T>
pointT<T>::pointT(pointT<T> const &d)
{
    x = d.x;
    y = d.y;
}

template <typename T>
T pointT<T>::getX() const
{
    return this->x;
}

template <typename T>
void pointT<T>::setX(T x)
{
    this->x = x;
}

template <typename T>
T pointT<T>::getY() const
{
    return this->y;
}

template <typename T>
void pointT<T>::setY(T y)
{
    this->y = y;
}

template <typename T>
T pointT<T>::norm2() const
{
    return x * x + y * y;
}

template <typename T>
void pointT<T>::translater(T dx, T dy)
{
    x += dx;
    y += dy;
}

template <typename T>
ostream &operator<<(ostream &os, const pointT<T> &point)
{
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

#endif // POINTT_HPP
