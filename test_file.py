# Random Python Code for Testing a Python Parser

import random
import string
import math
from datetime import datetime

# Generate a random string of a given length
def random_string(length):
    letters = string.ascii_letters
    return ''.join(random.choice(letters) for i in length)

# Calculate factorial of a number
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Check if a number is prime
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

# Generate a list of first n Fibonacci numbers
def fibonacci(n):
    fib = [0, 1]
    for i in range(2, n):
        fib.append(fib[-1] + fib[-2])
    return fib

# Find the greatest common divisor of two numbers
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Sort a list of numbers using bubble sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

# Generate a random list of numbers
def random_numbers(length, start, end):
    return [random.randint(start, end) for _ in range(length)]

# Main function to execute the random functionalities
def main():
    print("Random String of length 10:", random_string(10))

    num = 5
    print(f"Factorial of {num}:", factorial(num))

    num = 29
    print(f"Is {num} a prime number?", is_prime(num))

    num = 10
    print(f"First {num} Fibonacci numbers:", fibonacci(num))

    a, b = 48, 18
    print(f"GCD of {a} and {b}:", gcd(a, b))

    arr = random_numbers(10, 1, 100)
    print("Unsorted List:", arr)
    print("Sorted List:", bubble_sort(arr))

    # Print current date and time
    now = datetime.now()
    print("Current date and time:", now.strftime("%Y-%m-%d %H:%M:%S"))

# Run the main function
if __name__ == "__main__":
    main()

