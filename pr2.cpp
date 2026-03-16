#include <iostream>

using namespace std;

class BankAccount {
private:
    
    long accountNumber;
    double balance;
    char ownerName[50];

public:
    
    BankAccount(long accNum, double initialBalance, const char* name) {
        accountNumber = accNum;
        balance = initialBalance;
        
    
        int i = 0;
        while (name[i] != '\0' && i < 49) {
            ownerName[i] = name[i];
            i++;
        }
        ownerName[i] = '\0';
    }


    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully credited: " << amount << endl;
        }
    }

    
    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Successfully debited: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void display() {
        cout << "Account Owner: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    
    BankAccount myAcc(10122033, 500.0, "John Doe");

    myAcc.display();
    
    myAcc.credit(200.50);
    myAcc.debit(150.0);
    
    myAcc.display();

    return 0;
}
