class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> allno;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                allno.push_back(matrix[i][j]);
            }
        }
        sort(allno.begin(),allno.end());
        return allno[k-1];
    }
};