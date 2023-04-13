#include<iostream>
using namespace std;

int main(){
  int x;
  int cnt = 1; // カウントする変数
  while(cin >> x){
    if(x == 0){break;}
    cout << "Case " << cnt << ": " << x << endl;
    cnt++;
  }
  return 0;
}