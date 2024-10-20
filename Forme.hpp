#ifndef FORME_HPP
#define FORME_HPP

#include <iostream>
#include "PointT.hpp"

using namespace std;

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
class FormeT
{
private:
    template <typename U, typename V, typename W>
    friend ostream &operator<<(ostream &os, const FormeT<U, V, W> &f);

protected:
    pointT<T> centre;

public:
    FormeT(const pointT<T> &c) : centre(c) {}
    FormeT() : centre() {}
    virtual ReturnTypePerimetre perimetre() const = 0;
    virtual ReturnTypeSurface surface() const = 0;
};

template <typename U, typename V, typename W>
ostream &operator<<(ostream &os, const FormeT<U, V, W> &f)
{
    os << "Forme au centre : " << f.centre;
    return os;
}

#endif