#include <iostream>
using namespace std;

class Number {
 	private: int num;

 	public:
		void getNumber(void) {
			cout << "Enter an integer number : ";
			cin >> num;
		}
		int returnNumber(void) { return num; }
};

class Square : public Number {
	public:
		int getSquare(void){
			int num = returnNumber();
			return num * num;
		}
};

class Cube : public Number {
	public:
		int getCube(void){
			int num = returnNumber();
			return num * num * num;
		}
};

class Factorial : public Number{
	public:
		int getFactorial(void){
			int f = 1,num;
			num = returnNumber();
			for (int i = 1; i <= num; i++)
			{
				f *= i;
			}
			return f;
		}
};

int main() {
	cout << "Dipaditya Das Roll 4" << endl;

	Cube objc;
	Square objs;
	Factorial objf;

	objc.getNumber();
	cout << "The volume of the cube = " << objc.getCube() << endl;

	objs.getNumber();
	cout << "The Square of " << objs.returnNumber() << " = " << objs.getSquare() << endl;

	objf.getNumber();
	cout << "The Factorial of " << objf.returnNumber() << " = " << objf.getFactorial() << endl;

	return 0;
}
