#!/usr/bin/python3
# Author - Joyclare Cherono

"""Defines an object attribute lookup function."""


def lookup(obj):
    """Return a list of an object's available attributes."""
    return (dir(obj))
