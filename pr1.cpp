#include <iostream>

using namespace std;

class Laptop {
private:
    char name[50];
    float price;
    char processor[50];

public:

    Laptop(const char* n, float p, const char* proc) {
        price = p;
        
    
        int i = 0;
        while(n[i] != '\0' && i < 49) {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0'; 

        
        int j = 0;
        while(proc[j] != '\0' && j < 49) {
            processor[j] = proc[j];
            j++;
        }
        processor[j] = '\0';
    }

    void display() {
        cout << "Laptop: " << name << "\n";
        cout << "Price: " << price << "\n";
        cout << "Processor: " << processor << "\n";
        cout << "--------------------------\n";
    }
};

int main() {
    
    Laptop laptop1("Dell XPS", 1200.50, "Intel i7");
    Laptop laptop2("MacBook Air", 999.00, "M2");

    
    laptop1.display();
    laptop2.display();

    return 0;
}
