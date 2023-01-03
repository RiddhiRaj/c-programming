# Create a module to check if a passed string is a palindrome or not. Write a program to find whether a string is a palindrome or not using this module

import palindrome


string = input("Enter a string: ")
if palindrome.is_palindrome(string):
    print("The string is a palindrome")
else:
    print("The string is not a palindrome")
