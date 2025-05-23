#include <iostream>

using namespace std;

void silnia(unsigned int n) {
  long long silnia = 1;

  for (int i = n; i > 1; i--)
    silnia *= i;

  cout << n << "! = " << silnia << endl;
}

void menu() {
  int option;
  cout << "[1]- oblicz silnie." << endl;
  cin >> option;

  switch (option) {
  case 1:
    unsigned int n;

    cout << "Podaj n: ";
    cin >> n;
    silnia(n);
    break;

  default:
    break;
  }
}

int main() {

  int option;
  menu();

  return 0;
}