#include "stdio.h"
#include "math.h"


typedef struct {

   double real_Value;
   double img_Value;


}complex_value;

 complex_value  add(complex_value a, complex_value b){

    double result_real;
    double result_img;
    result_real= a.real_Value+ b.real_Value;
    result_img= a.img_Value+ b.img_Value;

    complex_value result ={result_real,result_img};

    return result;
}
complex_value  sub(complex_value a, complex_value b){

    double result_real;
    double result_img;
    result_real= a.real_Value- b.real_Value;
    result_img= a.img_Value- b.img_Value;
    complex_value result ={result_real,result_img};



    return result;
}

complex_value  mul(complex_value a, complex_value b){

        double a_real_b_real;
        double a_real_b_img;
        double a_img_b_real;
        double a_img_b_img;
        double result_real;
        double result_img;


        a_real_b_real=a.real_Value*b.real_Value;
        a_real_b_img=a.real_Value*b.img_Value;
        a_img_b_real=a.img_Value*b.real_Value;
        a_img_b_img=a.img_Value*b.img_Value;

        result_real =a_img_b_real+a_img_b_img*-1;
        result_img =a_real_b_img+a_img_b_real;

  
    complex_value result={result_real,result_img};

    return result;
}






int main(){

complex_value a={2,5};
complex_value b={3,7};

complex_value result_add = add(a, b); // return the sum of `a` and `b`
complex_value result_sub = sub(a,b);  // return the difference of `a` and `b`
complex_value result_mul= mul(a,b);  // return the product of `a` and `b`

printf("real: %.2lf  img: %.2lf\n", result_add.real_Value, result_add.img_Value);
printf("real: %.2lf  img: %.2lf\n", result_sub.real_Value, result_sub.img_Value);
printf("real: %.2lf  img: %.2lf\n", result_mul.real_Value, result_mul.img_Value);

return 0;
}














