#include <iostream>
using namespace std;

int* write_circular_buffer(unsigned int buffer_dim, unsigned int value_count){
    if(buffer_dim == 0) return nullptr;
    int* buffer = new int[buffer_dim];
    int j=0;

    for(int i=0;i<value_count;i++){
        
        if(buffer_dim>value_count){
            buffer[i] = i;
        }

        if(buffer_dim<=value_count){
            if(j>=buffer_dim){
                j=0;
            }

            if(i<buffer_dim){

                buffer[i] = i;

            }else{
                buffer[j]=i;
                j++;
            }
        }
    }

    return buffer;
}
/*NOTA: sarebbe molto più corto usando un modulo,
non serve fare la distinzione tra i due casi.
*/


int main(){

    int dim = 10;
    int buff = 10;
    int* numeri = write_circular_buffer(dim,buff);

    for(int i=0;i<dim;i++){

        cout<< numeri[i] << endl;
        
    }
    delete[] numeri;
    return 0;
}