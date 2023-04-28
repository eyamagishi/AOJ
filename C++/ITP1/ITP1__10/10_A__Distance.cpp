#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
  double x1, y1, x2, y2;
  cout << fixed << setprecision(4);
  cin >> x1 >> y1 >> x2 >> y2;
  cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
  return 0;
}

// ２点 P1(x1, y1), P2(x2, y2) の距離を求めるプログラムを作成せよ。

// Input
// x1, y1, x2, y2 （実数）が空白区切りで与えられます。

// Output
// P1とP2の距離を実数で１行に出力して下さい。0.0001以下の誤差があってもよいものとします。
