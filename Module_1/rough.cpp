#include <bits/stdc++.h>
using namespace std;
 
int maxProfit(int prices[], int arr_size)
{
  int max_diff = prices[1] - prices[0];

  int min_element = prices[0];
  for(int i = 1; i < arr_size; i++)
  {    
   if (prices[i] - min_element > max_diff)                            
   max_diff = prices[i] - min_element;
    
   if (prices[i] < min_element)
   min_element = prices[i];                    
  }
  if(max_diff<0)
    max_diff = 0 ;
  return max_diff;
}
 
int main()
{
  int prices[] = {7, 6, 5, 4, 3};
  int arr_size = sizeof(prices)/sizeof(prices[0]);
  cout << maxProfit(prices, arr_size)<<endl;
 
  return 0;
}