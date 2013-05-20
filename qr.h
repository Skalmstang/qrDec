#ifndef QR_h
#define QR_h

#include <armadillo>
#include <vector>

using namespace std;
using namespace arma;

template <class T>
class QR {
 private:
  Mat<T> _Q, _R;
  
  
 public:
  QR(Mat<T> A);
  ~QR() {};
  vector< Mat<T> > getQR();
};


// ----------------------------------------
// Method implementations
template <class T>
QR<T>::QR(Mat<T> A) {
  _Q = A;
  _R = A;
}

template <class T>
vector< Mat<T> > QR<T>::getQR() {
  vector< Mat<T> > test(0);// = new vector< Mat<T> >(2);
  test.push_back(_Q); test.push_back(_R);
  return test;
}

#endif

