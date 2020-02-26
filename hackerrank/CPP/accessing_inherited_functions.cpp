

class D:public A, public B, public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
            while (!(new_val%2))
            {
                new_val /= 2;
                //val *= 2;
                A::func(val);
                //callA++;
            }
            while (!(new_val%3))
            {
                new_val /= 3;
                //val *= 3;
                B::func(val);
                //callB++;
            }
            while (!(new_val%5))
            {
                new_val /= 5;
                //val *= 5;
                C::func(val);
                //callC++;
            }
			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};

