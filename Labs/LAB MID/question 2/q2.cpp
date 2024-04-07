#include <iostream>
#include <stdlib.h>
using namespace std;

// Global variables
int count = 0; // Counter to keep track of the position in the expression string
string expr;   // Input expression

// Function prototypes
void S();      // Start symbol
void X();      // Non-terminal X
void Xp();     // X prime
void Y();      // Non-terminal Y
void Yp();     // Y prime
void Z();      // Non-terminal Z

int main() {
  // Read the expression from the user
  cin >> expr;
  // Append "$" to the end of the expression to indicate the end
  expr += "$";

  // Call the start symbol parsing function
  S();

  // Check if the entire expression has been parsed
  if (expr.length() == count) {
    cout << "Accepted" << endl;
  } else {
    cout << "Rejected" << endl;
  }

  cin.get(); // Wait for a character input
}

// Parse S
void S() {
  cout << "S->X$" << endl;
  X();
  if (expr[count] == '$') {
    count++;
  } else {
    cout << "Rejected" << endl;
    exit(0);
  }
}

// Parse X
void X() {
  cout << "X->YX'" << endl;
  Y();
  Xp();
}

// Parse X prime
void Xp() {
  if (expr[count] == '%') {
    count++;
    cout << "X'->%YX'" << endl;
    Y();
    Xp();
  } else {
    cout << "X'->ε" << endl;
  }
}

// Parse Y
void Y() {
  cout << "Y->ZY'" << endl;
  Z();
  Yp();
}

// Parse Y prime
void Yp() {
  if (expr[count] == '&') {
    count++;
    cout << "Y'->&ZY'" << endl;
    Z();
    Yp();
  } else {
    cout << "Y'->ε" << endl;
  }
}

// Parse Z
void Z() {
  if (expr[count] == 'k') {
    count++;
    cout << "Z->kXk" << endl;
    X();
    if (expr[count] == 'k') {
      count++;
    } else {
      cout << "Rejected" << endl;
      exit(0);
    }
  } else if (expr[count] == 'g') {
    count++;
    cout << "Z->g" << endl;
    return;
  } 
}