#include<stdio.h>

struct name
{
    char first_name[10];
    char middle_name[10];
    char last_name[10];
};

struct address
{
    int flat_number;
    int lane_number;
    int pin_code;
    char city[10];
};

struct dob
{
    int dd;
    int mm;
    int yyyy;
};

struct q6_1
{
    int regno;
    struct name n1;
    struct dob d1;
    int age;
    struct address a1;
};

struct q6_2
{
    int bookid;
    char bookname[20];
    char author[20];
    int price;
    int edition;
    char publisher[20];
    int year;
};

struct q6_3
{
    int employeeid;
    struct name n2;
    struct address a2;
    struct dob d2;
};

int main()
{
    struct q6_1 s1;
    struct q6_2 b1;
    struct q6_3 e1;
    struct name n1, n2;
    struct address a1, a2;
    struct dob d1, d2;

    // 6.1
    printf("\nEnter the student's registration number:");
    getchar();
    scanf("%d", &s1.regno);
    printf("\nEnter the student's full name [first<CR>middle<CR>last]:");
    getchar();
    scanf("%s%s%s", s1.n1.first_name, s1.n1.middle_name, s1.n1.last_name);
    printf("\nEnter the student's date of birth [dd<CR>mm<CR>yyyy]:");
    getchar();
    scanf("%d%d%d", &s1.d1.dd, &s1.d1.mm, &s1.d1.yyyy);
    printf("\nEnter the student's age:");
    getchar();
    scanf("%d", &s1.age);
    printf("\nEnter the student's address' flat number:");
    getchar();
    scanf("%d", &s1.a1.flat_number);
    printf("\nEnter the student's address' lane number:");
    getchar();
    scanf("%d", &s1.a1.lane_number);
    printf("\nEnter the student's address' pin code:");
    getchar();
    scanf("%d", &s1.a1.pin_code);
    printf("\nEnter the student's address' city:");
    getchar();
    scanf("%s", &s1.a1.city);

    // 6.2
    printf("\nEnter the book ID:");
    getchar();
    scanf("%d", &b1.bookid);
    printf("\nEnter the book name:");
    getchar();
    scanf("%s", b1.bookname);
    printf("\nEnter the author name:");
    getchar();
    scanf("%s", b1.author);
    printf("\nEnter the book price:");
    getchar();
    scanf("%d", &b1.price);
    printf("\nEnter the book edition:");
    getchar();
    scanf("%d", &b1.edition);
    printf("\nEnter the book publisher:");
    getchar();
    scanf("%s", b1.publisher);
    printf("\nEnter the book year:");
    getchar();
    scanf("%d", &b1.year);
    // 6.3
    printf("\nEnter the employee ID:");
    getchar();
    scanf("%d", &e1.employeeid);
    printf("\nEnter the employee's full name [first<CR>middle<CR>last]:");
    getchar();
    scanf("%s%s%s", e1.n2.first_name, e1.n2.middle_name, e1.n2.last_name);
    printf("\nEnter the employee's date of birth [dd<CR>mm<CR>yyyy]:");
    getchar();
    scanf("%d%d%d", &e1.d2.dd, &e1.d2.mm, &e1.d2.yyyy);
    printf("\nEnter the employee's address' flat number:");
    getchar();
    scanf("%d", &e1.a2.flat_number);
    printf("\nEnter the employee's address' lane number:");
    getchar();
    scanf("%d", &e1.a2.lane_number);
    printf("\nEnter the employee's address' pin code:");
    getchar();
    scanf("%d", &e1.a2.pin_code);
    printf("\nEnter the employee's address' city:");
    getchar();
    scanf("%s", &e1.a2.city);

    return 0;
}