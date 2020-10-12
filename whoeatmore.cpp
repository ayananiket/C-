#include <iostream>
#include <string.h>
using namespace std;

//this is my function to test
void Auro()
{
 cout <<	" \n Auro eat More";
}

void Juhi()
{
 cout <<	" \n Juhi Eat more";
}

int main(){
const string food;
cout << "Who Eats More ? Juhi or Auro";
cin >> food;

if (strcmp(food,"Juhi")== 0)
{
	Juhi();
}
else if (strcmp(food,"Auro")== 0)
{
	Auro();
}
else
{
	cout << "give right input";
}
return 0;

}


