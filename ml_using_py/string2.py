#input: a4k3b2
#output: aeknbd
f = "a4k3b2"
g = ""

i = 0
while i < len(f):
    char = f[i]
    num = int(f[i + 1])
    
    # Calculate the new character by shifting the current character by num positions
    new_char = chr(ord(char) + num)
    g += new_char
    i += 2

print(g)