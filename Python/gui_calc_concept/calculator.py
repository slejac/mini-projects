import tkinter as tk
from funcs import Initialization

window = tk.Tk("Calculator")
window.title("Two-Operation Calculator")
window.geometry("300x250")
Initialization()
first = tk.Entry()
first_val = first.get()
first.pack()
window.mainloop()