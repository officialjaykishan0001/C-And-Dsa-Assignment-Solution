. What will be the output of the following code:

int main(){

    set<int>s = {615, 67, 4, 19, 10, 89};

    auto it = s.begin();

    cout<<*it<<" ";

    it = s.end();

    it--;

    cout<<*it;

}

Answer is : 4 and  615 willl be print.