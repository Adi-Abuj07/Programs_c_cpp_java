def CheackPerfect(iNo):
    iSum=1
    for i in range(2,int(iNo/2)+1):
        if iNo%i==0:
            iSum=iSum+i
    if iSum==iNo:
        return True
    else:
        return False

iVal=int(input("Enter the Number:"))
iRes=CheackPerfect(iVal)
if(iRes==True):
    print(f"{iVal} it is Perfect Number ")
else:
    print(f"{iVal} is not a Perfect Number ")