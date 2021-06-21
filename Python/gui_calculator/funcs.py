import tkinter as tk

integer1 = 0
int1stream = ""
integer2 = 0
int2stream = ""
operation = 0

def cls_click(event):
    global int1stream, int2stream, operation
    int1stream = ""
    int2stream = ""
    operation = 0
    Initialization("")

def add_click(event):
    global operation
    if int1stream == "":
        results = switch(operation)
        Initialization(results)
    elif int1stream == "Overwritten":
        Initialization("")
        operation = 1
    else:
        global integer1
        operation = 1
        integer1 = int(int1stream)
        Initialization("")

def sub_click(event):
    global operation
    if int1stream == "":
        results = switch(operation)
        Initialization(results)
    elif int1stream == "Overwritten":
        Initialization("")
        operation = 2
    else:
        global integer1
        operation = 2
        integer1 = int(int1stream)
        Initialization("")

def multi_click(event):
    global operation
    if int1stream == "":
        results = switch(operation)
        Initialization(results)
    elif int1stream == "Overwritten":
        Initialization("")
        operation = 3
    else:
        global integer1
        operation = 3
        integer1 = int(int1stream)
        Initialization("")

def div_click(event):
    global operation
    if int1stream == "":
        results = switch(operation)
        Initialization(results)
    elif int1stream == "Overwritten":
        Initialization("")
        operation = 4
    else:
        global integer1
        operation = 4
        integer1 = int(int1stream)
        Initialization("")
    
def eq_click(event):
    global int2stream
    if int2stream == "":
        results = switch(operation)
        Initialization(results)
    else: 
        global integer1, integer2, int1stream
        integer2 = int(int2stream)
        results = switch(operation)
        Initialization(results)
        int1stream = "Overwritten"
        integer1 = results
        int2stream = ""

def seven_click(event):
    if operation == 0:
        global int1stream
        int1stream += "7"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "7"
        Initialization(int2stream)
    
def four_click(event):
    if operation == 0:
        global int1stream
        int1stream += "4"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "4"
        Initialization(int2stream)
    
def one_click(event):
    if operation == 0:
        global int1stream
        int1stream += "1"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "1"
        Initialization(int2stream)
    
def eight_click(event):
    if operation == 0:
        global int1stream
        int1stream += "8"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "8"
        Initialization(int2stream)
    
def five_click(event):
    if operation == 0:
        global int1stream
        int1stream += "5"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "5"
        Initialization(int2stream)
    
def two_click(event):
    if operation == 0:
        global int1stream
        int1stream += "2"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "2"
        Initialization(int2stream)
    
def nine_click(event):
    if operation == 0:
        global int1stream
        int1stream += "9"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "9"
        Initialization(int2stream)
    
def six_click(event):
    if operation == 0:
        global int1stream
        int1stream += "6"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "6"
        Initialization(int2stream)

def three_click(event):
    if operation == 0:
        global int1stream
        int1stream += "3"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "3"
        Initialization(int2stream)

def zero_click(event):
    if operation == 0:
        global int1stream
        int1stream += "0"
        Initialization(int1stream)
    else:
        global int2stream
        int2stream += "0"
        Initialization(int2stream)
        
def switch(ops):
    if int1stream == "" or int2stream == "" or ops == 0:
        return "Error, invalid input"
    elif ops == 1:
        return integer1 + integer2
    elif ops == 2:
        return integer1 - integer2
    elif ops == 3:
        return integer1 * integer2
    elif ops == 4: 
        return integer1 / integer2
    
def Initialization(val = ""):
    clear = tk.Button(text="Clear", width = 9, height = 3, fg = "black",
                    bg = "white",)
    clear.place(x=0, y=0)
    clear.bind("<Button-1>", cls_click)
    results = tk.Button(text=val, width = 20, height = 3, fg = "black",
                    bg = "white",)
    results.place(x=75, y=0)
    add = tk.Button(text="+", width = 9, height = 3, fg = "white",
                    bg = "red",)
    add.place(x=225, y=0)
    add.bind("<Button-1>", add_click)
    subtract = tk.Button(text="-", width = 9, height = 3, fg = "white",
                         bg = "blue",)
    subtract.place(x=225, y=50)
    subtract.bind("<Button-1>", sub_click)
    multiply = tk.Button(text="x", width = 9, height = 3, fg = "black",
                         bg = "yellow",)
    multiply.place(x=225, y=100)
    multiply.bind("<Button-1>", multi_click)
    divide = tk.Button(text="/", width = 9, height = 3, fg = "white",
                       bg = "green",)
    divide.place(x=225, y=150)
    divide.bind("<Button-1>", div_click)
    equals = tk.Button(text="=", width = 9, height = 3, fg = "white",
                       bg = "black",)
    equals.place(x=225, y=200)
    equals.bind("<Button-1>", eq_click)
    seven = tk.Button(text="7", width = 9, height = 3, fg = "white",
                      bg = "grey",)
    seven.place(x=0, y=50)
    seven.bind("<Button-1>", seven_click)
    four = tk.Button(text="4", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    four.place(x=0, y=100)
    four.bind("<Button-1>", four_click)
    one = tk.Button(text="1", width = 9, height = 3, fg = "white",
                    bg = "grey",)
    one.place(x=0, y=150)
    one.bind("<Button-1>", one_click)
    place1 = tk.Button(width = 9, height = 3, bg = "grey",)
    place1.place(x=150, y=200)
    eight = tk.Button(text="8", width = 9, height = 3, fg = "white",
                      bg = "grey",)
    eight.place(x=75, y=50)
    eight.bind("<Button-1>", eight_click)
    five = tk.Button(text="5", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    five.place(x=75, y=100)
    five.bind("<Button-1>", five_click)
    two = tk.Button(text="2", width = 9, height = 3, fg = "white",
                    bg = "grey",)
    two.place(x=75, y=150)
    two.bind("<Button-1>", two_click)
    zero = tk.Button(text="0", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    zero.place(x=75, y=200)
    zero.bind("<Button-1>", zero_click)
    nine = tk.Button(text="9", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    nine.place(x=150, y=50)
    nine.bind("<Button-1>", nine_click)
    six = tk.Button(text="6", width = 9, height = 3, fg = "white",
                    bg = "grey",)
    six.place(x=150, y=100)
    six.bind("<Button-1>", six_click)
    three = tk.Button(text="3", width = 9, height = 3, fg = "white",
                      bg = "grey",)
    three.place(x=150, y=150)
    three.bind("<Button-1>", three_click)
    place2 = tk.Button(width = 9, height = 3, bg = "grey",)
    place2.place(x=0, y=200)