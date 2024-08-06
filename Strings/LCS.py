
def lsc(s:str)->int:
    l = [0]*len(s)
    i=0
    j=1
    l[0]=0
    while j < len(s):

        if s[i] == s[j]:
            l[j] = i+1 
            i+=1
            j+=1

        else:
            if i != 0 :
                i = l[i-1] 
            else:
                l[j] = 0
                j+=1

    return l


string = input("Enter the string: ")
lc= lsc(s=string)
print(lc)