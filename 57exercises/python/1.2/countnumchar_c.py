import tkinter as tk
from tkinter import messagebox

class CountNumCharApp:
    def __init__(self, root):
        self.root = tk.Tk()
        self.entry = tk.Entry(root)
        self.button = tk.Button(root, text="Submit", command=self.show_input)

        self.entry.pack()
        self.button.pack()

    def show_input(self):
        user_input = self.entry.get()
        if user_input == "" or user_input == None:
            messagebox.showinfo("Error", "Please enter a valid input.")
        else:
            messagebox.showinfo("Result", f"{user_input} has {len(user_input)} characters.")

def main():
    root = tk.Tk()
    app = CountNumCharApp(root)
    root.mainloop()

if __name__ == "__main__":
    main()