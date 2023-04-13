#include<iostream>
using namespace std;

int main(){
  unsigned int n,m,l;
  cin >> n >> m >> l;
  if(100 < n || 100 < m || 100 < l){return 1;}
  long A[n][m] = {},B[m][l] = {},sum[n][l] = {};
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      cin >> A[i][j];
    }
  }
  for(int i = 0;i < m;i++){
    for(int j = 0;j < l;j++){
      cin >> B[i][j];
    }
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < l;j++){
      for(int k = 0;k < m;k++){
        sum[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < l;j++){
      cout << sum[i][j];
      if(j != l - 1){cout << ' ';}
    }
    cout << endl;
  }
  return 0;
}