#include <stdio.h>
void input(float a[][20],int n){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n+1;j++){
			scanf("%f",&a[i][j]);
}}
void output(float a[][20],int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n+1;j++)
				printf("%5.3f\t",a[i][j]);
				printf("\n");
}}
void swap(float a[][20],int i,int j,int n){
	for(int k=1;k<=n;k++){
		float temp = a[i][k];
		a[i][k] = a[k][j];
		a[k][j] = temp;
}}
void biendoi(float a[][20],int n){
	int i,j,k;
	for(i=1;i<n;i++){
		if(a[i][i]!=0){
			for(j=i+1;j<=n;j++){
				float m=-a[j][i]/a[i][i];	
				for(k=i;k<=n+1;k++)	{
					a[j][k]+=a[i][k]*m;
}}}
		else {
			for(j=i+1;j<=n;j++){
				swap(a,i,j,n);
				}
		}
	output(a,n);
	printf("\n");
}}
void outputnghiem(float a[][20],float x[10],int n ){
	int i,j;
	for(i=n;i>=1;i--){
		float s=0;
		for(j=i+1;j<=n;j++){
			s+=a[i][j]*x[j];
		}
		x[i]=(a[i][n+1]-s)/a[i][i];
	}
	for(i=1;i<=n;i++){
		printf("x[%d]=%5.3f\t",i,x[i]);
}}
int main(){
	int i,j,n;
	float a[20][20],x[10];
	printf("Nhap n: "); scanf("%d",&n);
	printf("Nhap ma tran:\n");
	input(a,n);
	printf("\n");
	biendoi(a,n);
	outputnghiem(a,x,n);
	return 0;
}
