
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    protected:
    int a, b;
    public:
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};

class RectangleArea:public Rectangle{
    //int a,b;
    public:
        void read_input(){
            cin>>a>>b;
        }
        void display(){
            cout<<a*b;
        }
};

