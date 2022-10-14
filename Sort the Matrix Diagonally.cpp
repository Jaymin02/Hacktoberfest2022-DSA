class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int i=0,j=0;
        
        int n=mat.size(),m=mat[0].size();
        
        while(j<m){
            int ti = i,tj=j;
            
            vector<int>sub;
            while(ti<n && tj<m){
                sub.push_back(mat[ti][tj]);
                ti++;tj++;
            }
            sort(sub.begin(),sub.end());
            
            int c = 0;
            ti=i;tj=j;
            while(ti<n && tj<m){
                mat[ti][tj]=sub[c];
                c++;
                ti++;tj++;
            }
            j++;
        }
        
        i=1;j=0;
        while(i<n){
             int ti = i,tj=j;
            
            vector<int>sub;
            while(ti<n && tj<m){
                sub.push_back(mat[ti][tj]);
                ti++;tj++;
            }
            sort(sub.begin(),sub.end());
            
            int c = 0;
            ti=i;tj=j;
            while(ti<n && tj<m){
                mat[ti][tj]=sub[c];
                c++;
                ti++;tj++;
            }
            i++;
        }
        
        return mat;
    }
};
