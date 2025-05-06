import sys
input=sys.stdin.readline
k=int(input())
for _ in [0]*int(input()):m,n=map(int,input().split());print(0 if 2*m-n>k+2 or 2*n-m>k+1 else 1)