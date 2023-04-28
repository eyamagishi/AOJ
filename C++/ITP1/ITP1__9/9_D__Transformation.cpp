#include <algorithm>
#include<iostream>
using namespace std;

int main(){
  string str, inst;
  int inst_num = 0,start = 0, end = 0;
  cin >> str >> inst_num; // 文字列の入力, 命令の数の入力
  for(int i = 0;i < inst_num;i++){
    cin >> inst >> start >> end; // 命令の入力, 始まりの文字(番目), 終わりの文字(番目)
    if(inst == "print"){
      for(int i = start;i <= end;i++){
        cout << str[i];
      }
      cout << endl;
    }else if(inst == "reverse"){
      reverse(str.begin() + start, str.begin() + end + 1);
    }else if(inst == "replace"){
      string repl;
      cin >> repl; // 置き換える文字列
      str.replace(start,end - start + 1,repl);
    }
  }
  return 0;
}

// 文字列 str に対して、与えられた命令の列を実行するプログラムを作成してください。命令は以下の操作のいずれかです：
// print a b: str の a 文字目から b 文字目までを出力する。
// reverse a b: str の a 文字目から b 文字目までを逆順にする。
// replace a b p: str の a 文字目から b 文字目までを p に置き換える。
// ここでは、文字列 str の最初の文字を 0 文字目とします。

// Constraints
// 1≤strの長さ≤1000
// 1≤q≤100
// 0≤a≤b<strの長さ
// replace 命令では b−a+1=pの長さ

// Input
// 1 行目に文字列 str が与えられます。
// str は英小文字のみ含みます。
// 2 行目に命令の数 q が与えられます。
// 続く q 行に各命令が上記の形式で与えられます。

// Output
// 各 print 命令ごとに文字列を１行に出力してください。