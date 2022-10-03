#include <iostream> 
#include <string.h> 
using namespace std; 

class check 
{ 
	public: 

	bool isPalindrome(string str) 
	{ 
		int n = str.length(); 

		for (int i = 0; i < n/2; i++) 
			if (str[i] != str[n-i-1]) 
				return false; 

		return true; 
	} 
}; 

int main() 
{ 
	string str = "MADAM"; 

	check obj; 
	if (obj.isPalindrome(str)) 
		cout << "Palindrome"; 
	else
		cout << "Not Palindrome"; 

	return 0; 
}
