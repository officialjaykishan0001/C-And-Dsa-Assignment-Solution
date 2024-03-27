3. Consider the following code:

int main(){

    set<int> s = {22, 34, 78, 99, 3, 23, 15, 1, 89};

   

    auto it1 = s.begin();

    auto it2 = s.end();

    it2--;

   

    auto it3 = s.rbegin();

    auto it4 = s.rend();

    it4--;

}If the above code is working perfectly fine, choose the correct option:

a. *it1 == *it4  and  *it2 == *it3

b. *it1 == *it3  and  *it2 == *it4

c. *it1 == *it2  and  *it3 == *it4

d. None of the options


Answer : the correct option is [a]