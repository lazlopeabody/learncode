from tkinter import *
from tkinter import ttk

class CountNumCharApp:
    def __init__(self, root):
        self.root = Tk()
        self.entry = Entry(root)
        self.button = Button(root, text="Submit", command=self.show_input)

        self.entry.pack()
        self.button.pack()
        # create a more asthectically pleasing box, location on screen, and title
        self.root.geometry("300x300")
        #self.root.title("Count Number of Characters")

    def show_input(self):
        user_input = self.entry.get()
        if user_input == "" or user_input == None:
            CountNumCharApp.messagebox.showinfo("Error", "Please enter a valid input.")
        else:
            CountNumCharApp.messagebox.showinfo("Result", f"{user_input} has {len(user_input)} characters.")

    def window_placement(self):
        #Get screen h&w 
        screen_width = self.root.winfo_screenwidth()
        screen_height = self.root.winfo_screenheight()
        #specify window w & h
        window_width = 300
        window_height = 200
        #calculate position
        postion_top = int(screen_height /2 - window_height /2)
        postion_right = int(screen_width /2 - window_width /2)
        #set window size & position

        return self.root.geometry(f'{window_width}x{window_height}+{postion_right}+{postion_top}')

def main():
    root = Tk()
    app = CountNumCharApp(root)
    app.window_placement()

    root.mainloop()

if __name__ == "__main__":
    main()