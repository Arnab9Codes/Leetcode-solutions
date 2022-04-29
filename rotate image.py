# https://leetcode.com/problems/rotate-image/

class solution:
    def __init__(self):
        None

    def rotate(self,matrix):
        N = len(matrix)
        # swapping individually each positions
        
        for r in range(N // 2):
            for c in range(r, N - 1 - r):
                matrix[r][c], matrix[c][N - 1 - r] = matrix[c][N - 1 - r], matrix[r][c]
                matrix[r][c], matrix[N - 1 - r][N - 1 - c] = matrix[N - 1 - r][N - 1 - c], matrix[r][c]
                matrix[r][c], matrix[N - 1 - c][r] = matrix[N - 1 - c][r], matrix[r][c]

        return matrix

def main():

    im=[[5,1,9,11],
        [2,4,8,10],
        [13,3,6,7],
        [15,14,12,16]]
    s=solution()
    print(s.rotate(im))

if __name__=="__main__":
    main()
