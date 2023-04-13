#include<iostream>
using namespace std;

int main(){
  char ch;
  int cnt[26] = {};
  while(cin >> ch){
    if('A' <= ch && ch <= 'Z'){
      cnt[ch - 'A']++;
    }else if('a' <= ch && ch <= 'z'){
      cnt[ch - 'a']++;
    }
  }
  char alp = 'a';
  for(int i = 0;i < 26;i++){
    cout << alp << " : " << cnt[i] << endl;
    alp++;
  }
  return 0;
}
// 「Ctr + Z + Enter」でループ終了
// C++はEOFは勝手にやってくれる