/**
 * @Author:		Ushio
 * @Date:		2016-07-25 21:59:31
 * @File:		375.cpp
 * @Description:
 				DP
 */

class Solution {
public:
    int getMoneyAmount(int n) {
        int f[n+1][n+1];

        // init
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; ++i)
            for (int j = i+1; j <= n; ++j)
                f[i][j] = 0x3f3f3f3f;

        for (int len = 1; len <= n; ++len)
        	for (int i = 1; i <= n-len+1; ++i) {
        			int j = i+len-1;
        			for (int k = i; k <= j; ++k)
        				f[i][j] = min(f[i][j], k + max(f[i][k-1], f[k+1][j]));
        	}
        return f[1][n];
    }
};