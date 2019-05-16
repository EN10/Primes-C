primesupto = 100
isprime = True
for i in range(2,primesupto):
  for j in range(2,i/2):
    if  i%j==0: isprime=False
  if isprime == 1:       print(i)
  isprime = True
