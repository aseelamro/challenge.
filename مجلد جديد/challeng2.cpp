#include <bits/stdc++.h>
using namespace std;


int main() {
    int n ; 
    cin >> n; 
    int nums[n]  ;
      for(int i=0 ;i < n ;i++)
      { 
          cin >> nums[i] ;
          
      }
          int size = sizeof(nums) / sizeof(nums[0]);
         sort(nums, nums + size);


    for (int i = 1; i < size; ++i) {
        for (int j = nums[i-1] + 1; j < nums[i]; ++j) {
            
            cout << j << " "; 
    } }
    return 0;
}

