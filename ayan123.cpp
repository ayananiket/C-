#include <iostream>
#include <string>
using namespace std;

class MyClass {       
  public:            
    int myNum;        
    string myString;  
};

int main() {
  MyClass myObj;  

  myObj.myNum = 93;
  myObj.myString = "Ayan Kumar";

  // Print values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString; 
  return 0;
}

