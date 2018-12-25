vector<int> Solution::solve(int A, int B, int C, int d) {
    
    priority_queue <int, vector<int>, greater<int> >q;
    q.push(A);
    q.push(B);
    q.push(C); vector<int> ans;
    
  int num=0;
  while(num<d)
  {
      int c=q.top();
      q.pop();
      auto it= find (ans.begin(), ans.end(), c);
      if(it==ans.end()){
      ans.push_back(c);
      q.push(c*A);
      q.push(c*B);
      q.push(c*C);
      num++;
      }
      
  }
    return ans;  
}
