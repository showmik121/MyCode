def maxSubArray(nums):
    max_sum = nums[0]
    current_sum = 0

    for num in nums:
        current_sum += num
        max_sum = max(max_sum, current_sum)

        if current_sum < 0:
            current_sum = 0

    return max_sum

def main():
    nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    result = maxSubArray(nums)
    print("Maximum subarray sum is:", result)

if __name__ == "__main__":
    main()
