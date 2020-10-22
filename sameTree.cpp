#include <iostream>
#include <string>
using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};


class Solution {
public:
	bool isSameTree(TreeNode* a, TreeNode* b) {
		if (a == NULL && b == NULL) return true;
		if (a != NULL && b == NULL) return false;
		if (a == NULL && b != NULL) return false;
		if (a->val == b->val && isSameTree(a->left, b->left) && isSameTree(a->right, b->right)) {
			return true;
		}
		return false;
	}

};


////MyFunctions.h
//int myFunction1(int, int);
//int myFunction2(int, int);
//Implement them in MyFunctions.cpp
//
////MyFunctions.cpp
//#include "MyFunctions.h"
//int myFunction1(int a, int b) {
//	//your code
//}
//int myFunction2(int a, int b) {
//	//your code
//}
//Include the header in whatever file you want
//
////OtherFile.cpp
//#include "MyFunctions.h"
////Now you have access to the functions defined in MyFunctions.h in this file