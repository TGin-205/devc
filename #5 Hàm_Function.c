Cú Pháp : 
	data_type function_name(type1 parameter1, type2 parameter2...){
    //code
}
/*
data_type : Kiểu trả về của hàm, có thể là các kiểu dữ liệu như int, long long, float, char, double, hoặc void (tương ứng với kiểu trả về là rỗng)
function_name : Tên của hàm, cần tuân theo quy tắc như đặt tên biến 
parameter : Tham số của hàm, đây được coi như đầu vào của hàm. Bạn có thể xây dựng bao nhiêu tham số tùy ý và lựa chọn kiểu dữ liệu cho từng tham số. 
*/
Ví dụ 1 : Hàm có kiểu trả về là int, có 3 tham số là a, b, c 

int tong(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}
Ví dụ 2 : Hàm có kiểu trả về là void, có 3 tham số là a kiểu int, b kiểu long long, c kiểu double 

void display(int a, long long b, double c){
    printf("%d %lld %.2lf\n", a, b, c);
}

Gọi hàm :

Ví dụ 1 : 

#include <stdio.h>

void greet(){
    printf("Hello 28tech !\n");
    printf("blog.28tech.com.vn\n");
}

int main(){
    printf("Before\n");
    greet(); // Lời gọi hàm
    printf("After\n");
    return 0;
}
Tham số (Parameter) hay tham số hình thức là các thành phần khi bạn xây dựng hàm, xem xét ví dụ dưới đây thì a, b, c sẽ được gọi là tham số

Đối số (Argument) hay tham số chính thức là các giá trị bạn truyền vào cho hàm khi gọi hàm, xem xét ví dụ dưới đây thì m, n, p được gọi là đối số

Ví dụ 3 : Thay đổi tham số sẽ không ảnh hưởng gì tới đố số

#include <stdio.h>

void thaydoi(int n){
    n += 28;
    printf("%d\n", n);
}

int main(){
    int a = 100;
    thaydoi(a);
    printf("%d\n", a);
    return 0;
}
//Output : 128 
// 		: 100
5.Chú Ý Khi Xây Dựng Hàm
	1.Hàm này có cần trả về giá trị không, nếu có thì trả về kiểu dữ liệu là gì ?
	2.Hàm này có bao nhiêu tham số, các tham số có kiểu dữ liệu là gì ?
	3.Hàm của bạn xây dựng đã đủ tổng quát chưa hay quá quá chi tiết và chỉ phù hợp cho 1 bài toán cụ thể
	4.Bạn gọi hàm có đúng thứ tự tham số mà mình mong muốn hay không, kiểu dữ liệu của tham số hình thức và tham số chính thức có hợp lí hay không?
	5.Nếu hàm của khác void, thì hàm sẽ kết thúc ngay lập tức khi gặp câu lệnh return một giá trị nào đó, còn nếu hàm void mà các bạn muốn kết thúc tại thời 
		điểm nào đó các bạn có thể sử dụng câu lệnh return; là đủ.