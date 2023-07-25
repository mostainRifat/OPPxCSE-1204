#include <bits/stdc++.h>
using namespace std;

class triangle
{
private:
    float a, b, c;

public:
    triangle()
    {
        a = 0;
        b = 0;
        c = 0;
    }

    triangle(int x, int y, int z)
    {
        if (x + y <= z || y + z <= x || x + z <= c)
            cout << ".....Triangle is Not possible......" << endl;
        else
        {
            a = x;
            b = y;
            c = z;
        }
    }

    void perimeter()
    {
        int s = a + b + c;
        cout << "Perimeter = " << s << endl;
    }

    void area()
    {
        float area = 0.5 * a * b;
        cout << "Area is = " << area << endl;
    }

    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        if (a + b <= c || b + c <= a || a + c <= b)
            cout << ".....Triangle is Not possible......" << endl;
    }

    int getArea()
    {
        return 0.5 * a * b;
    }

    /* compare(triangle &p , triangle &q)
    {
        if (p.getArea() > q.getArea())
            cout<< 
    } */
    
    void display()
    {
        cout << "Displaying Triangle " << endl;
        cout << "A = " << a << endl
             << "B = " << b << endl
             << "C = " << c << endl;
    }
};

int main()
{
    triangle t1(1, 2, 5);
    t1.perimeter();
    t1.area();
    t1.display();

    triangle t2;
    t2.setData(6, 8, 10);
    t2.perimeter();
    t2.area();
    t2.display();

    int tarea = 0;
    tarea += t1.getArea();
    tarea += t2.getArea();

    cout << "Total Area " << tarea << endl;

    return 0;
}