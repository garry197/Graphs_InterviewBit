
void helper(int A, int B ,int i,vector<int> &v)
{
    queue<int> q;
    q.push(i);
    
    while(!q.empty())
    {
        int num=q.front();
        q.pop();
        if(num<=B&&num>=A)
        v.push_back(num);
        
        if(num==0||num>B)
        continue;
        
        int lastd=num%10;
        
        int a1=num*10+lastd-1;
        int a2=num*10+lastd+1;
        
        if(lastd==0)
        q.push(a2);
        else if(lastd==9)
        q.push(a1);
        else
        {
            q.push(a1);
            q.push(a2);
        }
        
        
       
        
        
    }
  
}


vector<int> Solution::stepnum(int A, int B) {
    vector<int> v;
    if(A>B)
    return v;
    for(int i=0;i<10;i++)
    helper(A,B,i,v);
    sort(v.begin(),v.end());
    
    return v;
}