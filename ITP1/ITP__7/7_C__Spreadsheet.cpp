#include<iostream>
using namespace std;

int main(){
  int r,c;
  cin >> r >> c;
  int ss[r + 1][c + 1] = {}; // 初期化する
  for(int i = 0;i < r;i++){
    for(int j = 0;j < c;j++){
      cin >> ss[i][j];
      ss[i][c] += ss[i][j];
      ss[r][j] += ss[i][j];
      ss[r][c] += ss[i][j];
    }
  }
  for(int i = 0;i <= r;i++){
    for(int j = 0;j <= c;j++){
      cout << ss[i][j];
      if(j !=c){cout << ' ';}
    }
    cout << endl;
  }
  return 0;
}