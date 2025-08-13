import itertools
def main():
    s, k = input().split()
    k = int(k)
    s = sorted(s)
    a = itertools.permutations(s, len(s))
    for i in a:
        print(''.join(i), end=' ')
    print()
    # for i in a:
    #     if(k==1):
    #         print(''.join(i))
    #     k-=1
if __name__ == "__main__":
    main()