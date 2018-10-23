/*
 * header.h
 *
 *  Created on: Oct 23, 2018
 *      Author: sisy2
 */

#ifndef HEADER_H_
#define HEADER_H_

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

template <class T>

int arrayLen(T &array){
	return sizeof(array) / sizeof(array[0]);
}

#endif /* HEADER_H_ */
