def CheakPrime(iNo):
    bFlag=True
    for i in range(2,int(iNo/2)):
        if(iNo%i)==0:
            bFlag=False
            break
    return bFlag

iVal=int(input("Enter the Number:"))
iRes=CheakPrime(iVal)
if(iRes==True):
    print(f"{iVal} Number is prime")
else:
    print(f"{iVal} Number is not prime")