#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int a,b;
  int d,r;
  double f;
  cin >> a >> b;
  d = a / b;
  r = a % b;
  f = (double)a / (double)b;
  std::cout << std::fixed; // 小数点以下をどこまで表示するか指定する
  cout << d << ' ' << r << ' ' << f <<endl;
  return 0;
}