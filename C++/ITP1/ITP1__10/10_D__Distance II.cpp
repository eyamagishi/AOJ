#include<iostream>
#include<iomanip> // setprecision
#include<cmath>

using namespace std;

int main(){
  int num;
  double minkowski_1 = 0, minkowski_2 = 0, minkowski_3 = 0, minkowski_inf = 0;
  cout << fixed << setprecision(5);

  cin >> num;
  int array_x[num], array_y[num];
  for(int i = 0;i < num;i++)cin >> array_x[i]; // xへ入力
  for(int i = 0;i < num;i++)cin >> array_y[i]; // yへ入力

  for(int i = 0;i < num;i++)minkowski_1 += abs(array_x[i] - array_y[i]); // 1 のとき
  for(int i = 0;i < num;i++)minkowski_2 += pow(array_x[i] - array_y[i],2); // 2 のとき
  minkowski_2 = sqrt(minkowski_2);
  for(int i = 0;i < num;i++)minkowski_3 += pow(abs(array_x[i] - array_y[i]), 3); // 3 のとき
  minkowski_3 = cbrt(minkowski_3);
  int max = 0;
  for(int i = 0;i < num;i++){
    int Chebyshev = abs(array_x[i] - array_y[i]);
    if(max < Chebyshev) max = Chebyshev;
  }
  minkowski_inf = max;

  cout << minkowski_1 << endl
      << minkowski_2 << endl
      << minkowski_3 << endl
      << minkowski_inf << endl;
  return 0;
}

// ２つのデータがどれだけ似ているかを、それらの距離で測る手法は、クラスタリングや分類など、様々なところで使われています。
// ここでは、２つの n 次元ベクトル x={x1,x2,...,xn} と y={y1,y2,...,yn} の距離を計算してみましょう。
// このようなデータの距離を測る指標のひとつとして、次のミンコフスキー距離が知られています。
// Dxy=(∑i=1n|xi−yi|p)1p
// p=1 のとき
// Dxy=|x1−y1|+|x2−y2|+...+|xn−yn|
// となり、これはマンハッタン距離とよばれます。
// p=2 のとき
// Dxy=√(|x1−y1|)^2+(|x2−y2|)^2+...+(|xn−yn|)^2
// となり、これは一般的に使われるユークリッド距離になります。\
// p=∞ のとき
// Dxy=maxni=1(|xi−yi|)
// となり、これはチェビシェフ距離と呼ばれます。
// ２つの n 次元ベクトルが与えられるので、p がそれぞれ 1、2、3、∞ のミンコフスキー距離を求めるプログラムを作成してください。

// Constraints
// 1≤n≤100
// 0≤xi,yi≤1000

// Input
// １行目に整数 n が与えられます。２行目にベクトル x の要素 {x1,x2,...xn}
// 、３行目にベクトル y の要素 {y1,y2,...yn} が空白区切りで与えられます。入力はすべて整数値です。

// Output
// p がそれぞれ 1、2、3、∞ の順番にそれぞれ１行に距離を出力してください。
// ただし、0.00001 以下の誤差があってもよいものとします。