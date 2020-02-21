#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in a grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i + 1][j] == 0:
                        perimiter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i][j - 1] == 0 or j == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
    return perimeter
