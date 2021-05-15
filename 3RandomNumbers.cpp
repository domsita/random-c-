#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n = 0;
  int x;
  int y;
  int z;

  cout << "Please enter a number: ";
  cin >> n;

  x = (rand() % (n - 1 + 1)) + 1;
  y = (rand() % (n - 1 + 1)) + 1;
  z = (rand() % (n - 1 + 1)) + 1;

  cout << x << '\n';
  cout << y << '\n';
  cout << z << '\n';

  return 0;
}
