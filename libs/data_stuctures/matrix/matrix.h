#ifndef INC_MATRIX_H
#define INC_MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct matrix {
     int ** values ; // элементы матрицы
    size_t nRows ; // количество рядов
    size_t nCols ; // количество столбцов
     } matrix ;

 typedef struct position {
     size_t rowIndex ;
     size_t colIndex ;
     } position ;

matrix getMemMatrix(size_t nRows, size_t nCols);

matrix *getMemArrayOfMatrices(size_t nMatrices, size_t nRows, size_t nCols);

void freeMemMatrix(matrix m);

void freeMemMatrices(matrix *ms, size_t nMatrices);

void inputMatrix(matrix m);

void inputMatrices(matrix *ms, size_t nMatrices);

void outputMatrix(matrix m);

void outputMatrices(matrix *ms, size_t nMatrices);

void swapRows(matrix m, size_t i1, size_t i2);

void swapColumns(matrix m, size_t j1, size_t j2);

void insertionSortRowsMatrixByRowCriteria(matrix m,
                                          int (*criteria)(int*, size_t)) ;
void insertionSortColsMatrixByColCriteria(matrix m,
                                          int (*criteria)(int*, size_t));
bool isSquareMatrix(matrix m);

bool areTwoMatricesEqual(matrix m1, matrix m2);

bool isEMatrix(matrix m);

bool isSymmetricMatrix(matrix m);

void transposeSquareMatrix(matrix m);

position getMinValuePos(matrix m);

position getMaxValuePos(matrix m);

matrix createMatrixFromArray(const int *a, size_t nRows,
                             size_t nCols);

matrix *createArrayOfMatrixFromArray(const int *values,
                                     size_t nMatrices,
                                     size_t nRows,
                                     size_t nCols);

#endif