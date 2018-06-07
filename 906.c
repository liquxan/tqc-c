/*TQC C Exam-906(學生成績) 試題說明：
(1) 建立一個學生資料結構，其資料成員包含姓名(資料型態為字串)及C語言分數(資料型態為整數)。
(2) 請利用輸入的方式取得5筆學生資料，並存入所建立之學生資料結構中，之後將其印出。
(3) 輸出排列的格式，姓名是向左靠齊，分數是向右靠齊。
*/

//906 解答參考
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct student{
    char name[12];
    int score;
};
    struct student s[MAX];
int main () {
    int i;
    for(i=0;i<MAX;i++){
        printf("請輸入第%d位同學的姓名:",i+1);
        scanf("%s",&s[i].name);
        printf("請輸入第%d位同學的C語言分數:",i+1);
        scanf("%d",&s[i].score);
    }
    printf("\n");
    for(i=0;i<MAX;i++){
        printf("%-20s%d",s[i].name,s[i].score);
        printf("\n");
    }
   
    return 0;
}
