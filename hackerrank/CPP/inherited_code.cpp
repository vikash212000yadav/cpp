

/* Define the exception here */

class BadLengthException {
    int n;
    public:
        BadLengthException(int x) {
            n = x;
        }
    
        int what() {
            return n;
        }
};
