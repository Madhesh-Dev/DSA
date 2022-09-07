    vector<int> preOrder(Node* root)
    {

        Node* node = root;
        stack<Node*> s;
        vector<int> ans;
        
        while(true){
            
            if(node!=NULL){
                ans.push_back(node->data);
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty()) break;
                Node* cur = s.top();
                s.pop();
                node = cur->right;
                
            }
            
        }
        return ans;
    }