def sumdigsqr(a):
	sum=0
	while(a!=0):
		r=a%10
		sum+=r*r
		a//=10
	return sum
def happy(n):
	while(a>0):
		a=sumdigsqr(a)
		if a==1:
			print('happy number')
			return
	print('not happy number')
def main():
	try:
		n=int(input())
		happy(a)
	except:
		print('invalid')
main()
