#include<iostream>
using namespace std;
class vote
{
  int age;
  public:
  vote()
  {
  age=0;
  }
  int check(int a)
  {
  if(a>=18)
  {
  cout<<"You are allowed to vote";
  }
  else
  {
  cout<<"You are allowed to vote when you will be of "<<18-a<<" years";
  }
  }
};
int main()
{
 vote v;
 int age;
 cout<<"Enter your age";
 cin>>age;
 v.check(age);
}
