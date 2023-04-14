#include<iostream>
#include<iomanip> // setprecision
#include<numeric> // accumulate
#include<cmath>

using namespace std;

int main(){
  int students;
  cout << fixed << setprecision(8);

  while(cin >> students){
    if(students == 0)break;
    double average = 0, standard_deviation = 0, points[students] = {};
    for(int i = 0;i < students;i++)cin >> points[i];
    average = accumulate(points, points + students, 0) / double(students);
    for(int i = 0;i < students;i++){
      standard_deviation += pow(points[i] - average, 2);
    }
    standard_deviation = sqrt(standard_deviation / students);
    cout << standard_deviation << endl;
  }
  return 0;
}

// n 人の学生を含むクラスでプログラミングの試験を行った。それぞれの得点をs1, s2 ... snとしたときの、標準偏差を求めるプログラムを作成せよ。
// 得点の平均値をｍとすれば、分散α2は以下の式で得られる：
// α2 = (∑ni=1(si - m)2)/n
// 分散の正の平方根が標準偏差αとなる。

// Constraints
// 入力で与えられる n が1000を超えることはない。
// 0 ≤ si ≤ 100

// Input
// 複数のデータセットが入力として与えられる。各データセットは以下の形式で与えられる：
// 学生の数 n
// s1 s2 ... sn
// n が 0 のとき入力の終わりとする。

// Output
// 各データセットに対して、標準偏差を１行に出力せよ。ただし、0.0001以下の誤差があってもよい。