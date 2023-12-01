#!/usr/bin/python3

# Check if the script is being run as the main program
if __name__ == "__main__":
    # Import the 'add' function from the 'add_0' module
    from add_0 import add

    # Assign values to variables 'a' and 'b'
    a = 1
    b = 2

    # Print the sum of 'a' and 'b' using the 'add' function
    print("{} + {} = {}".format(a, b, add(a, b)))
