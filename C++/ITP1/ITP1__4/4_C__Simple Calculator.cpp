#include<iostream>
using namespace std;

int main(){
  int a,b;
  char op;
  while(cin >> a >> op >> b){
    if(op == '+'){
      cout << a + b <<endl;
    }else if(op == '-'){
      cout << a - b <<endl;
    }else if(op == '*'){
      cout << a * b <<endl;
    }else if(op == '/'){
      cout << a / b <<endl;
    }else if(op == '?'){
      break;
    }
  }
  return 0;
}