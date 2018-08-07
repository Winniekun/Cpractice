## 结构体学习笔记

### 定义结构体步骤

1. 定义结构体第一步声明一个`结构体模板`

   ```
   struct 结构体名
   {
       数据类型 成员1的名字
       数据类型 成员2的名字
       ......
       数据类型 成员n的名字
   }；
   ```

   结构体模板只是声明了一种数据类型，定义了数据的组织形式，并未声明结构体类型的变量，所以编译器不为其分配内存

2. 利用定义好的结构体数据类型来定义结构体变量

   `C`中允许如下两种方式定义结构体变量

   1. 先声明结构体模板，再定义结构体变量

      ```
      struct student stu1;
      ```

   2. 声明结构体体模板的同时定义结构体变量

      ```
      struct student
      {
          long studentID;
          char studentNmae[10];
      }stu1;
      ```

      或者

      ```
      struct
      {
          long studentID;
          char studentNmae[10];
      }stu1;
      ```

      但是该方法未指定结构体标签，不能再在程序的其他处定义结构体变量，所以不常用

### typedef定义数据类型

关键字`typedef`用于为系统固有的或程序员自定义的数据类型定义一个别名。通常使用大写字母

```
typedef struct student STUDENT;
```

或者

```
typedef struct student
{
    long studentID;
    char studentName[10];
}STUDENT;
```

两者都是为`struct student` 结构体类型定义了一个新的名字`STUDENT`，所以`STUDENT`和`struct student`是同义词。

```
STUDENT stu1, stu2;
struct student stu1, stu2;
```

**typedef只是为一种已经存在的类型定义了一个新的名字而已，并为定义一种新的数据类型**



### 结构体数组定义

```
STUDENT stu[30];
```



### 结构体指针定义与初始化

#### 指向结构体变量的指针

```
STUDENT *pt; /*定义指向STUDRNT结构体的指针变量*/
```

但是并未指向一个明确的存储单元，其值是一个随机值，为使`pt`指向一个明确的存储单元，需要对指针变量进行初始化

```
pt = &stu1;  /*让结构体指针变量pt指向结构体变量stu1*/
```

也可以在定义指针变量pt的同时对其进行初始化，就如正常的指针的初始化一样

```
STUDENT *pt = &stu1
```

在C语言中，规定了两种用于访问结构体成员的运算符，一种是`成员选择运算符 * `  ，一种是`指向运算符`

```
pt->studentID = 1001310121
```

与

```
(*p).studentID = 1001310121 /*不常用*/
```

一样

#### 指向结构体的数组指针

例如已经声明了STUDENT结构体，并且已经定义了一个结构体数组stu.

```
STUDENT *pt = stu;
```

与下面的语句等价(具体查阅[指针与一维数组](https://github.com/KongWiKi/Cpractice/tree/master/base/pointer))

```
STUDENT *pt = &stu[0];
```

同时也等价于

```
STUDENT *pt = NULL;
pt = stu;
```



