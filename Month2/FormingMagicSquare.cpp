int formingMagicSquare(vector<vector<int>> s) {
    
    /*
    
The 8 valid combinations of 3 numbers that add to 15 are:

9 5 1
7 5 3
2 5 8
4 5 6
2 9 4
6 1 8
6 7 2
8 3 4
All 8 of those combinations need to appear in the square as a row, column or diagonal. The centre cell must appear in the middle row, middle column and both diagonals. So it must be a number that appears four times, and the only digit that does is 5. So 5 must be the centre.

Similarly, each of the corner pieces must form part of a row, a column and a diagonal. So each corner cell must be a number that appears 3 times. Those are the even numbers 2, 4, 6 and 8. That means the diagonals must be "2 5 8" and "4 5 6"

2 _ 4
_ 5 _
6 _ 8
That leaves the middle edge cells, each of which needs to appear in a row and a column. These are the odd numbers 1, 3, 7 and 9. So the middle row and column must be "9 5 1" and "7 5 3". Just insert these into the above such that the rows and columns add up correctly, leaving you with:

2 9 4
7 5 3
6 1 8
From that you can take the mirror images (horizontally and vertically) and the rotation of each.

Mirror images:

4 9 2 | 2 9 4
3 5 7 | 7 5 3
8 1 6 | 6 1 8
-------------
8 1 6 | 6 1 8
3 5 7 | 7 5 3
4 9 2 | 2 9 4
Rotations:

8 3 4 | 4 3 8
1 5 9 | 9 5 1
6 7 2 | 2 7 6
-------------
6 7 2 | 2 7 6
1 5 9 | 9 5 1
8 3 4 | 4 3 8
                by Lachy
    */
    
    int result=99;
    int diff=0;
    int magic=15;//because we must use 1-9 for 3*3 matrix => 1-9 total sum=45 => magic=15
    //The middle num=5 of each arrays, each part=15, then the solutions which satisfy are below.
    vector<vector<vector<int>>> pre_solutions = {
                                                 {{6,7,2},{1,5,9},{8,3,4}},
                                                 {{8,3,4},{1,5,9},{6,7,2}},
                                                 {{4,3,8},{9,5,1},{2,7,6}},
                                                 {{2,7,6},{9,5,1},{4,3,8}},
                                                 {{6,1,8},{7,5,3},{2,9,4}},
                                                 {{8,1,6},{3,5,7},{4,9,2}},
                                                 {{2,9,4},{7,5,3},{6,1,8}},
                                                 {{4,9,2},{3,5,7},{8,1,6}},
                                                };
    for(int k=0;k<8;k++){
        diff=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            diff+=abs(pre_solutions[k][i][j]-s[i][j]);      
            } 
        }
        if(diff<result)
            result=diff;
    }                                            
    
    return result;
}
