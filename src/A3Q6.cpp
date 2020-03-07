#include <iostream>
using namespace std;

class Family{
public:
    int electricity, grocerry, water;
public:
    void getExpense(void) {
        cout << "Enter the electricity expense : " ;
        cin >> electricity;
        cout << "Enter the grocerry expense : ";
        cin >> grocerry;
        cout << "Enter the water expense : ";
        cin >> water;
    }
};

class Expenditure: public Family {
public:
    double total;
public:
    double getTotalExpense(void) {
        return (5000.0 + electricity + grocerry + water);
    }
};

int main()
{
    cout << "Dipaditya Das Roll 4" << endl;
    
    Expenditure obj;
    obj.getExpense();
    cout << "The total expenditure of the family = " << obj.getTotalExpense() << endl;

    return 0;
}
