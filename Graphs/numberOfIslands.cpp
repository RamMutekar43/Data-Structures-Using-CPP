#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Define a class named 'solution'
class solution {
private:
    // BFS function to mark all connected '1's (land) starting from (row, col)
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> grid) {
        vis[row][col] = 1;  // Mark the starting cell as visited
        queue<pair<int, int>> q;
        q.push({row, col});  // Enqueue the starting cell
        int n = grid.size();
        int m = grid[0].size();

        // Perform BFS traversal
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Traverse all 8 possible directions around the cell
            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int nrow = row + delrow;  // New row index
                    int ncol = col + delcol;  // New column index

                    // Check if new cell is within bounds, is land ('1'), and not visited
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                        && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                        vis[nrow][ncol] = 1;  // Mark as visited
                        q.push({nrow, ncol});  // Enqueue the connected land
                    }
                }
            }
        }
    }

public:
    // Function to count the number of islands in the grid
    int numIsland(vector<vector<char>> &grid) {
        int n = grid.size();       // Number of rows
        int m = grid[0].size();    // Number of columns

        // Create a visited matrix initialized to 0
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;  // To count the number of islands

        // Traverse the entire grid
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                // If cell is land ('1') and not visited, it's a new island
                if (!vis[row][col] && grid[row][col] == '1') {
                    count++;  // Increment island count
                    bfs(row, col, vis, grid);  // Explore the full island using BFS
                }
            }
        }
        return count;  // Return the total number of islands
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    // Define a 2D grid to store the input characters ('1' or '0')
    vector<vector<char>> grid(n, vector<char>(m));

    cout << "Enter grid rows (each row of 0s and 1s):\n";
    // Input each row as a string and convert it into grid characters
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            grid[i][j] = row[j];  // Assign each character to the grid
        }
    }

    solution obj;  // Create an object of the class
    int result = obj.numIsland(grid);  // Call the function to count islands

    cout << "Number of islands is : " << result << endl;

    return 0;
}
