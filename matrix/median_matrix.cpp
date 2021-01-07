// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        
        if(c == r && c == 1) return matrix[0][0];
        
        int m = (r*c + 1) / 2;
        int cnt = 0;
        
        int arr[c];
        for(int i=0; i<c; i++){
            arr[i] = 0;
        }
        int num;
        int i = 0;
        
        for(cnt=0; cnt<=m; cnt++){
            for(int k=0; k<c; k++){
                if(matrix[k][arr[k]] < num){
                    i = k;
                    num = matrix[k][arr[k]];
		    cout << num << endl;
                }
                else{
                }
            }
            //cout << "matrix[k][" << arr[i] << "] = " << num; 
            arr[i]++;
        }

	return num;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
