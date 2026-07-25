n = int(input())
nums = list(map(int, input().split()))
nums.sort(reverse=True)
totsum = sum(nums)
me = []
for i in range(len(nums)):
    me.append(nums[i])
    if sum(me) > totsum - sum(me):
        break
print(len(me))
