amount = int(input("Enter the amount to withdraw (in hundreds): "))

# Notes count
hundreds=amount//100
amount %=100
fifties=amount//50
amount%=50
tens=amount//10
amount%=10

print("100 Rs notes:",hundreds)
print("50 Rs notes :",fifties)
print("10 Rs notes :",tens)