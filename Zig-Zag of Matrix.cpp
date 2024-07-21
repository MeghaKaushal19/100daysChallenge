#include <bits/stdc++.h>
vector<int> printMatrix(vector<vector<int>> &mat, int n, int m)
{
    vector<int> ans;
    bool flg = true;

    for (int i = 0; i < m; i++) {
        int r = 0;
        int c = i;
        vector<int> tmp;

        while (r >= 0 && c >= 0 && c < m && r < n) {
            tmp.push_back(mat[r][c]);
            r++;
            c--;
        }

        if (flg)
            reverse(tmp.begin(), tmp.end());

        ans.insert(ans.end(), tmp.begin(), tmp.end());
        flg = !flg;
    }

    for (int i = 1; i < n; i++) {
        int r = i;
        int c = m - 1;
        vector<int> tmp;

        while (r >= 0 && c >= 0 && c < m && r < n) {
            tmp.push_back(mat[r][c]);
            r++;
            c--;
        }

        if (flg)
            reverse(tmp.begin(), tmp.end());

        ans.insert(ans.end(), tmp.begin(), tmp.end());
        flg = !flg;
    }

    return ans;
}
