#include <iostream>

using namespace std;

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
  cout << "[1]- sprawdz czy pierwsza" << endl;
  cin >> option;

  switch (option) {
  case 1:
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (czy_pierwsza(n)) {
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