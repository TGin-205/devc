#include <stdio.h>
#include<math.h>
// so nguyen x bit ta có -2^x-1 -> (2^x-1) -1 hoặc ( 0 -> 2^x) - 1
int : 4 byte = 32 bit
long long : 8byte = 64 bit
//so thuc
float : 4byte
double : 7byte
// ki tu
char : 1 byte

i++ : tăng i lên 1 đơn vị / tăng sau
i-- :  tăng i lên 1 đơn vị / giảm sau
++i : tăng i lên 1 đơn vị / tăng trước
--i :  tăng i lên 1 đơn vị / giảm sau 

a = a + b; // a +=b tương tự cho - * / %

> : lớn 
< : bé 
>= : lớn hơn hoặc bằng
<= : bé hơn hoặc bằng
== : so sánh bằng
!= : so sánh khác 
= : gán

// trong C 0 là sai tất cả các số khác không là đúng ( hay được gán = 1 )
// dùng kiểu dữ liệu int để thay cho kiểu dữ liệu đúng sai

&& và AND // nó chỉ đúng khi tất cả các thành phần đều đúng
|| hoặc OR // 1 trong 2 cái đúng thì nó sẽ đúng chỉ sai khi cả 2 đều sai
! NOT // phủ định 0 là 1 của 1 là 0
// sizeof, comma,ternary operator

hàm toán học hay dùng
sprt(x) : tính căn bậc 2 của x trả về số double
pow(x, y) : tính x mũ y
abs(x) : tính giá trị tuyệt đối
cbrt(x) : tính căn bậc 3
còn nhiều hàm khác nên học vd như ceil, floor , .....

Toán tử sizeof : cú pháp  sizeof(type) hoặc sizeof(variable).
ex sizeof( int), sizeof (double), sizeof ( x 0); 

Toán tử dấu phẩy (, - Comma Operator)
Dạng chung: (expr1, expr2, expr3, ..., exprN)
EX: int b, c;
    b = (c = 10, c + 5);  // Đầu tiên, c được gán 10, sau đó tính c+5 => 15, nên b = 15.
    printf("Giá trị của b: %d\n", b);
    
Toán tử ba ngôi (?: - Ternary Operator) // Viết gọn câu lệnh điều kiện if-else trong một biểu thức duy nhất.
	Cú pháp condition ? expression1 : expression2;
	/* Nếu condition đúng (true), biểu thức sẽ trả về expression1.
	Nếu condition sai (false), biểu thức trả về expression2. */
EX:  int a = 5;
    printf("a là %s\n", (a % 2 == 0) ? "chẵn" : "lẻ"); //nếu a chia 2 dư ko thì in chẵn nếu không thì in lẻ
EX:  int x = 10, y = 20;
    int min = (x < y) ? x : y;  // nếu x < y thì min = x còn nếu x >= y thì min = y
    printf("Giá trị nhỏ hơn là: %d\n", min); 