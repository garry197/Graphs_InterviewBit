/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root) {
    
    
    
   
    if(!root||!root->left)
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
