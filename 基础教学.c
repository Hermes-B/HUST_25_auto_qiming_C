#include <stdio.h>
#include <string.h>

int main() {
    // 1. 数组定义和初始化
    int arr[5] = {1, 2, 3, 4, 5};
    printf("数组内容：");
    for(int i = 0; i < 5; i++) { // for循环遍历数组
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. 字符串基本操作
    char a;
    a="A";//单独的char只能存储单个字符，储存多字符串要用字符串数组或者指针
    char str1[20] = "Hello";
    char str2[20] = "World";//字符串数组
    char *str2 = "World"; //字符串指针
    strcat(str1, ", "); // 字符串拼接
    strcat(str1, str2);
    printf("拼接后的字符串：%s\n", str1);
    printf("字符串长度：%zu\n", strlen(str1));

    // 3. 指针基本用法，指针变量存储变量地址，通过解引用操作符*访问地址存储的值
    int a = 10;
    int *p = &a;
    printf("a的值：%d, 指针p指向的值：%d\n", a, *p);

    // 4. while循环
    int count = 0;
    printf("while循环输出：");
    while(count < 3) {
        printf("%d ", count);
        count++;
    }
    printf("\n");

    // 5. do...while循环
    int num = 0;
    printf("do...while循环输出：");
    do {
        printf("%d ", num);
        num++;
    } while(num < 3);
    printf("\n");

    // 6. if-else条件语句
    int x = 5;
    if(x > 0) {
        printf("x是正数\n");
    } else if(x < 0) {
        printf("x是负数\n");
    } else {
        printf("x是零\n");
    }

    // 7. switch语句
    char ch = 'B';
    switch(ch) {
        case 'A':
            printf("选项A\n");
            break;
        case 'B':
            printf("选项B\n");
            break;
        default:
            printf("其他选项\n");
    }

    // 8. 指针与数组结合
    int *ptr = arr;
    printf("用指针遍历数组：");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // 9. 结构体
    struct Person {
        char name[50];
        int age;
    };

    struct Person p1; // 定义结构体变量
    strcpy(p1.name, "Tom"); // 给结构体成员赋值（字符串用strcpy）
    p1.age = 20; // 给结构体成员赋值

    printf("结构体内容：姓名=%s, 年龄=%d\n", p1.name, p1.age);

    // 结构体数组
    struct Person people[2];
    strcpy(people[0].name, "Alice");
    people[0].age = 18;
    strcpy(people[1].name, "Bob");
    people[1].age = 22;

    printf("结构体数组内容：\n");
    for(int i = 0; i < 2; i++) {
        printf("姓名=%s, 年龄=%d\n", people[i].name, people[i].age);
    }

    // 结构体指针
    struct Person *pp = &p1;
    printf("结构体指针访问：姓名=%s, 年龄=%d\n", pp->name, pp->age);

    return 0;
}