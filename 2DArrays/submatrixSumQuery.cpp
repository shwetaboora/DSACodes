#include <iostream>

using namespace std;
 
// Function to find the sum of all possible submatrices of a given Matrix
int matrixSum(int arr[][n])
{
   int n = 3;
    // Variable to store the required sum
    int sum = 0;
 
    // Nested loop to find the number of submatrices, each number belongs to
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
 
            // Number of ways to choose from top-left elements
            int top_left = (i + 1) * (j + 1);
 
            // Number of ways to choose from bottom-right elements
            int bottom_right = (n - i) * (n - j);
            sum += (top_left * bottom_right * arr[i][j]);
        }
 
    return sum;
}
 
int main()
{
    int arr[][n] = { { 1, 1, 1 },
                     { 1, 1, 1 },
                     { 1, 1, 1 } };
 
    cout << matrixSum(arr);
 
    return 0;
}