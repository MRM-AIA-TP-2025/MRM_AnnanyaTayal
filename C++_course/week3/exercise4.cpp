#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

if (x=="Red" || x=="RED" || x=="red" || x=="Yellow" || x=="Blue" || x=="yellow" || x=="blue" || x=="YELLOW" || x=="BLUE")
cout<<x<<" is a primary color ";
else 
cout<<x<<" is not a primary color ";

  //add code above this line
  
  return 0;
  
}
