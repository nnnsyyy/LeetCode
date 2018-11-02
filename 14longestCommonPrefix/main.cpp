/*
 * main.cpp
 *
 *  Created on: Nov 2, 2018
 *      Author: sisy2
 */


#include<iostream>
#include"func.cpp"
#include"header.h"
#include<vector>
#include<string>

using namespace std;

//Improvement: Comparing the common substrings of every two continuous strings
//N.B. Including LCS and iterator operation

int main() {
	Solution ins;
	string s[] = {"flower","flow","flight"};

	vector<string> a(s, s+3);
//	cout<<ins.longestCommonSubstring(a)<<endl;
	cout<<ins.longestCommonPrefix(a)<<endl;
	return 0;
}

