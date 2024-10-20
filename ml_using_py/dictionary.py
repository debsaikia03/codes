#dictionary -> collection of heterogeneous type of data similar to tuple but it is mutable, unindexed & also key value is unique only use {}

a={
    "name": "qwerty",
    "age": 12,
    "subject": ["python","ML","DS"]
}

print(a)
print(type(a))

print(a["name"])

print(a.get("country","not found")) # get function helps to return other values if key value not found

a["country"]="India" #adding another element
a["age"]=32  #updating an existing element
print(a)

a.pop("name") #deletes the corresponding element
# or del a["name"] 
print(a)

a.popitem() #deletes the last element
print(a)

a.clear() #deletes the whole dictionary


a={
    "name": "qwerty",
    "age": 12,
    "subject": ["python","ML","DS"],
    "country": "India"
}

print("\n")
print(a.keys())  #prints the keys
print(a.values()) #prints the values
print(a.items()) #prints the whole as groups

a.update({               #can update old elements or insert new elements
    "name": "asdfgh",
    "rollno": 2309,
    "grade": "A"
})
print(a)
print("\n------------------------------------")

#nested dictionary

company={
    "e1":{
        "name": "aaa",
        "eid": 112
    },
    "e2":{
        "name":"bbb",
        "eid":116
    }
}

print(company)
print(type(company))
print(company["e1"]["name"])
print(company.get("e2")["eid"])
print(company.get("e2").get("eid"))

#another method of creating nested dictionary

e1={
        "name": "aaa",
        "eid": 112
    }

e2={
        "name":"bbb",
        "eid":116
    }

print(e1)
print(e2)

e={         #merging two dictionaries
    1:e1,
    2:e2
}

print(e)
print(e[1])
print(e[2]["name"])

#using constructor

a=dict(name="aaa",age=12)
print(a)
