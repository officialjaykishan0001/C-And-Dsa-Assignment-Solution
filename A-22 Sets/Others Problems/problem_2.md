Q2. Consider the following code statements for removing element(s) from a set. 

      s = {1,2,3,4,5,6,7,8}


a. s.erase(8);

b. s.erase(*s.begin()+5);

c. auto start = s.begin();

     start++;

     auto end = s.end();

     end--;

     s.erase(start, end);

d. s.clear();

Answer : The Correct option is a, c, d