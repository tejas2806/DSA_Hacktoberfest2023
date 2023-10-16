#include <bits/stdc++.h>
using namespace std;

void maxMatrixSum(vector<vector<int> >& matrix)
{
	int n = matrix.size(); // no of rows in a matrix;
	int m = matrix[0].size(); // no of columns in matrix;
	int maxsum = INT_MIN;
	int top = 0, bottom = 0, left = 0, right = 0;
	// a loop for top row position in the
	// rectangle
	for (int i = 0; i < n; i++) {
		// a loop for left column position
		// of the rectangle
		for (int j = 0; j < m; j++) {
			// a loop for bottom row in the
			// rectangle
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < m; l++) {
					// a loop for right column in
					// the rectangle
					int curr = 0;
					for (int x = i; x <= k; x++) {
						// a loops execute for
						// finding sum of elements in the
						// rectangle
						for (int y = j; y <= l; y++) {
							// for all possibble
							// points of rectangle
							curr += matrix[x][y];
						}
					}
				// updating the resultant variables if curr > maxsum
					if (curr > maxsum) {
						maxsum = curr;
						top = i;
						left = j;
						right = k;
						bottom = l;
					}
				}
			}
		}
	}
	cout << "( Top , Left )"
		<< "( " << top << " , " << left << " )" << endl;
	cout << "( Bottom , Right )"
		<< "( " << bottom << " , " << right << " )"
		<< endl;
	cout << "The sum of this rectangle is: " << maxsum
		<< endl;
}
int main()
{
	vector<vector<int> > v = { { 1, 2, -1, -4, -20 },
							{ -8, -3, 4, 2, 1 },
							{ 3, 8, 10, 1, 3 },
							{ -4, -1, 1, 7, -6 } };
	maxMatrixSum(v);
	return 0;
}
// contributed by hungry_coder_109(Naveen);
