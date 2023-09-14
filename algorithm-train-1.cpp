// //1-1 输入圆的半径，输出圆的周长和面积

// #include <iostream>
// using namespace std;

// int main(){
//     const double pi = 3.14159;
//     double r, c, s;
//     cout<<"请输入圆的半径：";
//     cin>>r;
//     c = 2 * pi * r;
//     s = pi * r * r;
//     cout<<"圆的周长是："<<c<<endl;
//     cout<<"圆的半径是："<<s<<endl;

//     return 0;
// }

// //1-2
// #include<iostream>
// #include <iomanip>
// #include<cmath>

// using namespace std;

// int main(){
//     double d = sqrt(2.0);
//     cout<<"精读设置："<<endl;
//     for(int i = 0; i < 5; i++){
//         cout<<setprecision(i)<<d<<endl;
//     }
//     cout<<"当前精度为："<<cout.precision()<<endl;
//     cout<<"当前域宽："<<cout.width()<<endl;
//     cout<<setw(6)<<d<<endl;
//     cout<<"当前填充字符："<<endl;
//     cout<<setfill('*')<<setw(10)<<d<<endl;
    
//     return 0;
// }



// //1-3 Myers
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"请输入一个三位数："<<endl;
//     cin>>a;
//     cout<<"它的个位是："<<endl;
//     cout<<a%10<<endl;
//     cout<<"它的十位是："<<endl;
//     cout<<(a%100)/10<<endl;
//     cout<<"它的百位是："<<endl;
//     cout<<a/100<<endl;

//     return 0;
// }
// // 1-3 book
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     int n;
//     int ge, shi, bai;
//     cin>>n;
//     ge = n%10;
//     shi = (n/10)%10;
//     bai = (n/100)%10;
//     cout<<ge<<setw(2)<<shi<<setw(2)<<bai<<endl;

//     return 0;
// }



// //1-6
// #include <iostream>
// using namespace std;
// int main(){
//     float score;
//     cin>>score;

//     if(score >= 70){
//         if(score >= 80){
//             if(score >= 90){
//                 cout<<"优秀"<<endl;
//             }
//             else
//                 cout<<"良好"<<endl;
//         }
//         else
//             cout<<"中等"<<endl;
//     }
//     else if(score >= 60)
//         cout<<"及格"<<endl;
//     else
//         cout<<"不及格"<<endl;    
        
//     return 0;
// }




// //1-7
// #include <iostream>
// using namespace std;

// int main(){
//     int year;
//     cin>>year;
//     if((year % 100 == 0 && year % 400 == 0) || year % 4 == 0)
//         cout<<"闰年"<<endl;
//     else
//         cout<<"平年"<<endl;
    
//     return 0;
// }


// //1-8
// #include <iostream>
// using namespace std;

// int main(){
//     int num, a, b, c;
//     cin>>num;
//     a = num % 10;
//     b = (num / 10) % 10;
//     c = num / 100;
//     if((a*a*a + b*b*b + c*c*c) == num)
//         cout<<"是水仙花"<<endl;
//     else
//         cout<<"不是水仙花"<<endl;

//     return 0;

// }




// //1-11 for循环有需要记得加{} 局部参数
// #include <iostream>
// using namespace std;
// int main(){
//     int n;

//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         if(i == 5)
//             break;
//         cout<<i<<endl;
//     }
//     return 0;
// }



// //1-12
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         // if(i == 5)
//         //     break;
//         for(int j = 1; j <= n; j++){
//             if(j == 5)
//                 break;
//             cout<<j<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }




// //1-14
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum = 1;
//     cin>>n;
//     for( ; sum *= n; n--)
//         if(n == 1)
//             break;
    
//     cout<<sum<<endl;
//     return 0;
// }


// //1-15 斐波那契数列
// #include <iostream>
// using namespace std;

// long long f[105];
// int main(){
//     f[1] = 1; f[2] = 1;
//     for(int i = 3; i <= 100; i++){
//         f[i] = f[i - 1] + f[i - 2];
//     }
//     cout<<f[98]<<endl;
//     cout<<f[99]<<endl;
//     cout<<f[100]<<endl;
//     return 0;
// }


