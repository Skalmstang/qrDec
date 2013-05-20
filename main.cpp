
#include <armadillo>
#include <vector>
#include "qr.h"

using namespace std;
using namespace arma;

int main() {

  //Simple matrix to test out.
  Mat<double> A;
  A << 1 << 0 << 0 << endr
    << 0 << 1 << 0 << endr
    << 0 << 0 << 1 << endr;
  cout << "Identity matrix to make check with" << endl << A << endl;


  QR<double> qr = QR<double>(A);

  vector< Mat<double> > vec = qr.getQR();
  
  cout << vec.size() << endl;
  Mat<double> Q = vec[0];

  cout << Q << endl;
  
  // vector< Mat<double> > vec = qr.getQR();  
}

  
