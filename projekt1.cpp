#include <iostream>

using namespace std;

void silnia() {
  unsigned int n;
  long long silnia = 1;

  cout << "Podaj n: ";
  cin >> n;

  for (int i = n; i > 1; i--)
    silnia *= i;

  cout << n << "! = " << silnia << endl;
}

int main() {

  silnia();

  return 0;
}