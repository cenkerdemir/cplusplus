#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str) { 

  // code goes here   
  string my_array = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < (str.size()-1); i++) {
    for (int k = 0; k < (my_array.size()-2); k++ ) {
    	if (str[i] == my_array[k])
          str[i] = my_array[k+1];
    }
  } 
  return str;          
}

int main() { 
  
  // keep this function call here
  cout << LetterChanges(gets(stdin));
  return 0;
    
}
