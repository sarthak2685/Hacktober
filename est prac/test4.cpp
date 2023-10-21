#include <iostream>
using namespace std;
// This is a function template.
template <class X> void swap(X &a, X &b)
{
X temp;
temp = a;
a = b;
b = temp;
cout << "Inside template swapargs.\n";
}
// This overrides the generic version of swapargs() for ints.
void swap(int &a, int &b)
{
int temp;
temp = a;
a = b;
b = temp;
cout << "Inside swap int specialization.\n";
}
int main()
{
int i=10, j=20;
double x=10.1, y=23.3;
char a='x', b='z';
cout << "Original i, j: " << i << ' ' << j << '\n';
cout << "Original x, y: " << x << ' ' << y << '\n';
cout << "Original a, b: " << a << ' ' << b << '\n';
swap(i, j); // calls explicitly overloaded swap()
swap(x, y); // calls generic swap()
swap(a, b); // calls generic swap()
cout << "Swapped i, j: " << i << ' ' << j << '\n';
cout << "Swapped x, y: " << x << ' ' << y << '\n';
cout << "Swapped a, b: " << a << ' ' << b << '\n';
return 0;
}
