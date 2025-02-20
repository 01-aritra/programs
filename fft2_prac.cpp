#include<iostream>
#include<complex>
#include<cmath>
using namespace std;

const double PI = acos(-1);
complex<double> * FFT (complex<double> * S,int N,bool invert)
{
    complex<double> * A = new complex<double>[N];

    if (N == 1)
    {
        A[0] = S[0];
        return A;
    }
    else
    {
        complex<double> * x = new complex<double>[N/2];
        complex<double> * y = new complex<double>[N/2];

        for (int i = 0; i< N/2; i++)
        {
            x[i] = S[2*i];
            y[i] = S[2*i +1];
        }

        complex<double>* B = FFT(x,N/2,invert);
        complex<double> * C = FFT(y, N/2 , invert);

        delete [] x;
        delete [] y;

        double theta = 2 * PI/2 *(invert ? -1 : 1);
        complex<double> P(1) , W(cos(theta),sin(theta));

        for (int r = 0; r< N/2; r++)
        {
            complex<double> term = P * C[r];
            A[r] = B[r] + term;
            A[r + N/2] = B[r] - term;
            if (invert)
            {
                A[r] /= 2;
                A[r + N/2] /= 2;
            } 
            P = P * W;
        }
        delete [] B;
        delete [] C;
        return A;
    }
}


int main()
{
    int N;
    cout << "Enter the size: ";
    cin >> N;
}