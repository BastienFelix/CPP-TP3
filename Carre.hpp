#ifndef CARRE_HPP
#define CARRE_HPP

#include "Rectangle.hpp"

using namespace std;

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
class carreT : public rectangleT<T, ReturnTypePerimetre, ReturnTypeSurface>
{
private:
    template <typename U, typename V, typename W>
    friend ostream &operator<<(ostream &, carreT<U, V, W> const &C);

protected:
    pointT<T> p;
    T cote;

public:
    carreT(pointT<T> p, T cote);
    T getCote() const;
    ReturnTypePerimetre perimetre() const override;
    ReturnTypeSurface surface() const override;
};

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
carreT<T, ReturnTypePerimetre, ReturnTypeSurface>::carreT(pointT<T> p, T cote)
{
    this->p = p;
    this->cote = cote;
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
ReturnTypePerimetre carreT<T, ReturnTypePerimetre, ReturnTypeSurface>::perimetre() const
{
    return static_cast<ReturnTypePerimetre>(4 * cote);
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
ReturnTypeSurface carreT<T, ReturnTypePerimetre, ReturnTypeSurface>::surface() const
{
    return static_cast<ReturnTypeSurface>(cote * cote);
}

template <typename T, typename ReturnTypePerimetre, typename ReturnTypeSurface>
T carreT<T, ReturnTypePerimetre, ReturnTypeSurface>::getCote() const
{
    return static_cast<ReturnTypeSurface>(cote * cote);
}

template <typename U, typename V, typename W>
ostream &operator<<(ostream &os, carreT<U, V, W> const &C)
{
    os << "(" << C.getPoint().getX() << "," << C.getPoint().getY() << "), " << C.getCote() << endl;

    return os;
}

#endif