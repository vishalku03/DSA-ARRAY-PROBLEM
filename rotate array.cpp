
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     
     void reverse(int arr[], int low, int high)
     {
          while (low < high)
          {
               int temp = arr[low];
               arr[low] = arr[high];
               arr[high] = temp;
               low++;
               high--;
          }
     }
     void rotateArr(int arr[], int d, int n)
     {
          if (d > n)
          {
               d = d % n;
          }
          reverse(arr, 0, d - 1);
          reverse(arr, d, n - 1);
          reverse(arr, 0, n - 1);
     }
};
