def small2(l,k):
	l.sort()
	return l[s-1]
def main():
	try:
		n=int(input())
		s=int(input())
		l=[]
		for i in range(n):
			l.append(int(input()))
		print(small2(l,s))
	except:
		print('invalid')
main()
