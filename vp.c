#include<stdio.h>

void printData(void *data, char datatype)
{
    if (datatype == 'i')
    {
        printf("integer using %%i: %i\n", *((int*)data));
        printf("integer using %%d: %d\n", *((int*)data));
    }
    else if (datatype == 'c')
    {
        printf("character using %%c: %c\n", *((char*)data));
    }
    else if (datatype == 'f')
    {
        printf("float using %%e: %e\n", *(float*)data);
        printf("float using %%E: %E\n", *(float*)data);
        // put the binary of 83 in float exposed and notice how the scientific notation match
        // type casting basically read the binaries in target data type instead??i think?? thus what happens with the dereference
        // the pointer type tells the compiler how to interpret the memory at that address
        printf("float using %%.60f: %.60f\n", *(float*)data);
        //using %f will print 0.0000..? the numbers are too little 
    }
    else
        printf("unknown data type\n");        
}

int main()
{
    int intValue = 83;

    printData(&intValue, 'i');
    printData(&intValue, 'c');
    printData(&intValue, 'f');
    printData(&intValue, 'j');
}