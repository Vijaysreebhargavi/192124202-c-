#include <iostream>

using namespace std;



void swap(int &a, int &b) {

	int temp = a;

	a = b;

	b = temp;

}



int main() {

	int num1, num2;

	cout<<"Enter the value for Num1: ";

	cin>>num1;

	cout<<"Enter the value for Num 2: ";

	cin>>num2;

	swap(num1, num2);

	cout<<"The value after swap is:"<<endl;

	cout<<"Num1: "<<num1<<endl;

	cout<<"Num2: "<<num2;



	return 0;

}
