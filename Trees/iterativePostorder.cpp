vector<int> postOrder(Node* node) {
        
        vector<int> ans;
        
        stack<Node*> s1;
        stack<int> s2;
        
        if(node==NULL) return ans;
        
        s1.push(node);
        
        while(!s1.empty()){
            
            
            Node* cur = s1.top();
            s1.pop();
            
            s2.push(cur->data);
            
            if(cur->left!=NULL){
                
                s1.push(cur->left);
                
            }
            if(cur->right!=NULL){
                s1.push(cur->right);
                
            }
        }
        
        while(!s2.empty()){
            
            ans.push_back(s2.top());
            s2.pop();
        }
        
        return ans; 
    }