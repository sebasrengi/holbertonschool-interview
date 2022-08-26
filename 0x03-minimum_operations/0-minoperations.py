#!/usr/bin/python3
"""
    In a text file, there is a single character H. Your text editor can
    execute only two operations in this file: Copy All and Paste. Given
    a number n, write a method that calculates the fewest number of
    operations needed to result in exactly n H characters in the file.
"""


def minOperations(n):
    """ Return sum of process until n H """
    if n < 2 or type(n) is not int:
        return 0

    count = 1
    process = []

    while n != 1:
        count += 1
        if n % count == 0:
            while n % count == 0 and n != 1:
                n /= count
                process.append(count)
    return sum(process)