// //1-16
// #include <iostream>
// using namespace std;
// int main(){
//     int n; int i = 1;
//     cin>>n;
//     while(i <= n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }



// //1-17
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int a = 1;
//     cin>>n;
//     do{
//         cout<<a<<endl;
//         a++;
//     }
//     while(a <= n);
//     return 0;
// }


// //1-18
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n;
//     cin>>n;
//     for(; ;){           //for语句在省略测试条件时，会认为条件为true，在循环体内部设置条件结束
//         cout<<i<<endl;
//         i++;
//         if(i > n)
//             break;
//     }
//     return 0;
// }



// //1-20
// #include <iostream>

// using namespace std;

// int main(){
//    int n;
//    cin>>n;
//    for(int i = 1; i <= n; i++){
//         if(i % 3 == 0)
//             continue;
//         cout<<i<<endl;
//    }
//    return 0;
// }


// //1-21
// #include <iostream>

// using namespace std;

// int main(){
//    int n;
//    int count = 0;
//    cin>>n;
//    while(n != 1){
//     if(n % 2 == 1)
//         n = 3 * n + 1;
//     else    
//         n = n / 2;
//     // cout<<n<<endl;      //看起来更直观
//     count++;
//    }
//    cout<<count<<endl;
//    return 0;
// }



// //1-22
// #include <iostream>

// using namespace std;

// int add(int a, int b){
//     return a + b;
// }

// int main(){
//    int n, a, b;
//    cin>>n;
//    int C[n];
//    for(int i = 0; i < n; i++){
//         cin>>a>>b;
//         C[i] = add(a,b);
//     }
//     for(int i = 0; i < n; i++){
//         cout<<C[i]<<endl;
//     }
    
//    return 0;
// }



// //1-23
// #include <iostream>

// using namespace std;

// void Print(int n){
//     for(int i = 1; i <= n; i++)     //书籍有误
//         cout<<i<<endl;
// }

// int main(){
//    int n;
//    cin>>n;
//    Print(n);
//    return 0;
// }



// //1-24
// #include <iostream>

// using namespace std;

// void Good(int n){
//     for(int i = 0; i < 3; i++)
//         cout<<"very good!"<<endl;
// }

// int main(){
//    int n;
//    cin>>n;
//    if(n % 10 == 0){
//     Good(n);
//    }
//    return 0;
// }




// //1-25
// #include <iostream>

// using namespace std;

// void exchange(int a, int b){
//    int c = b;
//    b = a;
//    a = c;
//    cout<<a<<endl;
//    cout<<b<<endl;
// }

// int main()
// {
//    int a, b;
//    cin>>a>>b;
//    exchange(a, b);
//    cout<<a<<" "<<b<<endl;        //没有改变a、b
//    return 0;
// }





// //1-26
// #include <iostream>

// using namespace std;

// void exchange(int &a, int &b){      //引用 & 参数之后改变全局
//    int c = b;
//    b = a;
//    a = c;
//    cout<<a<<endl;
//    cout<<b<<endl;
// }

// int main()
// {
//    int a, b;
//    cin>>a>>b;
//    exchange(a, b);
//    cout<<a<<" "<<b<<endl;        //改变a、b
//    return 0;
// }




// //1-27
// #include <iostream>

// using namespace std;

// int addsum(int *a, int n){    // int *a 和 int a[] 都可以
//    int sum;
//    for(int i = 0; i < n; i++)
//       sum += a[i];
//    return sum;
// }

// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i = 0; i < n; i++){
//       cin>>arr[i];
//    }
//    cout<<addsum(arr, n)<<endl;
//    return 0;
// }




// //1-28
// #include <iostream>
// #include <string>
// using namespace std;

// void changestring(string &s){          //字符串参数函数  “& ”引用
//    for(int i = 0; i < s.length(); i++)
//       if(s[i] >= 'a' && s[i] <= 'z')
//          s[i] -= 32;                   //小写字母 -32 等于 大写字母
//    cout<<s<<endl;
// }

// int main(){
//    string str;
//    cin>>str;
//    changestring(str);
//    return 0;
// }




// //1-29
// #include <iostream>
// using namespace std;

// int GCD(int x, int y){        //最大公因数 
//    int t;
//    t = x % y;
//    while(t != 0){
//       x = y;
//       y = t;
//       t = x % y;
//    }
//    return y;
// }

