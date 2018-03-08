try:
	s1=str(raw_input())
	s2=str(raw_input())
	a=[]
	b=[]
	d=[]
	c=0
	n=len(s1)
	for s in range(0,n):
		if s1[s] in a :
			b.append(s)
			c=s
		else:
			a.append(s1[s])
	for s in range(0,n):
		if(s1[s]==s1[c]):
			d.append(s)
		else: 
			pass
	x=len(d)-1
	while(x!=0):
		i=d[x]
		j=d[x-1]
		if (s2[i]==s2[j]):
			print "true"
		else:
			print "false"
		x=x-1
except:
	print "Invalid"
