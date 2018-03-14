#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

int height(struct TreeNode* root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int left = height(root->left);
    int right = height(root->right);
    return left> right? left+1: right+1;
}

void util(char **result, struct TreeNode* root, int i, int *r, char* temp){
    i+= sprintf(temp+i, "%d", root->val);
    printf("%d ",*r);
    if(!root->left && !root->right){
        sprintf(result[(*r)++],"%s", temp);
    }
    i+= sprintf(temp+i, "->");
    if(root->left){
        util(result, root->left, i, r, temp);
    }
    if(root->right){
        util(result, root->right, i, r, temp);
    }
}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    if(root == NULL)
        return NULL;
    int ht = height(root);
    int width = pow(2,ht-1);
    char** result = malloc((width+1)* sizeof(char *));
    int i, r=0;
    char *temp = malloc((height+1)* sizeof(char));
    for(i=0; i<=ht; i++)
        result[i] = malloc((height+1) * sizeof(char));
    util(result, root, 0, &r, temp);
    *returnSize = r;
    return result;
}