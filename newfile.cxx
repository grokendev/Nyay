#include <iostream>
#include <string>
using namespace std;

int main() {

  string fullName;
  string course;
  string birthday;
  string motto;


  cout << "Full name: ";

  getline(cin, fullName);

 
  cout << "Course, Yr. & Sec.: ";
  getline(cin, course);


  cout << "Birthday: ";
  getline(cin, birthday);

  cout << "Motto/Motivation in Life: ";
  getline(cin, motto);


  cout << "\nHi! I'm " << fullName << " of " << course << ". Welcome to My Life!\n";
  cout << "My Birthday is on " << birthday << " and my motto/motivation in life is " << motto << ".\n";

  return 0;
}
