/*
 [1, 3, 6, 4, 7]  We need sum = 10
 
 SOLN : 
 
 First we sort it.
 [1, 2, 3, 4, 7]
 start at 0 and 4 (start and end)
 1 + 7 = 8. 7 is max but still less so we will start from 3.
 but if sum was less the we would have reduced the last one.
 if(equal) the start ++ and end --;

 
