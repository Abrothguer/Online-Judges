
x, y = input().split()
x, y = int(x), int(y)

grid = []
for _ in range(x):
    grid.append(input())

# print(grid)

views = 0

for i in range(x):
    for j in range(y):

        if grid[i][j] != 's':
            continue
        pattern = "aba"
        print(f"Testing for s on {i} {j}")
        input()

        # Testing horizontally
        contain = True
        for i_p in range(3):
            if j + i_p + 1 < y and pattern[i_p] == grid[i][j + i_p + 1]:
                continue
            contain = False
            break
        print(contain)
        views += 1 if contain else 0

        # Testing vertically
        contain = True
        for i_p in range(3):
            if i + i_p + 1 < x and pattern[i_p] == grid[i + i_p + 1][j]:
                continue
            contain = False
            break
        print(contain)
        views += 1 if contain else 0

        # Testing down and right
        contain = True
        for i_p in range(3):
            if i + i_p + 1 < x and j + i_p + 1 < y and pattern[i_p] == grid[i + i_p + 1][j + i_p + 1]:
                continue
            contain = False
            break
        print(contain)
        views += 1 if contain else 0

        # Testing up and right
        contain = True
        for i_p in range(3):
            if i - i_p - 1 >= 0 and j + i_p + 1 < y and pattern[i_p] == grid[i - i_p - 1][j + i_p + 1]:
                continue
            contain = False
            break
        print(contain)
        views += 1 if contain else 0

print(views)
