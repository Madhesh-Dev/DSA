vector<int> inOrder(Node* root)
    {
        stack<Node*> s;
        vector<int> ans;
        Node* node = root;
        while(true){
            
            if(node!=NULL){
                s.push(node);
                node = node->left;
            }
            else{
                
                if(s.empty()) break;
                
                Node* cur = s.top();
                s.pop();
                
                ans.push_back(cur->data);
                
                node = cur->right;
                
            }
            
        }
        
        return ans;
        
    }