#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

if (x=="a" || x=="e" || x=="i" || x=="o" || x=="u" || x=="A" || x=="E" || x=="I" || x=="O" || x=="U")
cout<<x<<" is a vowel ";
else 
cout<<x<<" is not a vowel ";

  //add code above this line
  
  return 0;
  
}
