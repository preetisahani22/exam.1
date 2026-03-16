#include <iostream>

using namespace std;


class Shape {
protected:
    char color[20];
    float area;

public:

    virtual void displayDetails() {
        cout << "General Shape details." << endl;
    }

    void setColor(const char* c) {
        int i = 0;
        while (c[i] != '\0' && i < 19) {
            color[i] = c[i];
            i++;
        }
        color[i] = '\0';
    }
};


class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, const char* c) {
        radius = r;
        setColor(c);
        area = 3.14 * r * r;
    }

    
    void displayDetails() {
        cout << "Shape: Circle | Color: " << color 
             << " | Radius: " << radius 
             << " | Area: " << area << endl;
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
        area = l * w;
    }


    void displayDetails() {
        cout << "Shape: Rectangle | Color: " << color 
             << " | Dimensions: " << length << "x" << width 
             << " | Area: " << area << endl;
    }
};

int main() {
    
    Shape* shapes[2];

    shapes[0] = new Circle(5.0, "Red");
    shapes[1] = new Rectangle(4.0, 6.0, "Blue");

    cout << "--- Polymorphic Output ---" << endl;

    for (int i = 0; i < 2; i++) {
        
        shapes[i]->displayDetails();
    }


    delete shapes[0];
    delete shapes[1];

    return 0;
}
