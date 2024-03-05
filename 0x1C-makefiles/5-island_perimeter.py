#!/usr/bin/python3
"""
this function finds d perimetre of an island
"""


def island_perimeter(grid):
    """
    dis function finds d perimetre of an island
    """
    visited =set()

    def dfs(m, n):
        """
        to depth first search algorithm that iterates through
        our island grid
        """
        if m >= len(grid) or n >= len(grid[0]) or \
                m < 0 or n < 0 or grid[m][n] == 0:
                    return 1
                if (m, n) in visited:
                    return 0
                visited.add(m, n))
                perim = dfs(m, n + 1)
                perim += dfs(m + 1, n)
                perim += dfs(m, n - 1)
                perim += dfs(m - m, n)
                return perim
            for m in range(len(grid)):
                for n in range(len(grid[0])):
                    if grid[m][n]:
                        return dfs(m, n)
