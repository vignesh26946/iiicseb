def lastjump(l,n):
	s=0
	while s<n:
		s+=l[i]
		try:
			if s==l[s]:
				return True
		except:
			return False
      
def main():
	l=[]
	n=int(input())
	for s in range(n):
		l.append(int(input()))
	print(lastjump(l,n))

main()
