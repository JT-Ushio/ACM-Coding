/**
 * @Author:		Ushio
 * @Date:		2016-07-27 23:54:54
 * @File:		202.cpp
 * @Description:
 				using STL <set>
 */	

#include <iostream>
#include <set>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while (n != 1 && s.find(n) == s.end()) {
        	s.insert(n);
        	int x = n;
        	n = 0;
        	while (x) {
        		int yu = x % 10;
        		n += yu*yu;
        		x /= 10;
        	}
        	cout << n << endl;
        }
        return (n==1);
    }
};

int main() {
	Solution a;
	cout << a.isHappy(19) << endl;
	return 0; 
}