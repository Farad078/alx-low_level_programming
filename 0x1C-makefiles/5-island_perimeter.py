#!/usr/bin/python3

def island_perimeter(grid):
    c = len(grid)
    m = 0
    n = 0
    width = 0
    height = 0
    prev_row = 0
    prev_col = 0
    while m < c:
        j = 0
        for i in grid[m]:
            if i == 1:
                if ((width == 0) and (height == 0)):
                    width += 1
                    height += 1
                    prev_row = j
                    prev_col = m
                elif ((width > 0) and (height > 0) and (j > prev_row)):
                    width += 1
                elif ((width > 0) and (height > 0) and (m > prev_col)):
                    height += 1
                    prev_col = m
            j += 1
        m += 1
    return (height + width) * 2
