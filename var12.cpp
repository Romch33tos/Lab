#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float a = 0.03244;
    float b = 0.0172;
    double pi = acos(-1.);
    float ecc = sqrt(1 - (pow(b, 2) / pow(a, 2)));
    float s1 = 2 * pi * (pow(b, 2) + ((a * b * asin(ecc)) / ecc));
    float v1 = (4 * pi * a * pow(b, 2)) / 3;
    float s2 = 2 * pi * (pow(a, 2) + ((pow(b, 2) * log((1 + ecc) / (1 - ecc))) / (2 * ecc)));
    float v2 = (4 * pi * pow(a, 2) * b) / 3;
    cout << fixed << setprecision(6);
    setlocale(LC_ALL, "russian");
    cout << "Вытянутый эллипсоид" << endl;
    cout << "Площадь: " << s1 << endl;
    cout << "Объём: " << v1 << endl;
    cout << "\nСплюснутый эллипсоид" << endl;
    cout << "Площадь: " << s2 << endl;
    cout << "Объём: " << v2 << endl;
    return 0;
}
