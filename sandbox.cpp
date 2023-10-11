#include <iostream>
using namespace std;

template <class T>
void Swap (T &x, T &y) {
T temp = x;
x = y;
y = temp;
}

int main() {
double x = 4.50, y = 7.54;
cout << "X = " << x << " Y = " << y << endl;
Swap( x, y);
cout << "X = " << x << " Y = " << y << endl;
int p = 25, q = 10;
cout << "P = " << p << " Q = " << q << endl;
Swap( p, q);
cout << "P = " << p << " Q = " << q << endl;
return 0;
}
