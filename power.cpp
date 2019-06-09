#include<iostream>
#include "treenode.h"
using namespace std;
int main(){
    treenode<int> * root=new treenode<int>(1);
    treenode<int>*node1=new treenode<int>(2);
    treenode<int>*node1=new treenode<int>(3);
    root->childern.push_back(node1);
    root->childern.push_back(node2);
    print(root);
}
void print(treenode<int>*root)
{
    cout<<root->data<<endl;
    for(int i=0;i<root->children();i++)
    {  
     print(root->children[i]);
    }
}