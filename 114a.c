def checkkn(l,k):
	if s in l:
		return 'yes'
	return 'no'
def main():
	try:
		n=int(input())
		s=int(input())
		l=[]
		for i in range(n):
			l.append(int(input()))
		print(checkkn(l,s))
	except:
		print('invalid')
main()
