#include<iostream>
using namespace std;

int main(){
  string str, word;
  while(cin >> str >> word){
    str += str;
    if( str.find(word) == string::npos )cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}

// 図のようなリング状の文字列 s の任意の位置から、
// 時計回りに連続した文字をいくつか選んで、
// 文字列 p が作れるかを判定するプログラムを作成してください。

/*
  Input
  １行目に文字列 s が与えられます。
  ２行目に文字列 p が与えられます。
*/

/*
  Output
  p が作れる場合は Yes と、作れない場合は No と１行に出力してください。
*/

/*
  Constraints
  1≤pの長さ≤sの長さ≤100
  文字列は英小文字からなる
*/