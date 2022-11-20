// #include<stdio.h>
// int stack[20];
// int top = -1;

// void push(int x)
// {
//     stack[++top] = x;
// }

// int pop()
// {
//     return stack[top--];
// }

// int main()
// {
//     char exp[20];
//     char *e;
//     int n1,n2,n3,num;
//     printf("Enter the expression :: ");
//     scanf("%s",exp);
//     e = exp;
//     while(*e != '\0')
//     {
//         if(isdigit(*e))
//         {
//             num = *e - 48;
//             push(num);
//         }
//         else
//         {
//             n1 = pop();
//             n2 = pop();
//             switch(*e)
//             {
//             case '+':
//             {
//                 n3 = n1 + n2;
//                 break;
//             }
//             case '-':
//             {
//                 n3 = n2 - n1;
//                 break;
//             }
//             case '*':
//             {
//                 n3 = n1 * n2;
//                 break;
//             }
//             case '/':
//             {
//                 n3 = n2 / n1;
//                 break;
//             }
//             }
//             push(n3);
//         }
//         e++;
//     }
//     printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
//     return 0;
// }
// #include <stdio.h>
// #include <limits.h>>
// #define MAX 20

// char stk[20];
// int top = -1;

// int isEmpty()
// {
//     return top == -1;
// }
// int isFull()
// {
//     return top == MAX - 1;
// }

// char peek()
// {
//     return stk[top];
// }

// char pop()
// {
//     if (isEmpty())
//         return INT_MIN;

//     char ch = stk[top];
//     top--;
//     return (ch);
// }

// void push(char oper)
// {
//     if (isFull())
//         printf("Stack Full!!!!");

//     else
//     {
//         top++;
//         stk[top] = oper;
//     }
// }

// int checkIfOperand(char ch)
// {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }

// int precedence(char ch)
// {
//     switch (ch)
//     {
//     case '+':
//     case '-':
//         return 1;

//     case '*':
//     case '/':
//         return 2;

//     case '^':
//         return 3;
//     }
//     return -1;
// }

// int covertInfixToPostfix(char *expr)
// {
//     int i, j;

//     for (i = 0, j = -1; expr[i]; ++i)
//     {

//         if (checkIfOperand(expr[i]))
//             expr[++j] = expr[i];

//         else if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
//             push(expr[i]);

//         else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
//         {
//             if (expr[i] == ')')
//             {
//                 while (!isEmpty() && peek() != '(')
//                     expr[++j] = pop();

//                 pop();
//             }

//             if (expr[i] == ']')
//             {
//                 while (!isEmpty() && peek() != '[')
//                     expr[++j] = pop();

//                 pop();
//             }
//             if (expr[i] == '}')
//             {
//                 while (!isEmpty() && peek() != '{')
//                     expr[++j] = pop();

//                 pop();
//             }
//         }
//         else
//         {
//             while (!isEmpty() && precedence(expr[i]) <= precedence(peek()))
//                 expr[++j] = pop();
//             push(expr[i]);
//         }
//     }

//     while (!isEmpty())
//         expr[++j] = pop();

//     expr[++j] = '\0';
//     printf("%s", expr);
// }

// int main()
// {
//     char expression[] = "{[a(3*5)]-d}";
//     covertInfixToPostfix(expression);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int array[]={23,56,67,78};
// int size=sizeof(array)/sizeof(int);
// int size2[size];
// for(int i=0;i<size;i++){
//     printf("%d\n",array[i]);
//     size2[i]=array[i];
//     printf("%d",array[i]);
// }

// for(int i=0;i<size;i++){
//     printf("\n");
//     printf("%d",array[i]);
// }
// return 0;
// }
//copy one array element into the other array elements
// #include<stdio.h>
// #include<math.h>
// int viralAdvertisement(int n);
// int main(){
//     int days;
//     printf("Enter number of days\n");
//     scanf("%d",&days);
//     int vishal;
//     vishal=viralAdvertisement(days);
//     printf("The total number of shared people is %d\n",vishal);
//     return 0;
// }
// int viralAdvertisement(int n){

//     int shared_People,c=0,sum=0;
//     printf("Enter the people who liked the product\n");
//     scanf("%d",&shared_People);
// for(int i=0;i<n;i++){
//     sum+=floor(n/2);
//     shared_People=floor(shared_People/2)*3;
// }
// 
// return shared_People;
// }
// #include<stdio.h>
// int main(){
// int arr[]={1,2,3,4,5};
// printf("%d",arr[0]&arr[1]);
// return 0;
// }
// #include<stdio.h>
// int main(){
//     return 0;
// }