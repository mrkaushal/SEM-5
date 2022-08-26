// Let S be a collection of objects with profit-weight values. Implement the fractional knapsack problem for S assuming we have a sack that can hold objects with total weight W. Check the program for following test cases:

#include <iostream>
# include <cmath>

using namespace std;

int main(){
  int n, W;
  cin >> n >> W;
  int profit[n], weight[n];
  for(int i = 0; i < n; i++){
    cin >> profit[i] >> weight[i];
  }
  int dp[n+1][W+1];
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= W; j++){
      if(i == 0 || j == 0){
        dp[i][j] = 0;
      }
      else if(weight[i-1] <= j){
        dp[i][j] = max(profit[i-1] + dp[i-1][j-weight[i-1]], dp[i-1][j]);
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  cout << dp[n][W] << endl;
  return 0;
}