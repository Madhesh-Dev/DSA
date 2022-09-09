    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        
        // idea is very simple assign vertical and level numbers to each node. To do this we can use levle order traversal and again we can use inorder also.
        
        
        
        map<int,map<int,multiset<int>>> nodes; // To store the vertical,level and nodes corresponding to that level and vertical
        
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});  // nodeValue , vertical , level
        
        while(!q.empty())
        {
                auto p = q.front();
        
                TreeNode* temp = p.first;
                int vertical=p.second.first;
                int level = p.second.second;
            
                q.pop();
            
                nodes[vertical][level].insert(temp->val);
                
                if(temp->left!=NULL)
                {
                    q.push({temp->left,{vertical-1,level+1}});
                    
                }
                if(temp->right!=NULL)
                {
                    q.push({temp->right,{vertical+1,level+1}});
                }
                
            
        }
        
        vector<vector<int>> result;
        
        for(auto temp:nodes)
        {
            vector<int> column;
            for(auto p:temp.second)
            {
                column.insert(column.end(),p.second.begin(),p.second.end());
            }
            result.push_back(column);
        }
        
        return result;
        
        
    }