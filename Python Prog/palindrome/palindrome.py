# palindrome module code

def is_palindrome(string):
    """Return True if the passed string is a palindrome, False otherwise"""
    return string == string[::-1]

# # hello.py code

# import palindrome

# def main():
#     string = input("Enter a string: ")
#     if palindrome.is_palindrome(string):
#         print("The string is a palindrome")
#     else:
#         print("The string is not a palindrome")

# if __name__ == "__main__":
#     main()
    