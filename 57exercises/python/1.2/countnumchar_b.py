def main():
    print(f"What is the input string?")
    user_input = input()
    while user_input == "":
        print("Please enter a valid input.")
        user_input = input()
    print(f"{user_input} has {len(user_input)} characters.")

if __name__ == "__main__":
    main()