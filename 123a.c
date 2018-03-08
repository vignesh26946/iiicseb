try:
	rom=str(raw_input())
	s=0
	k=0
	a=[]
	while(s<len(rom)):
		if(rom[s]=='I'):
			a.append(1)
		elif(rom[s]=='X'):
			a.append(10)
		elif(rom[s]=='L'):
			a.append(50)
		elif(rom[s]=='C'):
			a.append(100)
		elif(rom[s]=='D'):
			a.append(500)
		elif(rom[s]=='M'):
			a.append(1000)
		else:
			a.append(0)
			break
		s=s+1
	j=len(a)-1
	i=len(a)-1
	k=a[j]
	while(s>0):
		if(a[s]!=0):
			while(j>0):
				if(a[j]==a[j-1] or a[j]<a[j-1]):
					k=k+a[j-1]
				elif(a[j]>a[j-1]):
					k=k-a[j-1]
				else:
					pass
				j=j-1
			print k	
		else:
			print "Invalid"
			break
		s=s-1	
except:
	print "Invalid"
