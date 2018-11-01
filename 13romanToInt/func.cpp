/*
 * func.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: sisy2
 */

#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		        int slen, idx=0, num=0, tmp=0;
		        slen = s.length();
		        int cur=0, prev=0, curd=0, prevd=0;

		        while(idx<slen){
		                switch(s[idx]){
		                    case 'I': cur = 1, curd = 1; break;
		                    case 'V': cur = 5, curd = 1; break;
		                    case 'X': cur = 10, curd = 2; break;
		                    case 'L': cur = 50, curd = 2; break;
		                    case 'C': cur = 100, curd = 3; break;
		                    case 'D': cur = 500, curd = 3; break;
		                    case 'M': cur = 1000, curd = 4; break;
		                }
		                if(prev!=0){
		                    if(cur>prev){
		                        tmp = cur - prev;
		                    }else{
		                        if(curd<prevd){
		                            num += tmp;
		                            tmp = cur;
		                        }else{
		                            tmp += cur;
		                        }
		                    }
		                    prev = cur;
		                    prevd = curd;
		                }else{
		                    tmp = cur;
		                    prev = cur;
		                    prevd = curd;
		                }
		            idx++;
		        }
		        num += tmp;
		        return num;
		    }
};


