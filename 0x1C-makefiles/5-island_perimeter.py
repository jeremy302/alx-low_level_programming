#!/usr/bin/python3
''' module for the `island_perimeter()` function'''


def island_perimeter(grid):
    ''' calculates the perimeter of an island '''
    perimeter = 0
    grid_len = len(grid)
    for row_i, row in zip(range(grid_len), grid):
        row_len = len(row)
        for cell_i, cell in zip(range(row_len), row):
            perimeter += cell * (4 - sum(
                [
                    # horizontal
                    cell_i and row[cell_i - 1],
                    cell_i + 1 != row_len and row[cell_i + 1],
                    # vertical
                    row_i and  grid[row_i - 1][cell_i],
                    row_i + 1 != grid_len and grid[row_i + 1][cell_i]
                ]))
    return perimeter
