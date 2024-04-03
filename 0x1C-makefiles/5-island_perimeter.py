#!/usr/bin/python3
"""
Module to calculate perimeter of island
"""


def island_perimeter(grid):
    """
    Calculate perimeter of island
    Args:
        grid: list of list of integers representing the island
    Returns:
        Perimeter of the island
    """
    # Initialize perimeter to 0
    perimeter = 0
    # Iterate over each row of the grid
    for i in range(len(grid)):
        # Iterate over each column of the grid
        for j in range(len(grid[0])):
            # Check if the current cell is land (1)
            if grid[i][j] == 1:
                # Increment perimeter by 4 for each land cell
                perimeter += 4
                # Check if the cell has a land cell above it
                if i > 0 and grid[i - 1][j] == 1:
                    # If so, decrement perimeter by 2 (since they share an edge)
                    perimeter -= 2
                # Check if the cell has a land cell to its left
                if j > 0 and grid[i][j - 1] == 1:
                    # If so, decrement perimeter by 2 (since they share an edge)
                    perimeter -= 2
    # Return the final perimeter of the island
    return perimeter
