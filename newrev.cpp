// code to practice for the advanced c++ udemy course

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
  system("clear");
  cout << "hello again!...\n";
  string my_name = ""; 
  cout << "please tell me your name: " ;
  getline(std::cin, my_name);
  cout << "Oh My God!!! Hello again, my sweet " << my_name << "!...\n";
  string my_reverse_name = "";  
  for(int i = my_name.length() - 1; i >= 0; i--) {
     my_reverse_name.append(1u, my_name[i]);
  }
  cout << "I reversed your name by the way, I hope you don't mind:\n" << my_reverse_name << "\n";
  return 0;
}
