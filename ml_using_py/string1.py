main_string = "abbbabbccdeeffaabba"
substring = "ab"

start = 0
end = len(main_string)

# Find the first occurrence of the substring in the main string
while start < end:

    pos = main_string.find(substring, start, end)

    if pos == -1:
        break
    
    print(f"Substring '{substring}' found at position: {pos}")

    start = pos + 1

# Count the occurrences of the substring in the main string
count = main_string.count(substring)
print(f"Total occurrences of '{substring}' in '{main_string}' is: {count}")

# Reverse the main string
reversed_string = main_string[::-1]
print(f"Reversed string: {reversed_string}")

# Split the main string into a list of substrings
s = "23-08-1997"
l = s.split("-")

print(l)

for i in l:
    print(i)

# Join the list of substrings into a single string
s = "-".join(l)
print(s)

t = ["sunny", "rainy", "cloudy", "windy"]
w = "-".join(t)
print(w)



#seperate alphabets and numbers, sort and then join them

a = "a32dvs38vcfsdg3297eugfce73yug3r879"

# Separate alphabetic and numeric characters using loops
alphabets = []
numbers = []

for char in a:

    if char.isalpha():
        alphabets.append(char)

    elif char.isdigit():
        numbers.append(char)

# Sort the lists
alphabets.sort()
numbers.sort()

# Combine the sorted alphabets and numbers
sorted_string = ''.join(alphabets) + ''.join(numbers)
print(sorted_string)


#input: a3b3c2
#output: aaabbbcc
input_string = "a4b2c5"
output_string = ""

i = 0
while i < len(input_string):
    char = input_string[i]
    num = int(input_string[i + 1])
    output_string += char * num
    i += 2

print(output_string)


#input: "python is very easy"
#output: "easy very is python"
input_string = "python is very easy"

# Split the string into words
words = input_string.split()

# Reverse the list of words
reversed_words = words[::-1]

# Join the reversed list of words into a single string
output_string = ' '.join(reversed_words)

print(output_string)

#input: python is very easy
#output: nohtyp si yrev ysae
input_string = "python is very easy"

# Split the string into words
words = input_string.split()

# Reverse each word using a loop
reversed_words = []

for word in words:
    reversed_words.append(word[::-1])

# Join the reversed words back into a single string
output_string = ' '.join(reversed_words)

print(output_string)

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

#input: ABCDAABBCDEFFGG
#output: ABCDEFG

def remove_duplicates(s):
    result = ""
    seen = set()  # To keep track of already seen characters
    for char in s:
        if char not in seen:
            result += char  # Add the character to the result if not seen
            seen.add(char)  # Mark the character as seen
    return result

# Input
input_string = "ABCDAABBCDEFFGG"
# Output
output_string = remove_duplicates(input_string)
print(output_string)  # Output: ABCDEFG


#input: AABBCCDEABCD
#output: A=3, B=3, C=3, D=2, E=1

def character_frequency(s):
    frequency = {}  # Dictionary to store character counts
    for char in s:
        frequency[char] = frequency.get(char, 0) + 1  # Increment count for each character

    # Generate the formatted output string
    result = ", ".join(f"{char}={count}" for char, count in frequency.items())
    return result

# Input
input_string = "AABBCCDEABCD"
# Output
output_string = character_frequency(input_string)
print(output_string)  # Output: A=3, B=3, C=3, D=2, E=1



#input: "abhi"
#input: "raj"
#output: "abhi raj"

def concatenate_strings(str1, str2):
    return str1 + " " + str2

# Input
string1 = "abhi"
string2 = "raj"

# Output
result = concatenate_strings(string1, string2)
print(result)  # Output: "abhi raj"
