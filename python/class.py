class Student():
    def __init__(self,id,name):
        self.id=id
        self.name=name
    def getId(self):
        return self.id
    def getName(self):
        return self.name
    def print(self):
        return "id is {} name is {}".format(self.id,self.name)
    def __lt__(self,other):
        if self.id < other.id :
            return 1
        
if __name__=="__main__":
    s1=Student(2,"sahil")
    s2=Student(3,"amit")
    s3=Student(4,"gourav")
    a=[s1,s2,s3]
    for i in a:
        print(i.print())
    a.sort()
    for i in a:
        print(i.print())
    
