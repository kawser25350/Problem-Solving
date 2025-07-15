def min_operations(test_cases):
    results = []
    for case in test_cases:
        n, k, a = case
        # Initialize DP table
        dp = [{} for _ in range(n + 1)]
        dp[0][1] = 0  # Base case: product of 0 elements is 1

        for i in range(1, n + 1):
            num = a[i - 1]
            for r_prev in dp[i - 1]:
                # Option 1: Do not perform any operation on a[i-1]
                r_new = (r_prev * num) % k
                if r_new not in dp[i] or dp[i][r_new] > dp[i - 1][r_prev]:
                    dp[i][r_new] = dp[i - 1][r_prev]

                # Option 2: Perform an operation on a[i-1] (increment by 1)
                r_new = (r_prev * (num + 1)) % k
                if r_new not in dp[i] or dp[i][r_new] > dp[i - 1][r_prev] + 1:
                    dp[i][r_new] = dp[i - 1][r_prev] + 1

        # The answer is the minimum operations to achieve r = 0
        if 0 in dp[n]:
            results.append(dp[n][0])
        else:
            # If no solution is found, return a large number (though the problem guarantees a solution)
            results.append(float('inf'))
    return results


# Input parsing
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    test_cases = []
    for _ in range(t):
        n = int(data[idx])
        k = int(data[idx + 1])
        idx += 2
        a = list(map(int, data[idx:idx + n]))
        idx += n
        test_cases.append((n, k, a))

    # Compute results
    results = min_operations(test_cases)

    # Output results
    for res in results:
        print(res)


if __name__ == "__main__":
    main()
