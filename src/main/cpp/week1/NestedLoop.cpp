#include<iostream>

int main() {
  int n;
  cout << "Enter your last number: ";
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      cout << i << " " << j;
    }
  }
}
