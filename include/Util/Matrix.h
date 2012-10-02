class Matrix{
      private:
              vector< vector<Real> > FullMatrix;
      public:
             Matrix operator* (Matrix);
             int getNum_at(int, int);
             void setNum_at(int, int);
}
