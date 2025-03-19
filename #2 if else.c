#include<stdio.h>
#include<math.h>
cấu trúc rẽ nhánh if-else

EX : if	
int main (){
	int n;
	// test expression, condition
	scanf("%d", &n );
	if ((n>= 50 ) && (100 <= n)){
		printf ("N la so chan nam giua 100 va 50"); // nếu điều kiện đúng chạy code này
	}
}

EX : if lồng if
int main (){
	int n;
	// test expression, condition
	scanf("%d", &n );
	if (n>= 50 ){
		if ( 100 <= 100) {
			printf ("N la so chan nam giua 100 va 50"); // nếu điều kiện đúng chạy code này
		}
	}
}
if- else if - else 

 if -> else if -> else // if sai check else if tất cả các else if check else
 