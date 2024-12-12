-> 运算符的用法
在结构体指针中，->运算符用于访问结构体成员。它的作用相当于先解引用指针，然后访问成员，但语法更加简洁

ps->id = 4;
strcpy_s(ps->name, sizeof(ps->name), "lily");
ps->sex = 'f';

ps->id = 4;：通过结构体指针ps访问并修改id成员。


深入理解 -> 运算符
1. . 与 -> 运算符的区别
. 运算符：用于访问结构体变量的成员。
-> 运算符：用于访问结构体指针指向的结构体的成员。

  struct Student s;
stu* ps = &s;

// 使用 . 运算符访问成员
s.id = 1;
strcpy_s(s.name, sizeof(s.name), "Alice");
s.sex = 'f';

// 使用 -> 运算符访问成员
ps->id = 2;
strcpy_s(ps->name, sizeof(ps->name), "Bob");
ps->sex = 'm';



何时使用 -> 运算符？
结构体指针：当你有一个指向结构体的指针时，使用->运算符来访问其成员。
指向指针的指针：在多级指针情况下，如stu** pps，可以使用(*pps)->id访问成员，但这时需要注意优先级
