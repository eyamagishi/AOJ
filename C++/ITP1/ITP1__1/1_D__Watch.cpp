#include<iostream>
using namespace std;

int main(){
  int S,h,m,s;

  cin >> S;
  s = S%60;
  m = (S/60)%60;
  h = S/3600;

  cout << h << ':' << m << ':' << s <<endl;
  
  return 0;
}