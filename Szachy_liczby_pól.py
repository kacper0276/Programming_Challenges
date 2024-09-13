def count_squares(n):
    total_squares = n * n
    if n % 2 == 0:
        light_squares = total_squares // 2
        dark_squares = total_squares // 2
    else:
        light_squares = (total_squares + 1) // 2
        dark_squares = (total_squares - 1) // 2
    
    print(dark_squares)
    print(light_squares)

n = int(input().strip())
count_squares(n)
