



#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [ LIMIT ] , size , val ;

    printf ( "\n\t 🖝  Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t 🖝  Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
        }

    printf ( "\n\t 🖝  Give me the value to be inserted : " ) ;
    scanf ( " %d" , &val ) ;

    printf ( " \n\n\t 🖝  The current list of the array : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , *( T+i ) ) ;

    T [size ++] = val ;
    int temp ; 
    for ( int i = 0 ; i < size - 1 ; i ++ )  
        {
            for ( int j = 0 ; j < size - i - 1 ; j ++ ) 
                { 
                    if ( T [j] > T [j + 1] ) 
                        { 
                            temp = T [j] ;
                            T [j] = T [j + 1] ;
                            T[j + 1] = temp ;  
                        }
                } 
        }
        
    printf ( " \n\n\t 🖝  After Insert the element the new list is : " ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        printf ( " %d " , T [i] ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}