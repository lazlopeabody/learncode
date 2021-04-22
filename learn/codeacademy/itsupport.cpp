#include <iostream>
using namespace std;

bool itsupport(){
    bool answer;
    cout << "Hello. IT.\n";
    cout << "Have you tried turning it off and on again? y/n\n";
    cin >> answer;
    
    return answer;
}

int main() {
  
  // Conduct IT support
  bool u_answer = itsupport();

  // Check in with Jenn
  cout << "Oh hi Jen!\n";
   
  if (u_answer = 'n') {
      itsupport();
      // Conduct IT support again...
      itsupport();
      // Check in with Roy
      cout << "You stole the stress machine? But that's stealing!\n";

  }
    cout << "Well.. I dont know I'll call Chief!\n";

  itsupport();
  
}