#include <iostream>
using namespace std;

//for eg use incersion and exersion operator overloading inn complex number 

class complex {
    int real, img;

    public:
    complex(int r =0, int i=0) {
        real = r;
        img = i;
    }

    friend ostream & operator << (ostream &out, const complex &c);
    friend istream& operator >> (istream &in, complex &c);
};

ostream& operator << (ostream &out, const complex &c) {
    
    out << c.real;
    out << " + " << c.img << "i";
    return out;
}


istream& operator >> (istream &in, complex &c){
    in >> c.real >> c.img;
    return in;

}





int main()
{
complex cl;
cin >> cl;
cout << "The complex object is ";
cout << cl;
return 0;
}