#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define push_back pb;
int count_s=0;

class Node{
    int k ,ht;
    node* left,right;
    // doing constuctor
    Node (int ky){
        int k=ky;
    }
    //doing default consrt
    Node(){
//nothing defult
    }



};
//i am fiding heght here
int h=(Node* k) {return k ?k->h:0;}

//rotating right 
Node* rr(Node* y) {
    Node* x=y->left;
    y->left=x->right;
    x->right = y;
    y->height= 1 +max(h(y->left), h(y->right));
    x->height =1+max(h(x->left), h(x->right));
    count_s++;
    return x;

}

//rotating left hre
Node* lr(Node* x){
    Node* y=x->right;
    x->right =y->left;
    y->left=x;
    x->height = 1 +max(h(x->left),h(x->right));
    y->height = 1 +max(h(y->left), h(y->right));
    count_s++;
    return y;
}

//i am inserting into binarii treeee! here
Node* insert (Node* nd,int key){
    Node*z=new Node(key)

}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;cin>>n;
    vector<ll>elm(n);
    for(int i=0;i<n;i++) cin>>elm[i];



    

    
    
}   