

N, M = map(int,raw_input().split())

ans = [0] * N
nxt = range(2,N+2)

for m in range(M) :

	l, r, x = map(int,raw_input().split())

	cur = l
	while cur <= r :
		if ans[cur-1] == 0 and cur != x : ans[cur-1] = x

		nx = nxt[cur-1]
		nxt[cur-1] = x if cur < x else r+1
		cur = nx

for i in ans : print i,
print ""

