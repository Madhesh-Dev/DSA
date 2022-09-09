    vector <int> bottomView(Node *root) {
        
        vector<int> result;
        if(root==NULL) return result;
        
        queue<pair<Node*,int>> q;
        map<int,int> m;
        
        q.push({root,0});  // node and the vertical line value
        
        while(!q.empty())
        {
            
            auto p = q.front();
            q.pop();
            Node* temp=p.first;
            if(temp->left!=NULL)
            {
                q.push({temp->left,p.second-1});
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,p.second+1});
                
            }
            m[p.second] = p.first->data;
        }
        
        for(auto i:m)
        {
            result.push_back(i.second);
        }
        return result;
        
        
    }