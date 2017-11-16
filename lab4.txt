 #include<iostream>
	#include<math.h>
	#define n 5
	

	using namespace std;
	
		class Matrix	{
	private:
		int a[n][n];
		int sum[n];
		int i, j, k, c, pr, o;
	public:
		void matrix_input();
		void matrix_output();
		void matrix_sorting();
		void average_product_value();
		
	};
	
		void Matrix::matrix_input()	{
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << "Please, enter the element [" << i+1 << ";" << j+1 << "]";
				cin >> a[i][j];
				cout << endl;
			}
		}
	}
	
		void Matrix::matrix_output()	{
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (j == 0) cout << endl;
				cout << a[i][j] << "\t";
			}
		}
	}
	
	
	  
	
	
	void Matrix::matrix_sorting() {
  for(i = 0; i < n; i++) {
   for(k = n-1; k >=0 ; k--) {
     for(j = 0; j < k; j++)	  {
 	    if(a[i][j] < a[i][j+1])  	{
	  	  c = a[i][j];
	      a[i][j] = a[i][j+1];
	      a[i][j+1] = c;
	  	}
	  }
   }
  }
 }

	void Matrix::average_product_value() {
    int result = 0;

    for (i = 0;i < n - 1;i++) {
        result += a[j][i];
    }
    for (o=0; o < n ; o++) {
       cout << "\nMid aref:\n" << result / (n - o) << endl << endl;

    }
    
     cout << "\nMid geom:\n" << result / (n - 1) << endl << endl;

}
	

 int main()	{	Matrix X;
		X.matrix_input();
		cout << endl;
		cout << "Entered matrix:\n";
		X.matrix_output();
		cout << endl;
		X.matrix_sorting();
		cout << endl;
		X.average_product_value();
		cout << endl;
		X.matrix_output();
	}