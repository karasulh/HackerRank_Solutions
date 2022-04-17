string misereNim(vector<int> s) {
    /*
    If player 1 starts with an xor value of zero, player 1 loses unless the piles are: [1,1], [1,1,1,       1], etc.
    If player 1 starts with an xor value other than zero, player 1 wins unless the piles are: [1], [1,      1,1], etc.
    */
    /*
    1) The last losing position of every game will have exactly one stone and one active pile. Ignoring the piles with zero, we can represent the basic losing position like this: [1].

    2) There are exactly two ways to put your opponent in this losing position:

    You have exactly one remaining pile, and the number of stones > 1 (e.g., [8]), or
    You have exactly two remaining piles, one of which has only one stone (e.g., [1,8]).
    3) The only "winning position" from (2) that has an xor value of 0 is [1,1].

    4) If player 1 starts with an xor value of zero, player 1 loses unless the piles are: [1,1], [1,1,1,1], etc.

    5) If player 1 starts with an xor value other than zero, player 1 wins unless the piles are: [1], [1,1,1], etc.

    Oberservations (4) and (5) are enough to come up with an algorithm. You can see my solution here. But why do (4) and (5) hold?

    I'll ignore the cases where each pile has one stone, since those cases are easy.

    Let's suppose player p has an xor value of zero.

    a) Every time p makes a move, their opponent can counter to put them back into an xor position of zero.

    b) The opponent will never put p in [1,1], [1,1,1,1], etc., because that would require the opponent to pass up a winning position (such as [1,8], [1,1,1,8],etc.)

    c) So these two things together mean that the opponent will never put p in a winning position, which establishes (4).

    Now let's suppose player p has an xor value other than zero.

    d) As long as at least one pile has more than 1 stone, p can give their opponent an xor value of 0, which establishes (5).
    by Kevinagin
    */
    //The last losing position of every game will have exactly one stone and one active pile.
    //The only "winning position" from (2) that has an xor value of 0 is [1,1]
    int xored=0;
    int sum=0;
    for(int i=0;i<s.size();i++){
        xored^=s[i];
        sum+=s[i];
    }
    if(s.size()==sum){ //if all piles have 1 stone
        if(s.size()%2==0)
            return "First";
        else
            return "Second";    
    }
        
    if(xored==0) //Comes from "Nim Theorem",  //if their xor=0 then stones are paired, so second player wins.    
        return "Second";
    else 
        return "First";
}
