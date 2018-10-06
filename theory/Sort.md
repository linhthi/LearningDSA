# CHƯƠNG 2: sẮP XẾP - CÁC GIẢI THUẬT CƠ SỞ
## 1.  Các định nghĩa
### 1.1Bài toán sắp xếp
  Sắp xếp là một bài toán cơ sở trong xử lí thông tin. Trước hết nó phục vụ cho việc tìm kiếm dữ liệu. Thời gian thực hiện nhiều thuật giải sẽ được cải thiện đáng kể nếu dữ liệu đầu vào đã được sắp thứ tự.
  
  Mô hình toán học của bài toán sắp xếp là: có dãy các phần tử thuộc kiểu có thứ tự nào đó. Đổi chỗ cấc phần tử trong dãy sao cho dãy mới nhận được có thứ tư(tăng hoặc giảm dần).
  
  Bài toán sắp xếp được chia thành hai loại.
  
  1- Sắp xếp trong: toàn bộ dãy cần sắp xếp nằm trong bộ nhớ, có thể truy cập trực tiếp tới một phần tử bất kì.
  2- Sắp xếp ngoài: lượng dữ liệu cần sắp xếp nằm trong các tập tin trên bộ nhớ ngoài, chỉ có thể truy cập tuần tự, đọc từng phần vào bộ nhớ trong.
  
  Vì thời gian truy cập đĩa hay băng từ lâu hơn gấp nhiều lần so với truy cập bộ nhớ trong nên sắp xếp ngoài đòi hỏi xem xét dưới góc độ khác.
  
  Ở đây ta chỉ xét sắp xếp trong.
  
  Sắp xêp strong cũng được gọi là sắp xếp mảng.
  
  - Đầu vào: (mảng) dãy nguồn;    a1,a2,...,an
  - Đầu ra : (mảng) dãy đích đã được sắp xếp: ak1, ak2,..,akn
  
  Một cách tổng quát, mỗi phần tử mảng ai là một mẫu tin ( bản ghi) ta gọi chung là một item, có thể gồm nhiều trường, nhưng phải có một trường được chọn làm khóa sắp xếp - key.Trường khóa phải là kiểu dữ liệu có thứ tự nào đó. Ví dự, số nguyên, số thực, xâu kí tự,...
  ```sh
  Type item = record
       key: <kiểu có thứ tự>;
       filed_1: <kiểu dữ liệu>;
       .....
       field_n: <kiểu dữ liệu>;
       end;
  ```
