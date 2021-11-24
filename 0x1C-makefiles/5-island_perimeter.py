#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """returns perimeter"""
    count = 0
    index = 0

    if not isinstance(grid, list):
        return 0

    for row in grid:
        row_len = len(row)
    row_len += 2

    grid_line = []
    i = 0
    while i < row_len:
        grid_line.append(0)
        i += 1
    for row in grid:
        grid_line.append(0)
        for item in row:
            grid_line.append(item)
        grid_line.append(0)
    i = 0
    while i < row_len:
        grid_line.append(0)
        i += 1

    for item in grid_line:
        if item == 1:
            if grid_line[index - row_len] == 0:
                count += 1
            if grid_line[index - 1] == 0:
                count += 1
            if grid_line[index + 1] == 0:
                count += 1
            if grid_line[index + row_len] == 0:
                count += 1
        index += 1

    return count
