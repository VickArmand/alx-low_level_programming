#!/usr/bin/python3
"""
This modules hosts island_perimeter function
"""
def island_perimeter(grid):
    """
     that returns the perimeter of the island described in grid:
        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water,
        and there is one island (or nothing).
        The island doesn’t have “lakes”
        (water inside that isn’t connected to the water around the island).
    """
    height = 0
    width = 0
    x = 0
    y = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if height > 100 or width > 100:
                return
            if grid[i][j] == 1:
                if x == i and y != j:
                    height += 1
                elif x != i and y == j:
                    width += 1
                else:
                    height += 1
                    width += 1
                x = i
                y = j
    perimeter = 2 * (height + width)
    return perimeter
