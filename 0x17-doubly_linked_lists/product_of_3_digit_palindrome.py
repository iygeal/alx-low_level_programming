#!/usr/bin/python3
biggest_palindrome = 0  # Initialize variable to store the largest palindrome

# Loop through the range of 3-digit numbers in reverse order
for first_number in range(999, 99, -1):
    for second_number in range(999, 99, -1):
        result = first_number * second_number  # Calculate the product of two numbers
        result_str = str(result)  # Convert the result to a string for palindrome check

        # Check if the result is a palindrome
        if result_str == result_str[::-1]:
            result = int(result_str)  # Convert the palindrome back to an integer

            # Update the variable if a larger palindrome is found
            if result > biggest_palindrome:
                biggest_palindrome = result

# Print the largest palindrome made from the product of two 3-digit numbers
print(biggest_palindrome)

