# O(n/2) em C
def ehPalindromo(n):
    return n == n[::-1]

# O(n/2) em python
def isPalindrome(n):
    for i in range(len(n) // 2):
        if n[i] != n[-(i + 1)]:
            return False
        
    return True

print(isPalindrome("racecar"))  # True
print(isPalindrome("hello"))    # False
print(isPalindrome("cooc"))