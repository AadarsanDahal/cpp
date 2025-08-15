#include<iostream>
using namespace std;

class Complex {
    int real, img;
    public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    friend ostream& operator << (ostream &out, const Complex &c);
    friend istream& operator >> (istream &in, Complex &c);
};
ostream& operator << (ostream &out, const Complex &c) {
    out << c.real << " + " << c.img << "i";
    return out;
}
istream& operator >> (istream &in, Complex &c) {
    in >> c.real >> c.img;
    return in;
}
int main() {
    Complex c1;
    cin >> c1;
    cout << c1;
    return 0;
}