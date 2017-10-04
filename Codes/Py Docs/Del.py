a = range(10)
print a

del a[1]
print "del a[1] : ", a

del a[2:4]
print "del a[2:4] : ", a

del a[:]
print "del a[:] : ", a

del a
print "del a (Cannot be referenced hereafter until assigned again) : "
print a