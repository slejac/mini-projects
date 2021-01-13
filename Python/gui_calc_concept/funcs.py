import tkinter as tk

def cls_click(event):
    print("Finish This Portion!")

def add_click(event):
    print("Finish This Portion!")

def sub_click(event):
    print("Finish This Portion!")

def multi_click(event):
    print("Finish This Portion!")

def div_click(event):
    print("Finish This Portion!")
    
def eq_click(event):
    print("Finish This Portion!")

def seven_click(event):
    print("Finish This Portion!")
    
def four_click(event):
    print("Finish This Portion!")
    
def one_click(event):
    print("Finish This Portion!")
    
def dec_click(event):
    print("Finish This Portion!")
    
def eight_click(event):
    print("Finish This Portion!")
    
def five_click(event):
    print("Finish This Portion!")
    
def two_click(event):
    print("Finish This Portion!")
    
def neg_click(event):
    print("Finish This Portion!")
    
def nine_click(event):
    print("Finish This Portion!")
    
def six_click(event):
    print("Finish This Portion!")

def three_click(event):
    print("Finish This Portion!")

def zero_click(event):
    print("Finish This Portion!")
    
def Initialization():
    clear = tk.Button(text="Clear", width = 9, height = 3, fg = "black",
                    bg = "white",)
    clear.place(x=0, y=0)
    clear.bind("<Button-1>", cls_click)
    results = tk.Button(text="", width = 20, height = 3, fg = "black",
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
    multiply = tk.Button(text="x", width = 9, height = 3, fg = "white",
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
    seven.place(x=150, y=50)
    seven.bind("<Button-1>", seven_click)
    four = tk.Button(text="4", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    four.place(x=150, y=100)
    four.bind("<Button-1>", four_click)
    one = tk.Button(text="1", width = 9, height = 3, fg = "white",
                    bg = "grey",)
    one.place(x=150, y=150)
    one.bind("<Button-1>", one_click)
    dec = tk.Button(text=".", width = 9, height = 3, fg = "black",
                    bg = "grey",)
    dec.place(x=150, y=200)
    dec.bind("<Button-1>", dec_click)
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
    neg = tk.Button(text="+/-", width = 9, height = 3, fg = "black",
                    bg = "grey",)
    neg.place(x=75, y=200)
    neg.bind("<Button-1>", neg_click)
    nine = tk.Button(text="9", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    nine.place(x=0, y=50)
    nine.bind("<Button-1>", nine_click)
    six = tk.Button(text="6", width = 9, height = 3, fg = "white",
                    bg = "grey",)
    six.place(x=0, y=100)
    six.bind("<Button-1>", six_click)
    three = tk.Button(text="3", width = 9, height = 3, fg = "white",
                      bg = "grey",)
    three.place(x=0, y=150)
    three.bind("<Button-1>", three_click)
    zero = tk.Button(text="0", width = 9, height = 3, fg = "white",
                     bg = "grey",)
    zero.place(x=0, y=200)
    zero.bind("<Button-1>", zero_click)