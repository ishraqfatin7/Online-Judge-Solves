def ii():
  return int(input())


def ai():
  return [int(x) for x in input().strip().split()]


for _ in range(ii()):

  n = ii()

  if(n == 1):
    print(1)
    continue

  if n & 1:
    print(-1)
    continue

  A = []
  for i in range(n//2):
    A.append(i)
    A.append(n-i-1)

  cs = 0
  print(n, end=" ")
  for i in range(n-1):
    cs += i

    print((A[i+1] - A[i]) % n, end=" ")

  print()
