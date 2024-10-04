#include <iostream>
using namespace std;

int main(){
  int n, countChan = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && i % 2 == 0) countChan++;
  }
  cout << "Co " << countChan << " uoc chan\n";
  return 0;
}