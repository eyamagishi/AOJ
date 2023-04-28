#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
  int side_a, side_b, angle_c;
  double area_s = 0, tri_perimeter_l = 0, high_h = 0;

  cin >> side_a >> side_b >> angle_c;
  cout << fixed << setprecision(8);
  double rad = angle_c / 180.0 * M_PI;
  area_s = side_a * side_b * sin(rad) / 2.0;
  tri_perimeter_l = side_a + side_b + sqrt(pow(side_a, 2) + pow(side_b, 2) - 2 * side_a * side_b * cos(rad));
  high_h = side_b * sin(rad);

  cout << area_s << ' ' << tri_perimeter_l << ' ' << high_h << endl;
  return 0;
}

// 三角形の２辺 a, b とその間の角 C から、その三角形の面積 S、周の長さ L, a を底辺としたときの高さ h
// を求めるプログラムを作成して下さい。

// Input
// a の長さ, b の長さ, Cの大きさ（度）（整数）が空白区切りで与えられます。

// Output
// S, L, h をそれぞれ1行に出力して下さい。0.0001以下の誤差があってもよいものとします。
