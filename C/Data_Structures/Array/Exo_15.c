



#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [ LIMIT ] , size , position ;

    printf ( "\n\t 🖝  Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t 🖝  Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
        }

    printf ( "\n\n\t 🖝  Give me the position where to delete : " ) ;
    scanf ( " %d" , &position ) ;
    
    for ( int i = 0 ; i < size ; i ++ )  
        {
            if ( i >= position - 1 )
                T [i] = T [i + 1] ;
        }
    size -- ;
    printf ( " \n\n\t 🖝  The new list is : " ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        printf ( " %d " , T [i] ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}