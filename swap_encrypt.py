import random
s = input('Enter the string: ')
l = list(map(chr, range(97,123)))
d={}
ans = ''
for c in s:
    if c in d:
        ans += d[c]
    else:
        i = random.randint(0, len(l)-1)
        k = l.pop(i)
        d[c] = k
        ans += k
print(ans)

d_new = dict([(value, key) for key, value in d.items()])
# decypher
a = ''
for c in ans:
    if c in d_new:
        a += d_new[c]
print(a)