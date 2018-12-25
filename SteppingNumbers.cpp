/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root) {
    
    
    
   
    if(!root|void helper(int A, int B ,int i,vector<int> &v)
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
|!root->left)
            return;
        TreeLinkNode *nextRoot=root->left;
        //link nodes with same depth
        while(root)
        {
            root->left->next=root->right;
            if(root->next)
                root->right->next=root->next->left;
            root=root->next;
        }
        connect(nextRoot);
    }
   
   /*
    
    stack<TreeLinkNode*> s1;
    stack<TreeLinkNode*> s2;
    
   // s2.push(NULL);
    //s1.push(NULL);
    s1.push(A);
cout<<s1.size();



    while(1)
    {
        
            while(s1.size()>0)
        {
            TreeLinkNode* a=s1.top();
            if(s1.size()==0)
            break;
            s1.pop();
            a->next=s1.top();
            if(a->right!=NULL)
            s2.push(a->right);
            if(a->left!=NULL)
            s2.push(a->left);
        }
        
            while(s2.size()>0)
            {
                TreeLinkNode* a=s2.top();
                if(s2.size()==0)
                break;
                s2.pop();
                a->next=s2.top();
                if(a->right!=NULL)
                s1.push(a->right);
                 if(a->left!=NULL)
                s1.push(a->left);
             
                
            }
            
            
           if(s1.size()==0&&s2.size()==0)
           break;
        
        
        
    }
    
    
    
    
    
    
    
}*/
