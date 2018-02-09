a=input()
def pal(x):
	a=x[::-1]
	return a
x=pal(a)
if a.isalpha():
	if(x==a):
		print("YES a Palindrome")
	else:
		print("Not a palindrome")
else:
print("INVALID INPUT")
