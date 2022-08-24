# Write a program to demonstrate control structures in python

print("While Loop")
i = 0
while i < 10:
  if i == 5:
    break
  else:
    print(i)
    i += 1
    continue
print()
print("Do While Loop")
i = 0
while True:
  if i == 5:
    break
  else:
    print(i)
    i += 1
    continue
print()
print("For Loop")
for i in range(0,10):
  if i == 5:
    continue
  else:
    print(i)
    continue
print()