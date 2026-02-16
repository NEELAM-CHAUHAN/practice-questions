#include <iostream>
using namespace std;
void printPattern(int n){
  for (int i = 1; i < 2*n -1; i++){
    int star = i;
    if(star > n) star = n --1
    for (int j = 1; j <= n - i; j++)
      cout << "*";
    cout << endl;
    }
}    
int main(){
  int n;
  cin >> n;
  printPattern(n);
  return 0;
}

