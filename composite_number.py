
# wap to check wether a number is composite or not
def main():
    n = int(input("enter a number : "))
    i = 2
    while(i <= n - 1):
        if(n % i == 0):
            print(n,"is composite number")
            break
        i = i + 1
    else:
        print(n,"is not composite!")
    return
main()