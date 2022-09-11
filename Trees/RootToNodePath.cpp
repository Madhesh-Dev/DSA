bool helper(TreeNode* node,int x,vector<int> &path){
    
    if(node==NULL){
        return false;
    }
    
    path.push_back(node->val);
    
    if(node->val==x){
        return true;
    }
    
    if(helper(node->left,x,path) || helper(node->right,x,path)){
        return true;
    }
    
    path.pop_back();
    
    return false;
    
}
 
vector<int> Solution::solve(TreeNode* A, int B) {
    
    vector<int> path;
    helper(A,B,path);
    return path;
    
}

