#include <iostream>
#include <fstream>
using namespace std;

class Bank {
    int accNo, balance;
    
    public:
        Bank(int acc, int bal) {
            accNo = acc;
            balance = bal;
        }

        void deposit(int b) {
            balance = balance + b;
            
            ofstream fout;
            fout.open("afile.dat");
            fout << "Deposited amount: " << b << endl;
            fout << "Balance is: " << balance << endl;
            fout.close();
            
            cout << "Deposited amount: " << b << endl;
            cout << "Balance: " << balance << endl;
        }

        void withdraw(int a) {
            balance = balance - a;
            
            ofstream file;
            file.open("bfile.dat");
            file << "Withdrawn amount: " << a << endl;
            file << "Balance: " << balance << endl;
            file.close();
            
            cout << "Withdrawn amount: " << a << endl;
            cout << "Balance: " << balance << endl;
        }

        void checkbalance() {
            ofstream obj;
            obj.open("cfile.dat");
            obj << "Balance is: " << balance << endl;
            obj.close();
            
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    Bank obj1(843, 10000);
    
    obj1.checkbalance();   
    obj1.deposit(1000);    
    obj1.withdraw(500);   
    obj1.checkbalance();   
    
    return 0;
}