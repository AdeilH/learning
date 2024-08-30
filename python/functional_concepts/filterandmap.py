numbers = [1, 2, 3, 4, 5]

print(list(filter(lambda x: x > 3, numbers)))

print(list(map(lambda x: x+x, numbers)))

print(list(map(lambda y: y if y > 3 else y * 2, numbers)))