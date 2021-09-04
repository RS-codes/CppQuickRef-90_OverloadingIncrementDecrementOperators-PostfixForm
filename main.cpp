/*90.a _ Overloading Increment and Decrement Operators in Postfix form*/

#include<iostream>
using namespace std;
class Marks{
    int mark;
public:
    Marks(){
        mark=0;
    }
    Marks(int mark){
        this->mark=mark;
    }
    void disp(){
        cout<<"Ur mark is "<<mark<<endl;
    }

//passing a parameter int, specifies that we are overloading ++ Unary operator in POSTFIX form and the current obj is passed implicitly, since its a member ftn    
Marks operator ++(int){ 
        Marks temp;
        mark+=1;
        return temp;
    }

//passing a parameter int, specifies that we are overloading -- Unary operator in POSTFIX form and the current obj is NOT passed implicitly, since its a FRIEND ftn
friend Marks operator--(Marks &m,int); 
};
Marks operator--(Marks &m,int){
    Marks temp;
    m.mark-=1;
    return temp;
}
int main(){
    Marks rs(100);
    rs.disp();
    rs++; //PostFix ++
    rs.disp();
    rs--;  //PostFix --
    rs.disp();
    return 0;
}

