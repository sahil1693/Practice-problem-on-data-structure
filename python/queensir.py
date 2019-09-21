def valid_move(chess,col,i)
    c=1
    for i in range(col,-1,-1):
        if hcess[i]==row:
            return False
        if chess[i] == row-c:
            return False
        if chess[i] == row +c:
            return False
        c=c+1
    return True    

def solve(chess,col,size):
    if col == size:
        return True
    for i in range(size):
        if valid_move(chess,col,i):
            chess[col]=i
            if solve(chess,col+1,size):
                return True
    chess[col]=None
    return False
def solve_nqueen(size):
    chrdd=[None]
    size = int(input("enter a number"))
    chess = [None]*size
    
    if solve(chess)
        print("Solved")
        print(chess)
    else:
        print("no solution")
        
if __name__ == '__main__':
    assert solve_nqueen(3) == False
    assert solve_nqueen(4) == False
    chess=[None]*4
    solve(chess,0,4)
    
        
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0
