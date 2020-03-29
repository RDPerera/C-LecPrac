
int* g(int x){
	int y;
	y=x;
	
	printf("%p\n %d \n",&x,x);
	printf("%p\n %d \n",&y,y);
	return &y;
}

int main(){
	int *x,*y;
	x=g(1000);
	printf("%p\n %d \n",x,*x);
	y=g(250);
	printf("%p\n %d \n",x,*x);
	printf("%p\n %d \n",x,*x);
	printf("%p\n %d \n",y,*y);
	return 0;
}

