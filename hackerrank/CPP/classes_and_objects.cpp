

// Write your Student class here
class Student{
    int score[5];
    int sum=0;
    public:
        void input(){
            for(int i=0; i<5; i++)
                cin>>score[i];
            //return score;
        }
        int calculateTotalScore(){
            for(int i=0; i<5; i++)
                sum=sum+score[i];
            return sum;
        }
};

