- Đây là một chương trình C++ để thực hiện các hoạt động cơ bản trên cây tìm kiếm nhị phân (BST - Binary Search Tree). Dưới đây là một báo cáo mô tả chương trình:
Mô Tả Chung:
= Chương trình được viết bằng ngôn ngữ lập trình C++ và thực hiện các thao tác cơ bản trên cây tìm kiếm nhị phân. Cây tìm kiếm nhị phân là một cấu trúc dữ liệu trong đó mỗi nút có tối đa hai nút con
(nút con trái và nút con phải). Các nút có giá trị nhỏ hơn nút gốc sẽ được đặt ở nút con trái, và các nút có giá trị lớn hơn sẽ được đặt ở nút con phải.

* Mức 1:***
  
1. Mục Đích và Chức Năng của Chương Trình:
Mục Đích: Chương trình được thiết kế để quản lý cây tìm kiếm nhị phân (BST) và cung cấp các chức năng cơ bản như thêm, tìm kiếm, xóa và in ra cây BST.

Chức Năng Cơ Bản:

Thêm Node Vào Cây BST: Cho phép người dùng thêm một hoặc nhiều giá trị vào cây BST.
Tìm Kiếm Node Trong Cây BST: Cho phép người dùng tìm kiếm một giá trị cụ thể trong cây BST.
Xóa Node Khỏi Cây BST: Cho phép người dùng xóa một giá trị cụ thể khỏi cây BST.
In Ra Cây BST Hiện Tại: Hiển thị các giá trị trong cây BST theo thứ tự tăng dần.
2. Cấu Trúc Dữ Liệu và Hàm Chức Năng:
Cấu Trúc Node (struct Node):

Lưu trữ thông tin của mỗi node trong cây BST bao gồm giá trị (data), con trái (left), và con phải (right).
Các Hàm Chức Năng Chính:

createNode(int x): Tạo một node mới với giá trị x.
*insertNode(Node root, int x)**: Thêm một node mới có giá trị x vào cây BST.
*searchNode(Node root, int x)**: Tìm kiếm một giá trị x trong cây BST.
*deleteNode(Node root, int x)**: Xóa node chứa giá trị x khỏi cây BST.
*minValueNode(Node node)**: Tìm node có giá trị nhỏ nhất trong cây con bên trái của node.
Các Hàm Phụ Trợ:

*inorderTraversal(Node root)**: Duyệt cây theo hình thức "trái - node - phải" và in ra giá trị theo thứ tự tăng dần.
*insertArray(Node root, vector<int>& arr)**: Thêm một mảng giá trị vào cây BST.
3. Giao Diện Người Dùng và Luồng Thực Thi:
Menu và Lựa Chọn: Hiển thị menu với các lựa chọn cho người dùng.
Thực Thi Lựa Chọn:
Thêm Node: Nhập giá trị và thêm vào cây BST.
Tìm Kiếm Node: Tìm kiếm giá trị cụ thể trong cây BST.
Xóa Node: Xóa một giá trị khỏi cây BST.
In Ra Cây BST: In ra các giá trị theo thứ tự tăng dần.
Thoát Chương Trình: Kết thúc chương trình.

* Mức 2:***
- Cũng tương tự mức 1, nhưng dũ liệu được lấy từ file input.txt chứ không phải nhập từ bàn phím như mức 1.
- Các chức năng và giao diện cũng tương tự mức 1.
  
4. Nhận Xét và Cải Tiến:
Ưu Điểm:

Sử dụng đệ quy một cách hiệu quả để thực hiện các thao tác trên cây BST.
Menu và giao diện người dùng thân thiện và dễ sử dụng.
Nhược Điểm và Cải Tiến:

Cần cải thiện việc xử lý lỗi, chẳng hạn như khi người dùng nhập ký tự thay vì số.
Mở rộng chương trình để hỗ trợ các tính năng phức tạp hơn, như cân nhắc cân đối cây sau mỗi thao tác để tăng hiệu suất và cải thiện quản lý bộ nhớ.
5. Kết Luận:
Chương trình cung cấp một giao diện dễ sử dụng để thao tác cơ bản trên cây tìm kiếm nhị phân.
Cần cải thiện và mở rộng để hỗ trợ các tính năng phức tạp hơn và cải thiện xử lý lỗi để đảm bảo tính ổn định và hiệu suất của chương trình.
