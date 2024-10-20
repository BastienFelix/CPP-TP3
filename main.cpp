#include <iostream>
#include "PointT.hpp"
#include "Carre.hpp"

using namespace std;

int main()
{
    // Test avec des entiers
    pointT<int> p1(3, 4);
    std::cout << "Point p1 avant translation : " << p1 << std::endl;
    p1.translater(1, 2);
    std::cout << "Point p1 après translation : " << p1 << std::endl;

    // Test avec des chaînes de caractères (std::string)
    pointT<std::string> p2("abc", "xyz");
    std::cout << "Point p2 avant translation : " << p2 << std::endl;
    p2.translater("def", "uvw");
    std::cout << "Point p2 après translation (avec swap) : " << p2 << std::endl;

    return 0;
}

// // Test Carre
// int main()
// {
//     // Jeu d'essai 1 : Carré avec des entiers
//     pointT<int> p1(0, 0); // Point d'origine
//     carreT<int, int, int> carre1(p1, 5);

//     cout << "Carré 1 : " << carre1; // Affichage du carré
//     cout << "Périmètre : " << carre1.perimetre() << endl;
//     cout << "Surface : " << carre1.surface() << endl;

//     // Jeu d'essai 2 : Carré avec des doubles
//     pointT<double> p2(2.5, 3.5);
//     carreT<double, double, double> carre2(p2, 7.5);

//     cout << "Carré 2 : " << carre2;
//     cout << "Périmètre : " << carre2.perimetre() << endl;
//     cout << "Surface : " << carre2.surface() << endl;

//     // Jeu d'essai 3 : Carré avec périmètre en double et surface en int
//     pointT<int> p3(1, 2);
//     carreT<int, double, int> carre3(p3, 4);

//     cout << "Carré 3 : " << carre3;
//     cout << "Périmètre : " << carre3.perimetre() << endl;
//     cout << "Surface : " << carre3.surface() << endl;

//     // Jeu d'essai 4 : Carré avec de très grandes valeurs (vérification des limites)
//     pointT<long> p4(1000000, 2000000);
//     carreT<long, long, long> carre4(p4, 500000);

//     cout << "Carré 4 : " << carre4;
//     cout << "Périmètre : " << carre4.perimetre() << endl;
//     cout << "Surface : " << carre4.surface() << endl;

//     return 0;
// }

// // Test Rectangle
// int main()
// {
//     // Jeu d'essai 1 : Rectangle avec des entiers
//     pointT<int> p1(0, 0); // Point d'origine
//     rectangleT<int, int, int> rect1(p1, 5, 10);

//     cout << "Rectangle 1 : " << rect1; // Affichage du rectangle
//     cout << "Périmètre : " << rect1.perimetre() << endl;
//     cout << "Surface : " << rect1.surface() << endl;

//     // Jeu d'essai 2 : Rectangle avec des doubles
//     pointT<double> p2(2.5, 3.5);
//     rectangleT<double, double, double> rect2(p2, 7.5, 12.3);

//     cout << "Rectangle 2 : " << rect2;
//     cout << "Périmètre : " << rect2.perimetre() << endl;
//     cout << "Surface : " << rect2.surface() << endl;

//     // Jeu d'essai 3 : Rectangle avec périmètre en double et surface en int
//     pointT<int> p3(1, 2);
//     rectangleT<int, double, int> rect3(p3, 4, 9);

//     cout << "Rectangle 3 : " << rect3;
//     cout << "Périmètre : " << rect3.perimetre() << endl;
//     cout << "Surface : " << rect3.surface() << endl;

//     // Jeu d'essai 4 : Rectangle avec de très grandes valeurs (vérification des limites)
//     pointT<long> p4(1000000, 2000000);
//     rectangleT<long, long, long> rect4(p4, 500000, 1000000);

//     cout << "Rectangle 4 : " << rect4;
//     cout << "Périmètre : " << rect4.perimetre() << endl;
//     cout << "Surface : " << rect4.surface() << endl;

//     return 0;
// }

// // Test Point
// int main()
// {
//     // Tester le constructeur par défaut
//     pointT<int> p1;
//     cout << "p1 (constructeur par défaut) : " << p1 << endl; // Attendu : (0, 0)

//     // Tester le constructeur avec des arguments
//     pointT<int> p2(3, 4);
//     cout << "p2 (constructeur avec arguments) : " << p2 << endl; // Attendu : (3, 4)

//     // Tester la méthode getX() et getY()
//     cout << "p2.getX() : " << p2.getX() << endl; // Attendu : 3
//     cout << "p2.getY() : " << p2.getY() << endl; // Attendu : 4

//     // Tester la méthode setX() et setY()
//     p2.setX(5);
//     p2.setY(6);
//     cout << "p2 après setX(5) et setY(6) : " << p2 << endl; // Attendu : (5, 6)

//     // Tester la méthode norm2()
//     cout << "p2.norm2() : " << p2.norm2() << endl; // Attendu : 61 (5*5 + 6*6)

//     // Tester la méthode translater()
//     p2.translater(1, 2);
//     cout << "p2 après translater(1, 2) : " << p2 << endl; // Attendu : (6, 8)

//     // Tester le constructeur par copie
//     pointT<int> p3(p2);
//     cout << "p3 (copie de p2) : " << p3 << endl; // Attendu : (6, 8)

//     return 0;
// }
