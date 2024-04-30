k2, k3, k5, k6 = map(int, input().split())
result = 0

# 256 i 32

min256 = min(k2, k5, k6)
result = min256 * 256
k2 -= min256

min32 = min(k3, k2)
result = result + (32 * min32)

print(result)