def test(*ar,**kwarg):
    for i in ar:
        print(i,end=" ")
    print()
    for i,j in kwarg.items():
        print(f'{i} : {j}')

test(1,2,3,4,5,name="ravi",id=123)
b =10
dictionary = {'a':"ravi",b:"holla"}
for i in dictionary:
    print(f'{i}:{dictionary[i]}')

