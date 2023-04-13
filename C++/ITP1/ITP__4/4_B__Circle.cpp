#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  double r;
  cin >> r;
  cout << fixed << setprecision(6); // 小数点以下をどこまで表示するか指定する
  cout << r * r * M_PI << ' ' << 2 * r * M_PI << endl;
  return 0;
}