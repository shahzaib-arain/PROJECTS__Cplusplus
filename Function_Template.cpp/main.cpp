#include <iostream>
using namespace std;

template <class T> T myAdd(T x, T y) {
  T result;

  result = x + y;

  return result;
}

int main() {
  cout << myAdd <int> (3, 7) << endl;
  cout << myAdd <double> (3.5, 7.2) << endl;
  cout << myAdd <string> ("Hello", " World!") << endl;

  return 0;
}
