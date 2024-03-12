class Solution
{
public:
     vector<int> minOperations(string boxes)
     {

          vector<int> ans;
          int n = boxes.size();

          for (int i = 0; i < n; i++)
          {
               int count = 0;

               for (int j = 0; j < n; j++)
               {
                    if (boxes[j] == '1')
                         count = count + abs(i - j);
               }
               ans.push_back(count);
          }

          return ans;
     }
};
//leetcode 1769