class Solution {
  public:
    long long solve(vector<int>& bt) {
      sort(bt.begin(),bt.end());
      int time =0,w_time=0;
      int n =bt.size();
      for(int i =0;i <n ;i++){
        w_time += time;
        time+=bt[i];
      }
      return (w_time/n);
    }
};