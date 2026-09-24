#include <iostream>
using namespace std;

class banking {
private:
    string name;
    int acc_no;
    int total_amount;
    int de, w, t;

public:
    banking() {
        total_amount = 0;
        de = 0;
        w = 0;
        t = 0;
    }

    void create_acc() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your account number: ";
        cin >> acc_no;
        cout << "Account created successfully!" << endl;
    }

    void balance() {
        if (total_amount <= 0)
            cout << "Your account is empty." << endl;
        else
            cout << "Your total balance is: " << total_amount << endl;
    }

    void withdrawls() {
        cout << "Enter the amount you want to withdraw: ";
        cin >> w;
        if (total_amount - w < 0)
            cout << "Insufficient funds." << endl;
        else {
            total_amount -= w;
            cout << "Amount withdrawn successfully!" << endl;
        }
    }

    void deposit() {
        cout << "Enter the amount to be deposited: ";
        cin >> de;
        total_amount += de;
        cout << "Amount deposited successfully!" << endl;
    }

    void transfer() {
        cout << "Enter the amount you want to transfer: ";
        cin >> t;
        if (total_amount - t < 0)
            cout << "Insufficient funds." << endl;
        else {
            total_amount -= t;
            cout << "Amount transferred successfully!" << endl;
        }
    }
};

int main() {
    banking b;
    int ch;
    do {
        cout << "\n1. Create an account" << endl;
        cout << "2. Check account balance" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Deposit" << endl;
        cout << "5. Transfer" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: b.create_acc(); break;
            case 2: b.balance(); break;
            case 3: b.withdrawls(); break;
            case 4: b.deposit(); break;
            case 5: b.transfer(); break;
            case 6: break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (ch != 6);

    return 0;
}
