/*
 * func.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: sisy2
 */

#include <iostream>
#include <math.h>
#include "header.h"
#include<vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
	        string pref="";
	        int idx=0;
	        typename vector<string>::iterator VS=strs.begin();
	        if(VS==strs.end()) return "";
	        string tmp=*VS;
	        bool pjudge=true;

	        for(int j=0; j<tmp.length();j++){
	            char p=tmp[idx];
	            cout<<"p: "<<p<<endl;
	            for(; VS!=strs.end(); VS++){
	                string word=*VS;
	                if(word[idx]!=p){
	                    break;
	                    pjudge=false;
	                }
	            }
	            if(!pjudge){
	                 break;
	            }else{
	                pref+=p;
	            }
	            VS=strs.begin();
	            idx++;
	        }


	        return pref;
	    }

	string longestCommonSubstring(vector<string>& strs) {
	        string tmp="";
	        int slen=0, idx=0;
	        typename vector<string>::iterator VS=strs.begin();
	        // shortest word
	        for(; VS!=strs.end(); VS++){
	            string word=*VS;
	            if(slen==0){
	                slen = word.length();
	                tmp = word;
	            }
	            if(word.length()<slen){
	                slen = word.length();
	                tmp = word;
	            }
	        }
	        int tlen = (1+tmp.length())*tmp.length()/2;
	        // all prefix of shortest word
	        string prefix[tlen];
	        for(int len=tmp.length(); len>0; len--){
	            for(int i=0; i<=tmp.length()-len; i++){
	                 prefix[idx++]=tmp.substr(i, len);
	            }
	        }
	        tmp = "";
	            for(int i=0; i<tlen; i++){
	                bool pref=true;
	                for(VS=strs.begin(); VS!=strs.end(); VS++){
	                    string word=*VS;
	                    int pos=word.find(prefix[i]);
	                    if(pos>word.length() || pos<0){
	                        pref=false;
	                        break;
	                    }
	                }
	                if(pref){
	                    tmp=prefix[i];
	                    break;
	                }
	            }
	        return tmp;
	    }
};

