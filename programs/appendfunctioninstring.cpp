#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "Good ";
  string lastName = "Morning";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}
