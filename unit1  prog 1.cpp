#include <iostream> 
using namespace std; 

class Greater 
{ 
public: 
int findGreater(int a, int b, int c); 
}; 
  
int Greater::findGreater(int a, int b, int c) 
{ 
  
    int max = a; 
  
    if (b > max) 
        max = b; 
  
    if (c > max) 
        max = c; 
  
    return max; 
} 
  
int main() 
{ 
    Greater g; 
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout << "Maximum Number: " << g.findGreater(a, b, c); 
    return 0; 
}
