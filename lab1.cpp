#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a integer : ";
  cin >> n;
  cout << "Integer you have entered : " << n << endl;
  cout << "Result : ";
  for (n; n > 1; ) {
    if (n % 2 != 0) {
      n = 3 * n + 1;
    } else {
      n = n / 2;
    }
    cout << n << " ";
  }
	cout << endl;
  return 0;
}
