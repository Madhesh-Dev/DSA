// Width - number of nodes in a level between any two nodes

    int widthOfBinaryTree(TreeNode* root) {
        
        // Width  - its pretty obvious that we use level order traversal
        
        // the idea is very simple just give the indexing to nodes so that at every level the width RightMost index - LeftMost index + 1
        
        if(root==NULL) return 0;
        
        int maxWidth = 0;
        
        queue<pair<TreeNode*,long>> q;
        q.push({root,0}); // 0 index for root
        
        while(!q.empty())
        {
            int size = q.size();
            int mmin = q.front().second;
            int first,last;
            
            for(int i=0;i<size;i++)
            {
                long cur_id = q.front().second-mmin; // to avoid overflow
                
                TreeNode* temp = q.front().first;
                q.pop();
                if(i==0) first = cur_id;
                if(i==size-1) last = cur_id;
                
                if(temp->left)
                {
                    q.push({temp->left,2*cur_id + 1});
                }
                if(temp->right)
                {
                    q.push({temp->right,2*cur_id + 2});
                }
                
                
            }
            maxWidth = max(maxWidth,last-first+1);
            
            
            
        }
        return maxWidth;
        
    }