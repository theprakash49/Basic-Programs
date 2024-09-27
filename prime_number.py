
# wap to check if a number is prime or not
def main():
    n = int(input("enter a number : "))
    flag = True # ture means prime
    i = 2
    while(i <= n - 1):
        if(n % i == 0):
            flag = False # false means composite
            break
        i = i + 1
    if(n == 1):
        print(1,"is neither prime or composite!")
    elif(flag == True):
        print(n,"prime number")
    else:
        print(n,"is composite number!")
    return
main()