// int LCM(int x, int y){
//    int g;
//    g = GCD(x, y);
//    return (x * y / g);        //最小公倍数 = 两数相乘 / 最大公因数 
// }     

// int main()
// {
//    int a, b;
//    cin>>a>>b;

//    cout<<GCD(a, b)<<" "<<LCM(a, b)<<endl;
//    return 0;
// }




// //1-30
// #include <iostream>
// #include <string>

// using namespace std;

// string half(string s){
//     int n = s.length() / 2;
//     char *str = new char[n];
//     for(int i = 0; i < n; i++){
//         str[i] = s[i];
//     }
//     return str;
// }

// float half(float a){
//     return a / 2;
// }

// int main()
// {
//     string st;
//     float a;
//     cin>>st>>a;
//     cout<<half(st)<<endl;
//     cout<<half(a)<<endl;
//    return 0;
// }



// //1-31
// #include <iostream>
// #include <string>

// using namespace std;

// template <class T>
// T add(T x, T y){
//     return x + y;
// }

// int main()
// {
//     int a, b;
//     double c, d;
//     cin>>a>>b>>c>>d;
//     cout<<add(a, b)<<" "<<add(c, d)<<endl;
//    return 0;
// }



// //练习1
// #include <iostream>
// #include <string>

// using namespace std;

// void InPut(int a[]){
//     for(int i = 0; i < 10; i++){
//     cin>>a[i];
//     }
// }

// void Show(int a[]){
//     for(int i = 0; i < 10; i++){
//         cout<<a[i]<<" ";
//     }
// }

// int Calcu(int a[]){
//     int sum = 0;
//     for(int i = 0; i < 10; i++){
//         sum += a[i];
//     }
//     int aver = sum / 10;
//     return aver;
// }


// int main()
// {
//     int a[10];
//     InPut(&a[10]);
//     Show(&a[10]);
//     cout<<endl;
//     cout<<Calcu(&a[10])<<endl;

//     return 0;
// }



// //练习-2
// #include <iostream>
// #include <string>

// using namespace std;

// int TiaoHe(int x, int y){
//     int add = x + y;
//     return (2 * x * y) / add;
// }

// int main()
// {
//     while(1){
//         int a, b;
//         cin>>a>>b;
//         if(a != 0 && b != 0){
//             cout<<TiaoHe(a, b)<<endl;
//         }
//         else    break;
//     }
//     return 0;
// }




// //1-32
// #include <iostream>
// #include <string>

// using namespace std;

// int a[100];

// void Print(int i){
//    cout<<a[i]<<endl;
//    if(i > 1)
//       Print(i - 1);
// }

// int main()
// {  
//    int n;
//    cin>>n;
//    for(int i = 1; i <= n; i++){
//       cin>>a[i];
//    }
//    // cout<<"\n"<<endl;
//    Print(n);
//    return 0;
// }


// // 1-33
// #include <iostream>
// #include <string>

// using namespace std;

// long long fac(int n){
//    if(n == 0 || n == 1)
//       return 1;
//    else 
//       return n * fac(n - 1);
// }

// int main()
// {
//    int n;
//    cin>>n;
//    cout<<fac(n)<<endl;
//    return 0;
// }




// //1-34   求斐波那契数列第n项
// #include <iostream>
// #include <string>

// using namespace std;

// int Fib(int n){
//    if(n == 1 || n == 2){
//       return 1;
//    }
//    return Fib(n - 1) + Fib(n - 2);
// }

// int main()
// {
//    int n;
//    cin>>n;
//    cout<<Fib(n)<<endl;
//    return 0;
// }





// //1-34 递加
// #include <iostream>
// #include <string>

// using namespace std;

// int Add(int n){
//    if(n == 1)
//       return 1;               //想要从n加到1停下就这样写
//    return n + Add(n - 1);
// }

// int main()
// {
//    int n;
//    cin>>n;
//    cout<<Add(n)<<endl;
//    return 0;
// }




// //1-35
// #include <iostream>
// #include <string>

// using namespace std;

