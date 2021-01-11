def isPrime(a):
    for i in range(2,a):
        if(a%i == 0):
            return False
    return True

a = int(input("Enter the number = "))
if(isPrime(a)):
    print(a , " is a Prime number.")
else:
    print(a , " is not a Prime number.")
