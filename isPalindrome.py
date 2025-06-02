def isPalindrome(n):
    for i in range(len(n) // 2):
        if n[i] != n[-(i + 1)]:
            return False
        
    return True

print(isPalindrome("racecar"))  # True
print(isPalindrome("hello"))    # False
print(isPalindrome("cooc"))