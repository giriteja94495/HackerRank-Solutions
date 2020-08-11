/* https://www.hackerrank.com/challenges/draw-the-triangle-2/problem
Let us walk through the intution behind the solution...as we  need to print the pattern ,we gotta use a loop 
but wait ! do we have loops in sql? yeah ! we do have loops in sql but not "for" loop 
we have only while loop ,and how do we solve this then?
To solve this we dont need a loop we can use "REPEAT " function in mysql to get the answer
but how ?  Let's see the solution first and then we will analyse it */



SET @count:= 0;
select repeat('* ',@count:=@count+1) from information_schema.tables where @count<20;

/*here we set the count to 0 and repeat function will repeat the first parameter for (second parameter)times 
second paramter get's executed first and then it prints the first one 
in first step ,count is 1 and we repeat the same until we get count as 20 
*/
