try:
	s=str(raw_input())
	b=len(s)
	tot=0
	avg=0
	sum=0
	for i in range (0,b):
		c=ord(s[i])
		sum=sum+c
		avg=sum/b
	print chr(avg)
except:
  	print('invalid')
