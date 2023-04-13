#include<iostream>
using namespace std;

int main(){
  string num;
  while(cin >> num){
    if(num == "0"){break;}
    int cnt = 0;
    for(int i = 0;i < num.size();i++){
      cnt += num[i] - '0';
    }
    cout << cnt << endl;
  }
  return 0;
}