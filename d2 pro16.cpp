#include <iostream> 

using namespace std; 



class Multiplication { 

	int num; 



public: 

	Multiplication() 

	{ 

		num = 0; 

	} 



	void getNum(int n) 

	{ 

		num = n; 

	} 



	void printTable() 

	{ 

		for (int i = 1; i <= 10; i++) { 

			cout << num << " * " << i << " = " << num * i << endl; 

		} 

	} 

}; 



int main() 

{ 

	Multiplication m; 

	int n; 



	cout << "Enter the number to print table: "; 

	cin >> n; 

	m.getNum(n); 

	m.printTable(); 



	return 0; 

}
