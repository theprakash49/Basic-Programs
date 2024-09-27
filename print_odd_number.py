
# wap to print odd numbers from 1 to 13
def main():
    n = int(input("enter a number : "))
    i = 1
    while(i <= n):
        if(i % 2 == 0):
            i = i + 1
            continue
        print(i,end=" ")
        i = i + 1
    print()
    return
main()