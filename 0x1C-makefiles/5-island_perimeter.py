#!/usr/bin/python3


def island_perimeter(grid):
    count = 0
    for row in grid:
            for col in grid:
                count += 1
    return count


