def are_collinear(p1, p2, p3):
    """Check if three points are collinear using the area formula."""
    x1, y1 = p1
    x2, y2 = p2
    x3, y3 = p3
    return (y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1)

def largest_non_collinear_set(n):
    # Generate all points in the n x n grid
    all_points = [(x, y) for x in range(n) for y in range(n)]
    
    # Start with an empty list to build the largest non-collinear subset incrementally
    non_collinear_set = []
    
    for point in all_points:
        # Check if adding this point keeps the subset non-collinear
        is_non_collinear = True
        for p1, p2 in combinations(non_collinear_set, 2):
            if are_collinear(p1, p2, point):
                is_non_collinear = False
                break  # Early termination if collinearity is found
        if is_non_collinear:
            non_collinear_set.append(point)
    
    return set(non_collinear_set)
