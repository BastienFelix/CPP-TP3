#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include "Forme.hpp"

using namespace std;

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
class rectangleT : public FormeT<T, ReturnTypePerimetre, ReturnTypeSurface>
{
private:
    pointT<T> p;
    T largeur;
    T hauteur;
    template <typename U, typename V, typename W>
    friend ostream &operator<<(ostream &, rectangleT<U, V, W> const &R);

public:
    rectangleT();
    rectangleT(pointT<T> &p, T largeur, T hauteur);
    pointT<T> getPoint() const;
    T getL() const;
    T getH() const;
    ReturnTypePerimetre perimetre() const override;
    ReturnTypeSurface surface() const override;
};

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::rectangleT() : p(), largeur(T()), hauteur(T()) {}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
ReturnTypePerimetre rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::perimetre() const
{
    return static_cast<ReturnTypePerimetre>(2 * (largeur + hauteur));
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
ReturnTypeSurface rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::surface() const
{
    return static_cast<ReturnTypeSurface>(largeur * hauteur);
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::rectangleT(pointT<T> &p, T l, T h)
{
    this->p = p;
    this->hauteur = h;
    this->largeur = l;
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
T rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::getL() const
{
    return this->largeur;
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
T rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::getH() const
{
    return this->hauteur;
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
pointT<T> rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>::getPoint() const
{
    return this->p;
}

template <typename U, typename V, typename W>
ostream &operator<<(ostream &os, rectangleT<U, V, W> const &R)
{
    os << "(" << R.getPoint().getX() << "," << R.getPoint().getY() << "), " << R.getH() << ", " << R.getL() << endl;

    return os;
}

#endif