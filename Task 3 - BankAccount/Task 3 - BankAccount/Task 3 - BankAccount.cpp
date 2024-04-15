#include <iostream>
using namespace std;
class BankAccount {
private:
    string name;
    string account;
    double money;
public:
    void create(string a, string b, double c) {
        
        name = a;
        account = b;
        money = c;
    }
    void Sum() {
        cout << "You have:" << money << endl;;
    }
    void inOut(double num) {
        money = money + num;
    }
};
int main()
{
    string names, accNum;
    double sum, add;
    cout << "What is your name:" << endl;
    cin >> names;
    cout << "What is your account number:" << endl;
    cin >> accNum;
    cout << "Imput amount of money:" << endl;
    cin >> sum;
    
    BankAccount a;
    a.create(names, accNum, sum);
    a.Sum();
    cout << "Write sum to add or withdraw: ! (if withdrawing with - )" << endl;
    cin >> add;
    a.inOut(add);
    a.Sum();
}
