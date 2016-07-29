/**
 * @Author:		Ushio
 * @Date:		2016-07-29 23:15:48
 * @File:		205.cpp
 * @Description:
 				String		
 */

#include <string>
#include <iostream>

using namespace std; 			

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    	//cout << s << endl << t << endl;
  		if (s.size() != t.size())
  			return false;
  		char ma[128] = {0};
  		bool check[128] = {0};
  		for (int i = 0, len = s.size(); i < len; ++i) {
  			if (ma[s[i]]==t[i] || ma[s[i]]==0 && !check[t[i]]) {
  				ma[s[i]] = t[i];
  				check[t[i]] = true;
  			}
  			else 
  				return false;
  		}
  		return true;
    }
};


int main() {
	Solution a;
	string s1 = "a", s2 = "a";
	cout << a.isIsomorphic(s1, s2) << endl;
	return 0;
}