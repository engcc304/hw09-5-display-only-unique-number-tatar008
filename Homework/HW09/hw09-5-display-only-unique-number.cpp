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
    int N;
    int i ;
    int arr[N] ;
    printf("Input N: ");
    scanf("%d", &N);
    
    for ( i = 0; i < N; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }
    
    int unique[N];
    int uniqueCount = 0;
    
    for (int i = 0; i < N; i++) {
        int isUnique = 1;
        
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        
        if (isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    
    for (int i = 0; i < uniqueCount - 1; i++) {
        for (int j = 0; j < uniqueCount - i - 1; j++) {
            if (unique[j] > unique[j + 1]) {
                int temp = unique[j];
                unique[j] = unique[j + 1];
                unique[j + 1] = temp;
            }
        }
    }
    
    printf("Unique value : ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    
    return 0;
}
