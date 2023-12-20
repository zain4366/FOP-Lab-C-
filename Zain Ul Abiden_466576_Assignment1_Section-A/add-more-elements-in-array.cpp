#include <iostream>
using namespace std;
int main() 
{
  int a[8] = {1, 2, 3, 4, 5};
  cout << "Enter 3 more integers: ";
  for (int i = 5; i < 8; i++) 
  {
    cin >> a[i];
  }
  for (int i = 0; i < 8; i++) 
  {
    cout << a[i] << " ";
  }
  return 0;
}

