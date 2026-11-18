#ifndef Function
#define Function
#include Point.h
#include math.h

class Function{

    public:
        
        Function(point p);
        explicit Function();
        ~Function();

        point getMin();
        double Quota(point p);

    private:

        point p;    //punto p
        point min;

}

Function::Function(point p){

    p = this.p; 
    double Quota(point p){

        double quota = p.getX + p.getY;
        return quota;

    }

}

Function::func1(point p,point min){

    p = this.p;
    min = this.min;
    
    double Quota(point p){

        double quota = (pow(p.getX, 2) + pow(p.getY,2))/2;
        return quota;

    }
    
    point getMin(){
        return min;
    }

}

Function::func2(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = (pow(p.getX, 2) + 16*pow(p.getY,2))/2;
        return quota;

    }

}

Function::func3(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = pow(pow(p.getX, 2) - 1, 2) + pow(p.getY, 2);
        return quota;

    }

}

Function::func4(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = pow(pow(p.getX, 2) - 1, 2) + pow((p.getX - 1), 2)/5 + pow(p.getY, 2);
        return quota;

    }

}

Function::func5(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = 4*( pow(sinh(p.getX/2),2)) + pow(p.getY, 2);
        return quota;

    }

}

Function::func6(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = log(1 + pow(p.getX, 2) + pow(p.getY,2));
        return quota;

    }

}

Function::func7(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = 1 - exp(-(pow(p.getX, 2) + pow(p.getY,2)));
        return quota;

    }

}

Function::func8(point p){

    p = this.p;
    
    double Quota(point p){

        double quota = 2 - cos(p.getX*3.14) - cos(p.getY*3.14);
        return quota;

    }

}
