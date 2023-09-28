#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    grid (List[List[int]]): A list of lists representing the grid.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - 0 represents a water zone.
    - 1 represents a land zone.
    - Grid cells are connected horizontally/vertically
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water, and there is one island
    - The island doesn’t have “lakes”
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                """Check adjacent cells (up, down, left, right)"""
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
