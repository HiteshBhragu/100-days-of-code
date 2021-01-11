def isPrime(a,b):
    status = 0
    for i in range(a,b+1):
        status = 0
        for num in range(2,i):   
            if(i%num == 0):
                status = -1
                break
        if(0 == status):
            print(i)
a = int(input("Enter the value of a = "))
b = int(input("Enter the value of b = "))
isPrime(a,b)
