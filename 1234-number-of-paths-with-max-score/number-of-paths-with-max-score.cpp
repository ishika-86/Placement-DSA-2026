class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        
        int boardSize = board.size();
        const int MOD = 1e9 + 7;
      
        // dp[i][j] stores the maximum score from position (i,j) to end
        int maxScore[boardSize][boardSize];
        // pathCount[i][j] stores the number of paths achieving maximum score from (i,j) to end
        int pathCount[boardSize][boardSize];
      
        // Initialize arrays
        memset(maxScore, -1, sizeof(maxScore));
        memset(pathCount, 0, sizeof(pathCount));
      
        // Base case: end position has score 0 and 1 path
        maxScore[boardSize - 1][boardSize - 1] = 0;
        pathCount[boardSize - 1][boardSize - 1] = 1;
      
        // Lambda function to update cell (i,j) based on cell (prevX,prevY)
        auto updateCell = [&](int i, int j, int prevX, int prevY) {
            // Check boundaries and validity
            if (prevX >= boardSize || prevY >= boardSize || 
                maxScore[prevX][prevY] == -1 || 
                board[i][j] == 'X' || board[i][j] == 'S') {
                return;
            }
          
            // If path from (prevX,prevY) gives better score
            if (maxScore[prevX][prevY] > maxScore[i][j]) {
                maxScore[i][j] = maxScore[prevX][prevY];
                pathCount[i][j] = pathCount[prevX][prevY];
            } 
            // If path from (prevX,prevY) gives same score, add to path count
            else if (maxScore[prevX][prevY] == maxScore[i][j]) {
                pathCount[i][j] = (pathCount[i][j] + pathCount[prevX][prevY]) % MOD;
            }
        };
      
        // Fill DP table from bottom-right to top-left
        for (int i = boardSize - 1; i >= 0; --i) {
            for (int j = boardSize - 1; j >= 0; --j) {
                // Try all three possible moves: down, right, diagonal
                updateCell(i, j, i + 1, j);      // Move down
                updateCell(i, j, i, j + 1);      // Move right
                updateCell(i, j, i + 1, j + 1);  // Move diagonal
              
                // Add current cell's value to the score if reachable
                if (maxScore[i][j] != -1) {
                    if (board[i][j] >= '0' && board[i][j] <= '9') {
                        maxScore[i][j] += (board[i][j] - '0');
                    }
                }
            }
        }
      
        // Prepare result: [maximum score, number of paths]
        vector<int> result(2);
        if (maxScore[0][0] != -1) {
            result[0] = maxScore[0][0];
            result[1] = pathCount[0][0];
        }
      
        return result;
    }
};