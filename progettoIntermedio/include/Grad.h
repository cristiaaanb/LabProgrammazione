#ifndef Grad
#define Grad
#include Point
#include math

class Grad{

    public:

        Grad(point p);
        explicit Grad();
        ~Grad();

        double Gradient();

    private:

        point p;
        
}

Grad::Grad(point p){

    p = this.p;
    double Gradient(point p){
        return p.getX + p.getY;
    }

}

Grad::Grad1(point p){

    p = this.p;
    double Gradient(point p){

        return p.getX + p.getY;

    }
}

Grad::Grad2(point p){

    p = this.p;

    double Gradient(point p){

        return p.getX + 16*p.getY;

    }
}

Grad::Grad3(point p){

    double Gradient(point p){

        return p.getX*(4*pow(p.getX,2) - 4) + 2*p.getY;

    }
}

Grad::Grad4(point p){

    double Gradient(point p){

        return p.getX*(4*pow(p.getX,2) - 4) -(2*(p.getX - 1)/5) + 2*p.getY;

    }
}

Grad::Grad5(point p){

    double Gradient(point p){

        return 2*sinh(p.getX) + 2*p.getY;

    }
}

Grad::Grad6(point p){

    double Gradient(point p){

        return 2*(p.getX + p.getY)/(1 + pow(p.getX, 2) + pow(p.getY,2));

    }
}

Grad::Grad7(point p){

    double Gradient(point p){

        return 2*(exp(-(pow(p.getX, 2) + pow(p.getY,2))))*(p.getX + p.getY);

    }
}

Grad::Grad8(point p){

    double Gradient(point p){

        return 3.14*(sin(3.14*p.getX) + sin(3.14*p.getY));
        
    }
}

