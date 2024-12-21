


#include <stdio.h>

int main ()
{
    int M1 [5][5] , M2 [5][5] , size ;

    printf ( "\n\t 🖝  Give me the size of the square matrix < less than 5 > : " ) ;
    scanf ( " %d" , &size ) ;
    printf ( "\n" ) ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            for ( int j = 0 ; j < size ; j ++ )
                {
                    printf ( "\n\t 🖝  Give me M1[%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M1[i][j] ) ;
                }
        }

    printf ( "\n\n" ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        {
            for ( int j = 0 ; j < size ; j ++ )
                {
                    printf ( "\n\t 🖝  Give me M2[%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M2[i][j] ) ;
                }
        }

    printf ( "\n\n\t 🖝  The First matrix is : \n" ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t\t\t   " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                printf ( " %d " , M1[i][j] ) ;
        }
    
    printf ( "\n\n\t 🖝  The Second matrix is : \n" ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t\t\t   " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                printf ( " %d " , M2[i][j] ) ;
        }
    
    printf ( "\n\n\t 🖝  The multiplication of two matrix is : \n" ) ;
    for ( int i = 0 ; i < size ; i ++ ) 
        {   
            printf ( "\n\t\t\t   " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                printf ( " %d " , M1[i][j] * M2[i][j] ) ;
        } 

    printf ( "\n\n\n" ) ;

    return 0 ;
}