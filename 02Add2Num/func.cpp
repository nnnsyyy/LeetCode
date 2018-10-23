/*
 * func.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: sisy2
 */

#include <iostream>
#include <math.h>
#include "header.h"

using namespace std;

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int n;
		bool first = true, carry = false;
		ListNode *ans, *tmp;
		while(l1 != NULL or l2 != NULL) {

			if (l1 != NULL and l2 != NULL) {
				n = l1->val + l2->val;
				l1 = l1->next;
				l2 = l2->next;
			} else if (l1 == NULL and l2 != NULL) {
				n = l2->val;
				l2 = l2->next;
			} else{
				n = l1->val;
				l1 = l1->next;
			}

			if (carry) n++;
			ListNode *d = new ListNode(n % 10);
			if (first) {
				ans = d;
				first = false;
			} else {
				tmp->next = d;
			}
			tmp = d;
			(n > 9) ? carry = true : carry = false;
		}

		if (carry){
			ListNode *d = new ListNode(1);
			tmp->next = d;
		}

		return ans;
	}

	void printLN(ListNode* ln) {
		while (ln->next != NULL) {
			cout << ln->val << "->";
			ln = ln->next;
		}
		cout << ln->val << endl;
	}
};

