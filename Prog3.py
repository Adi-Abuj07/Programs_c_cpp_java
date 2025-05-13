def Findfact(iNo):
    for i in range(1,int(iNo/2)+1):
        if iNo%i==0:
            print(i)

iVal=int(input("Enter the Number:"))
iRes=Findfact(iVal)

    
    
