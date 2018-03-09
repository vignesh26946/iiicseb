 def ip(string):
	c=0
	r=[]
	l=list(string)
	for s in range(len(l)):
		if c==3:
			c=0
			r.append('.')
		r.append(l[s])
		c+=1
	return(''.join(r))
	
 def f():
	fin=[]
	st=input('Enter your address:\n')
	str=list(st)
	str.insert(3,".")
	str.insert(7,".")
	str.insert(10,".")
	fin.append( (''.join(str)))
	fin.append(ip(st))
	print(fin)
	
f()
