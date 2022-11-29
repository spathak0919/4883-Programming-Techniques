closing_brackets = {"]": "[", ")": "("}
cases = int(input())
counter = 0

for _ in range(cases):
    parentheses = input()

    if len(parentheses) == 0:
        print("Yes")
        continue

    if len(parentheses) % 2 != 0:
        print("No")
        continue

    stack = []
    flag = 0

 # when an open parentheses is encountered push it in the stack, and when closed parenthesis is  
 # encountered, match it with the top of stack and pop it.   
 # Function to check parentheses
  
    for bracket in parentheses:
        if bracket not in closing_brackets:
            stack.append(bracket)
        elif stack and bracket in closing_brackets and closing_brackets[bracket] == stack[-1]:
            stack.pop()
        else:
            flag = 1

    if flag == 1 or len(stack) >= 1:
        print("No")
    else:
        print("Yes")
