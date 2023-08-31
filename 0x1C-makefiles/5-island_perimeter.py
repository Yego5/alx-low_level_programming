#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers representing an island.
    Returns:
        The perimeter of the island is defined in a grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for k in range(width):
            if grid[i][k] == 1:
                size += 1
                if (k > 0 and grid[i][k - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][k] == 1):
                    edges += 1
    return size * 4 - edges * 2
