
void f(Node* root){

    stack<pair<Node*,int>> s;

    if(root!=NULL{
        s.push({root,1});
    }
    vector<int> preOrder;
    vector<int> inOrder;
    vector<int> postOrder;

    while(!s.empty()){

        auto cur = s.top();
        s.pop();

        if(cur.second==1){

            preOrder.push_back(cur.first->val);
            cur.second++;
            s.push(cur);
            if(cur.first->left!=NULL{
                s.push({cur.first->left,1});
            }

        }
        else if(cur.second==2){

            inOrder.push_back(cur.first->val);
            cur.second++;
            s.push(cur);
            if(cur.first->right!=NULL{
                s.push({cur.first->right,1});
            }
        }
        else if(cur.second==3){

            postOrder.push_back(cur.first->val);

        }

    }

}