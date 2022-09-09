    vector<int> topView(Node *root)
    {
        vector<int> ans;
        
        queue<pair<Node*,int>> q;
        map<int,int> m;
        
        if(root==NULL) return ans;
        
        q.push({root,0}); // node,vertical
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            int verticalLine = p.second;
            if(m.find(verticalLine)==m.end()) m[verticalLine] = p.first->data;
            
            if(p.first->left!=NULL){
                
                q.push({p.first->left,verticalLine-1});
            }
            
            if(p.first->right!=NULL){
                
                q.push({p.first->right,verticalLine+1});
                
            }
            
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }