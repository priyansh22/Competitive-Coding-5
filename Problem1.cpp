
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> result ; 
        
        //root 
        if(root==NULL) return result;
        
        queue<TreeNode*>q; 
        
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            int max = INT_MIN;
           
            
            for(int i=0;i<size;i++)
            {
                 TreeNode * temp = q.front();
            q.pop();
                
                
               if(temp->val>max)
                  
                   {
                   max=temp->val;
                   }
                
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
               }
            result.push_back(max);
            
        } // end of while
        
        return result;
    }
};