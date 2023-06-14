#!/usr/bin/python3

# Author - Joyclare Cherono

def square_matrix_map(matrix=[]):
    return (list(map(lambda x: list(map(lambda y: y**2, x)), matrix)))
