#include <stdio.h>

#include <string.h>

void longestCommonSubsequence(const char* A, const char* B, int m, int n) {

    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; ++i) {

        for (int j = 0; j <= n; ++j) {

            if (i == 0 || j == 0)

                dp[i][j] = 0;

            else if (A[i - 1] == B[j - 1])

                dp[i][j] = dp[i - 1][j - 1] + 1;

            else

                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];

        }

    }

    int length = dp[m][n];

    char lcs[length + 1];

    lcs[length] = '\0';

    int i = m, j = n;

    while (i > 0 && j > 0) {

        if (A[i - 1] == B[j - 1]) {

            lcs[length - 1] = A[i - 1];

            --i;

            --j;

            --length;

        } else if (dp[i - 1][j] > dp[i][j - 1]) {

            --i;

        } else {

            --j;

        }

    }

    printf("Length of the Longest Common Subsequence: %d\n", dp[m][n]);

    printf("Longest Common Subsequence: %s\n", lcs);

}

int main() {

    const char* A = "I love Bangladesh";

    const char* B = "Bhutan is Beautiful";

    int m = strlen(A);

    int n = strlen(B);

    longestCommonSubsequence(A, B, m, n);

    return 0;

}
