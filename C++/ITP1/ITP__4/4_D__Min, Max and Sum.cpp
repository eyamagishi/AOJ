#include<iostream>
using namespace std;

int main(){
  int n; // 整数の個数
  int min = 1000000; // 最小値
  int max = -1000000; // 最大値
  long sum = 0; //合計値
  cin >> n; //整数の数を指定する
  for(int i=0;i < n;i++){
    int num;
    cin >> num;
    if(num < min){
      min = num;
    }
    if(max < num){
      max = num;
    }
    sum += num;
  }
  cout << min << ' ' << max << ' ' << sum <<endl;
  return 0;
}
// sumの桁数が足りなかった
// int → long へ変更して改善
// __int32がコンパイルされなかった。なぜだろう。