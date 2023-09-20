/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/
#include <stdio.h>

int main() {
    int n ;
    printf( "Input N : " ) ;
    scanf( "%d", &n ) ;

    int a[n] ;
    int numner[1000] = {0} ; // สร้างอาเรย์ numner เพื่อตรวจสอบว่าตัวเลขนั้นซ้ำหรือไม่

    // รับข้อมูลและตรวจสอบค่าที่ไม่มีการซ้ำกัน
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Input : " ) ;
        scanf( "%d", &a[i] ) ;
        numner[a[i]]++ ;
    }//end for

    // แสดงผลลัพธ์
    printf( "Unique value : " ) ;
    for ( int i = 0 ; i < 1000 ; i++ ) {
        if ( numner[i] == 1 ) {
            printf( "%d ", i ) ;
        }//end if
    }//end for
    printf( "\n" ) ;

    return 0 ;
}//end function