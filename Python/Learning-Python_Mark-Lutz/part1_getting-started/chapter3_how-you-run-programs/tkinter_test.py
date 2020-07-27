import tkinter as tk

my_window = tk.Tk()
my_canvas = tk.Canvas(my_window, width=200, height=200, background="blue")
my_canvas.grid(row=0, column=0)
my_window.mainloop()