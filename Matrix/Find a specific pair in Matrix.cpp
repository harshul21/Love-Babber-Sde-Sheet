//Problem Link:- https://www.geeksforgeeks.org/find-a-specific-pair-in-matrix/

//Approach 1:- Naive Approach - One by one preprocessing the matrix
//Time Complexity:- O(N^4)

//Approach 2:- Use of preprocessing the data
//Time Complexity:- O(N*N)

#include<iostream>
using namespace std;
#define N 5

int findMaxValue(int mat[][n]){

	int maxValue = INT_MIN;
	int maxArr[n][n];
	maxArr[n-1][n-1]=mat[n-1][n-1];
	
	int maxv=mat[n-1][n-1];

	//Preprocess last row
	for(int j=n-2;j>=0;j--){
		if(mat[n-1][j]>maxv){
			maxv=mat[n-1][j];
		}
		maxArr[n-1][j]=maxv;
	}

	maxv=mat[n-1][n-1];

	//Preprocess last column
	for(int i=n-2;i>=0;i--){
		if(mat[i][n-1]>maxv){
			maxv=mat[i][n-1];
		}
		maxArr[i][n-1]=maxv;
	}

	//Preprocess the rest of the matrix
	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){

			if(maxArr[i+1][j+1]-mat[i][j]>maxValue){
				maxValue=maxArr[i+1][j+1]-mat[i][j];
			}

			maxArr[i][j]=max(mat[i][j],max(maxArr[i][j+1],maxArr[i+1][j]));
		}
	}
	return maxValue;
}

int main()
{
    int mat[N][N] = {
                      { 1, 2, -1, -4, -20 },
                      { -8, -3, 4, 2, 1 },
                      { 3, 8, 6, 1, 3 },
                      { -4, -1, 1, 7, -6 },
                      { 0, -4, 10, -5, 1 }
                    };
    cout << "Maximum Value is "
         << findMaxValue(mat);
 
    return 0;
}
