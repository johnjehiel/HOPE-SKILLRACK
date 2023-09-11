
#include <bits/stdc++.h>
using namespace std;
bool solve(int i, int j, int num, vector<vector<char>>& mat) {
    if (i + num >=mat.size() || j + num >=mat[0].size()) return false;
    for (int k=i; k < i + num ; k++) {
        for (int l=j; l < j + num; l++) {
            if (mat[k][l]!=mat[i][j]) return false;
        }
    }
    return true;
}
int main() {
    // Write C++ code here
    int r = 5, c = 4, ans = 1;
    vector<vector<char>> mat = {{'A', 'B', 'C', 'D'}, 
                                {'A', 'S', 'S', 'H'}, 
                                {'S', 'S', 'S', 'J'}, 
                                {'S', 'S', 'S', 'L'}, 
                                {'M', 'N', 'O', 'P'}};
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            for (int num = 2; num<=min(r, c); num++) {
                //cout << num <<" "; 
                bool valid = solve(i, j, num, mat);
                //cout << i << " " << j << " " << num << " " << valid << endl;
                if (valid) {
                    //cout << i << " " << j << endl;
                    ans = max(ans, num);
                    //cout << i << " " << j  << " " << num << " ";
                    //for (int k=i; k + num < mat.size(); k++) {
                    //    for (int l=j; l + num < mat[0].size(); l++) {
                    //        //cout << k << " " << l  << " " << mat[k][l] << " ";
                    //    }
                    //    cout << endl;
                    //}
                    //cout << endl;
                    if (ans == min(r, c)) {
                        cout << ans;
                        return 0;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}
