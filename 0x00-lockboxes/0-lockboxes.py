#!/usr/bin/python3
"""
    You have n number of locked boxes in front of you. Each
    box is numbered sequentially from 0 to n - 1 and each box
    may contain keys to the other boxes.
"""

def canUnlockAll(boxes):
    """canUnlockAll
    Keyword arguments:
    argument -- method which determines when all the boxes
    could be opened
    Return: false or true
    """

    myKeys = [0]

    for key in myKeys:
        for item in boxes[key]:
            if item not in myKeys and item < len(boxes):
                myKeys.append(item)

    if len(myKeys) == len(boxes):
        return True
    return False
