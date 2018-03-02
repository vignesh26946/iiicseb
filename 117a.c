try:
	a=[]
	y=0
	max=0
	n=int(raw_input())
	while(y!=n):
		b=int(raw_input())
		a.append(b)
		y=y+1
	for i in range(0,n):
		if(max<a[i]):
			max=a[i]
	print max		
except:
	print("invalid")
