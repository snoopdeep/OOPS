#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // inline function
    Rectangle(int l, int b)
    {
        this->length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
    // non-inline funtion
    int perimeter();
};

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// inline keyword for any normal funtion to be inline
// inline int Rectangle:: perimeter(){
//     return 2*(length+breadth);
// }

int main()
{
    Rectangle r(5, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}