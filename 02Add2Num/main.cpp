/*
 * main.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: sisy2
 */

// https://leetcode.com/problems/add-two-numbers
#include<iostream>
#include"func.cpp"
#include"header.h"
#include <math.h>

using namespace std;

int main() {
	Solution ins;
	ListNode *a1, *a2;
	ListNode *tmp;
	int n1[] = {9}, n2[] = {1,9,9,9,9,9,9,9,9,9};
	for (int i = 0; i < arrayLen(n1); i++) {
		ListNode *d = new ListNode(n1[i]);
		if (i == 0) {
			a1 = d;
		} else {
			tmp->next = d;
		}
		tmp = d;
	}
	for (int i = 0; i < arrayLen(n2); i++) {
		ListNode *d = new ListNode(n2[i]);
		if (i == 0) {
			a2 = d;
		} else {
			tmp->next = d;
		}
		tmp = d;
	}
//	ins.printLN(a1);
//	ins.printLN(a2);
	ins.printLN(ins.addTwoNumbers(a1, a2));
	return 0;
}

