#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;

    Complex(int r = 0, int i = 0)
    {
        this->real = r;
        this->img = i;
    }
    // function to add complex number
    Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    // addition operator overloading
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    // friend subtraction operator overloading 
    friend Complex operator-(Complex x, Complex y);
};

Complex operator-(Complex x, Complex y)
{
    Complex temp;
    temp.real =  x.real-y.real ;
    temp.img = x.img-y.img;
    return temp;
}
int main()
{
    Complex c1(3, 4);
    Complex c2(4, 5);
    // Complex c3= c1.add(c2);
    Complex c3 = c1 + (c2);
    Complex c4= c1-c2;
    cout << c3.real << " i" << c3.img << endl;
    cout<<c4.real<<" i"<<c4.img<<endl;
}