#include <stdio.h>

int main() {
    int n ;
    printf( "Enter value \n" ) ;
    scanf("%d", &n) ;
    printf( "Series: " ) ;
    if( n % 2 == 0) {
        for( int i =n ; i >= 0 ; i -=2 ) {
            printf("%d " , i) ;
            
        }//end for
    }
    else{
        for(int i = 1 ; i <=n ; i +=2 ) {
            printf("%d " , i) ; 
        }//end for
    }//end if
    return 0 ;
}//end function