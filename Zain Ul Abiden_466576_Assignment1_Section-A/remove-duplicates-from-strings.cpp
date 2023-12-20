#include <iostream>
using namespace std;

int main() 
{
  string str;
  cout << "Enter a string: ";
  cin >> str;
  string result = "";
  for (char &c : str) 
  {
    if (result.find(c) == string::npos) 
    {
      result = result + c;
    }
  }
  cout << "Resultant string after removing duplicates: " << result;
  return 0;
}
