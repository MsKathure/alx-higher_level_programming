#!/usr/bin/python3

# Check if the script is being run as the main program
if __name__ == "__main__":
    # Import the 'add', 'sub', 'mul', and 'div' functions from the 'calculator_1' module
    from calculator_1 import add, sub, mul, div

    # Assign values to variables 'a' and 'b'
    a = 10
    b = 5

    # Print the sum of 'a' and 'b' using the 'add' function
    print("{} + {} = {}".format(a, b, add(a, b)))

    # Print the difference of 'a' and 'b' using the 'sub' function
    print("{} - {} = {}".format(a, b, sub(a, b)))

    # Print the product of 'a' and 'b' using the 'mul' function
    print("{} * {} = {}".format(a, b, mul(a, b)))

    # Print the quotient of 'a' and 'b' using the 'div' function
    print("{} / {} = {}".format(a, b, div(a, b)))
