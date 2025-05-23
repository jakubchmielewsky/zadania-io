#include <iostream>

using namespace std;

void silnia(unsigned int n) {
  long long silnia = 1;

  for (int i = n; i > 1; i--)
    silnia *= i;

  cout << n << "! = " << silnia << endl;
}
bool czy_pierwsza(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void menu() {
  int option;
  cout << "[1]- oblicz silnie." << endl;
  cout << "[2]- sprawdz czy pierwsza" << endl;
  cin >> option;

  switch (option) {
  case 1:
    unsigned int n;

    cout << "Podaj n: ";
    cin >> n;
    silnia(n);
    break;

  case 2:
    int m;
    cout << "Podaj liczbe: ";
    cin >> m;
    if (czy_pierwsza(m)) {
      cout << "pierwsza" << endl;
    } else {
      cout << " nie pierwsza" << endl;
    }
    break;

  default:
    break;
  }
}

int main() {
  menu();

  return 0;
}