// typedef struct Student{
//     string name;
//     string schoolnumber;
//     string gender;
//     int age;
//     float score;
// } Stu;
// int main(){
//     Stu a;
//     cin>>a.name>>a.schoolnumber>>a.gender>>a.age>>a.score;
//     cout<<a.name<<" "<<a.schoolnumber<<" "<<a.gender<<" "<<a.age<<" "<<a.score<<endl;

//     return 0;
// }




// //1-37
// #include <iostream>
// using namespace std;
// #define N 105
// int a[N];

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>>a[i];
//     }
//     cout<<endl;
//     for(int i = n - 1; i >= 0; i--){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }





// //1-38
// #include <iostream>
// #include <cstring>

// using namespace std;

// bool a[1005];

// int main()
// {   
//     memset(a, 0, sizeof(a));    //初始化a数组全部为0
//     int n, k;
//     bool first = 1;
//     cin>>n>>k;
//     for(int i = 1; i <= k; i++){
//         for(int j = 1; j <= n; j++){
//             if(j % i == 0)
//                 a[j] = !a[j];
//         }
//     }
//     // for(int j = 1; j <= n; j++){
//     //     if(a[j]){
//     //         if(first)
//     //             first = 0;
//     //         else
//     //             cout<<" ";
//     //         cout<<j;
//     //     }
//     // }

//     for(int j = 1; j <= n; j++){    //我自己写的
//         if(a[j]){
//             cout<<j;
//             cout<<" ";
//         }
//     }

//     return 0;
// }




// //1-39
// #include <iostream>
// #include <string>

// using namespace std;

// int a[105];

// int add(int a[], int n){
//     int sum;
//     for(int i = 0; i < n; i++){
//         sum += a[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     float aver;
//     for(int i = 0; i < n; i++){
//         cin>>a[i];
//     }
//     int s = add(a, n);
//     cout<<s<<endl;
//     aver = float(s) / n;
//     cout<<aver<<endl;
//     return 0;
// }






// //1-42
// #include <iostream>
// #include <cstring>
// #include <iomanip>

// using namespace std;
// int main(){
//     int n, x, y, total;
//     cin>>n;                     

//     int ** a = new int * [n];   //定义二维数组
//     for(int i = 0; i < n; i++){
//         a[i] = new int[n];
//         memset(a[i], 0, n * sizeof(int));
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout<<setw(5)<<a[i][j];
//         }
//         cout<<endl;                 //输出未填入数字的二维数组
//     }   

//     cout<<endl;
//     x = y = 0;
//     total = a[0][0] = 1;

//     while(total < n * n){                       //输入贪吃蛇数字
//         while(y + 1 < n && !a[x][y + 1])        //向右
//             a[x][++y] = ++total;    
//         while(x + 1 < n && !a[x + 1][y])        //向下
//             a[++x][y] = ++total;
//         while(y - 1 >= 0 && !a[x][y - 1])       //向左
//             a[x][--y] = ++total;
//         while(x - 1 >= 0 && !a[x - 1][y])       //向上  ，右侧的条件保证不会把a[0][0]换数字
//             a[--x][y] = ++total; 
//     }

//     for(int i = 0; i < n; i++){         //填充数字完毕输出
//         for(int j = 0; j < n; j++){
//             cout<<setw(5)<<a[i][j];
//         }
//         cout<<endl;
//     }

//     for(int i = 0; i < n; i++){         //释放空间
//         delete[] a[i];
//     }
//     delete[] a;

//     return 0;
// }





// //1-46
// #include <iostream>
// #include <cstring>
// #include <string>

// using namespace std;

// int count(string s){
//     int len, i = 0, num = 0;
//     len = s.length();
//     while(i < len){
//         if(s[i] == ' ')
//             num++;
//         i++;
//     }
//     return num;
// }
// int main(){
//     int num = 0;
//     string str;
//     getline(cin, str);
//     cout<<count(str)<<endl;

//     return 0;

// }




// //1-47
// #include <iostream>
// #include <string>

// using namespace std;

// string findMin(string s1, string s2){
//     if(s1 < s2)                      //string 可以直接比较大小
//         return s1;
//     else
//         return s2;
// }

// int main()
// {
//     string s1, s2, s3;
//     cin>>s1>>s2>>s3;
//     cout<<findMin(s1, findMin(s2, s3))<<endl;
//     return 0;
// }





