a={
    "name": "qwerty",
    "age": 12,
    "subject": ["python","ML","DS"]
}

print(a)
print(type(a))

print(a["name"])

print(a.get("name"))

del a['subject']
print(a)

a.clear()
print(a)
