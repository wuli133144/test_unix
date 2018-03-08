
int main()
{ 

	//float * const * x  ==> float *[x1]  x1 就是一个指向float类型的指针，x1=float const *x1,所以x1就是一个指向指针常量的指针

	//test float *const *x 
	float a = 1.0f;
	float  *p_ptr = &a;//float *ptr<====>float *[x1]
	float *const *x = &p_ptr;

	 float arr[] = { 1.2f,1.3f };
	 const float * parr = (float *)arr;
	 const float * const *pparr =&parr;
	//test const float * const * x<====> const float *[x1],x1就是一个指向常量指针，就是x1指向的地址不可以变
	//x1=const * x,说明[const *x]是一个常量指针，所以x就是一个指向常量指针的常量指针 
	const float * p_c = &a;//p_c就是常量指针

	//构造一个指向常量指针的常量指针
	//这个时候y不可更改，*y也不可更改
	//例如：y=&c,或者*y=xxxx,这都是错误的
	
	const float *const * y = &p_c;

	addfloat(y, x);

	getchar();
	return 0;
}
