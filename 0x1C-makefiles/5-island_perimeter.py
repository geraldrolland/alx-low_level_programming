#!/usr/bin/python3
"""
This module defines the function island_perimeter()
"""


def island_perimeter(grid):
    """This function return the perimeter of the island
    args:
        grid(list): list of list as grid
    """
    num_row = 0
    for row in grid:
        num_row += 1
    num_column = len(grid[0])
    return (num_row - 2) * (num_column - 2)
    
