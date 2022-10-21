f=open("temp.txt","w")
f.write("TV 45 78 89 90 \n")
f.write("Mobile 123 678 781 772\n")
f.write("Lamp 231 430 769 132\n")
f.write("Pendrive 56 57 58 59\n")
f.write("Geyser 177 609 367 235\n")
f.write("Books 145 411 224 87\n")
f.write("Bottle 207 213 71 656\n")
f.write("AC 260 459 262 653\n")
f.write("Perfume 741 756 23 458\n")
f.write("Plane 982 567 905 675\n")

f.close()

#3-a

f = open("temp.txt","r")
d = f.read()
print(d)
f.close()

#3-b

f = open("temp.txt","r")
print("Average sales of all the products is: \n")
for i in f:
    lst = i.split(" ")
    for j in lst:
        a = float(lst[1])+float(lst[2])+float(lst[3])+float(lst[4])
        x = a/4
    print(lst[0],":",x)
print("\n")
f.close()

#3-c

f = open("temp.txt","r")
sales = {}
for i in f:
    lst = i.split(" ")
    for j in lst:
        a = float(lst[1])+float(lst[2])+float(lst[3])+float(lst[4])
        sales[lst[0]]= a
    for c,d in sorted(sales.items()):
        pass
x = list(sales.items())[0]
for i in x:
    print(x[0],"has the minimum sales of: ",x[0])
    break
