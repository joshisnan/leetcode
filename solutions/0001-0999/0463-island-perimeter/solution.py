'''
463. Island Perimeter

You are given row x col grid representing a map where grid[i][j] = 1
represents land and grid[i][j] = 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally).
The grid is completely surrounded by water, and there is exactly one island
(i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island.
One cell is a square with side length 1.
The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

Example 1:
Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
Explanation: The perimeter is the 16 yellow stripes in the image above.

Example 2:
Input: grid = [[1]]
Output: 4

Example 3:
Input: grid = [[1,0]]
Output: 4
'''

class Solution:
    def islandPerimeter(self, grid: list[list[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        perimeter = 0

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1:
                    # Check all four directions
                    if r == 0 or grid[r - 1][c] == 0:  # Up
                        perimeter += 1
                    if r == rows - 1 or grid[r + 1][c] == 0:  # Down
                        perimeter += 1
                    if c == 0 or grid[r][c - 1] == 0:  # Left
                        perimeter += 1
                    if c == cols - 1 or grid[r][c + 1] == 0:  # Right
                        perimeter += 1

        return perimeter


def main():
    print(Solution().islandPerimeter([[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]))  # Expected output: 16
    print(Solution().islandPerimeter([[1]]))  # Expected output: 4
    print(Solution().islandPerimeter([[1,0]]))  # Expected output: 4


if __name__ == "__main__":
    main()
