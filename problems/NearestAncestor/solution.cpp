#include<iostream>
#include<vector>

using namespace std;

/*class Node {
    int value;
    Node* left;
    Node* right;
    Node(): left(null), right(null), value(-1) {};
    Node(int v): left(null), right(null), value(v) {};
}*/

int findAncestor(int, int, int, vector<int>&);

int main() {
    int n, first, second; //Number of nodes and the target values
    int value;
    cin >> n >> first >> second;
    vector<int> tree;

    for(int i = 0; i < n; i++) {
	cin >> value;
	tree.push_back(value);
    }
    
    cout << tree[findAncestor(0, first, second, tree)] << endl;
    return 0;
}

int findAncestor(int cur, int first, int second, vector<int>& tree) {
    if(tree[cur] < first && tree[cur] < second) {
	return findAncestor(cur*2+2, first, second, tree);
    } else if(tree[cur] > first && tree[cur] > second) {
	return findAncestor(cur*2+1, first, second, tree);
    } else {
	return cur;
    }
}
