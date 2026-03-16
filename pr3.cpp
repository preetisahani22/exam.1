#include <iostream>

using namespace std;


class Shape {
private:
    char color[20];
    float area;

public:
    
    void setColor(const char* c) {
        int i = 0;
        while (c[i] != '\0' && i < 19) {
            color[i] = c[i];
            i++;
        }
        color[i] = '\0';
    }
    
    void setArea(float a) {
        area = a;
    }

    
    char* getColor() { return color; }
    float getArea() { return area; }
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, const char* c) {
        radius = r;
        setColor(c);
    }

    void calculateArea() {
        
        setArea(3.14 * radius * radius);
    }
};


class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w, const char* c) {
        length = l;
        width = w;
        setColor(c);
    }

    void calculateArea() {
        setArea(length * width);
    }
};

int main() {
    
    Circle myCircle(5.0, "Red");
    myCircle.calculateArea();
    cout << "Circle Color: " << myCircle.getColor() << endl;
    cout << "Circle Area: " << myCircle.getArea() << endl;

    cout << "--------------------------" << endl;

    Rectangle myRect(4.0, 6.0, "Blue");
    myRect.calculateArea();
    cout << "Rectangle Color: " << myRect.getColor() << endl;
    cout << "Rectangle Area: " << myRect.getArea() << endl;

    return 0;
}
