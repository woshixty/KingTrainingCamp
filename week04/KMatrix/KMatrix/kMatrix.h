// -------------------------------------------------------
// kMatrix.h
// �����ߣ� xie tingyu
// ����ʱ�䣺 2022/5/21
// ���������� ��������࣬����ײ�����в�ͬ�ľ���洢�߼��������ṩһ���Ĺ���
// Copyright 2013 Kingsoft
// --------------------------------------------------------

#ifndef _WEEK04_KMATRIX_BASE_H_
#define _WEEK04_KMATRIX_BASE_H_

#include <algorithm>
#include <iostream>
#include <numeric>
#include <map>

enum OperatorType
{
    addType, minusType, multiplyType
};

template<typename T>
class KMatrix
{
public:
    // TODO(xie tingyu)  kMatrix �� KMatrixIterator �����໥���ñ˴˵�.h�ļ������ٽ� KMatrixIterator ��һ�����
    //  ����������ʵ����ط���
    //  virtual KMatrixIterator<T> begin() = 0;
    //  virtual KMatrixIterator<T> end() = 0;

    size_t getRows();
    size_t getCols();

    virtual void setData(size_t row, size_t col, T value) = 0;
    virtual T getData(size_t row, size_t col) const = 0;
    virtual T& getDataRef(size_t row, size_t col) = 0;
    virtual T* getDataPoint(size_t row, size_t col) = 0;

    virtual void eraseRow(size_t row) = 0;
    virtual void eraseColumns(size_t col) = 0;

    /**
     * �������ָ����������ָ��
     * �����Ӽ��˷�ʱͨ���ýӿڻص���̬new����
     * @param row
     * @param col
     * @return ָ����������ָ��
     */
    virtual KMatrix<T>* getRightPointer(size_t row, size_t col) const = 0;

    void print() const;

    void judgeRowCol(size_t row, size_t col) const;

    KMatrix<T>* transposeBase() const;

    /**
     * ����ʵ��set �� get λ�ã�row��col���Ľӿ��Ժ󣬿��Խ���ͬ����ŵ�������ʵ��
     * �Ӷ����ٴ�������
     * @param other
     * @param opeType �������ͣ��ӡ�������
     * @return ָ����������ָ��
     */
    KMatrix<T>* operation(KMatrix<T> const& other, OperatorType opeType);

    bool sameMatrix(KMatrix<T> const& other);

    // TODO ����ӿ���������������ط���������ʵ�ֵײ�洢�߼���ͬ�ľ�������㣬����ֻ�ܷ��ظ���ָ�룬����ʵ�����Ӳ����������ȴ�Ѱ�Ҹ��õĽ���취
    //  virtual KMatrix<T>* operator+(KMatrix<T> const &other) = 0;
    //  virtual KMatrix<T>* operator-(KMatrix<T> const &other) = 0;
    //  virtual KMatrix<T>* operator*(KMatrix<T> const &other) = 0;
    //  virtual KMatrix<T>* transposeBase() const = 0;

protected:
    size_t m_row{}, m_column{};
};

template<typename T>
size_t KMatrix<T>::getRows() { return m_row; }

template<typename T>
size_t KMatrix<T>::getCols() { return m_column; }

template<typename T>
void KMatrix<T>::print() const {
    for (size_t i = 0; i < KMatrix<T>::m_row; i++)
    {
        for (size_t j = 0; j < KMatrix<T>::m_column; j++)
        {
            std::cout << getData(i, j) << "\t";
        }
        std::cout << std::endl;
    }
}

template<typename T>
void KMatrix<T>::judgeRowCol(size_t row, size_t col) const
{
    if (row < 0 || row >= m_row || col < 0 || col >= m_column)
        throw std::out_of_range("Խ�����");
}

template<typename T>
KMatrix<T>* KMatrix<T>::transposeBase() const
{
    // ��������ֵ
    KMatrix<T>* res = getRightPointer(m_column, m_row);
    for (size_t i = 0; i < KMatrix<T>::m_row; ++i)
    {
        for (size_t j = 0; j < KMatrix<T>::m_column; ++j)
        {
            res->setData(j, i, getData(i, j));
        }
    }
    return res;
}

template<typename T>
KMatrix<T>* KMatrix<T>::operation(const KMatrix<T>& other, OperatorType opeType)
{
    size_t row = other.m_row, column = other.m_column;
    KMatrix<T>* res;
    switch (opeType)
    {
    case addType:
    case minusType:
    {
        if (m_row != row || m_column != column)
            throw std::invalid_argument("����ṹ���ܼӼ�");
        res = getRightPointer(row, column);
        for (size_t i = 0; i < row; ++i)
        {
            for (size_t j = 0; j < column; ++j)
            {
                if (opeType == addType)
                    res->setData(i, j, getData(i, j) + other.getData(i, j));
                else if (opeType == minusType)
                    res->setData(i, j, getData(i, j) - other.getData(i, j));
            }
        }
        break;
    }
    case multiplyType:
    {
        if (m_row != column || m_column != row)
            throw std::invalid_argument("����ṹ�������");
        res = getRightPointer(m_row, column);
        for (size_t i = 0; i < KMatrix<T>::m_row; ++i)
        {
            for (size_t j = 0; j < column; ++j)
            {
                T data = 0;
                for (size_t k = 0; k < KMatrix<T>::m_column; ++k)
                {
                    data += getData(i, k) * other.getData(k, j);
                }
                res->setData(i, j, data);
            }
        }
        break;
    }
    default:
        res = getRightPointer(0, 0);
    }
    return res;
}

template<typename T>
bool KMatrix<T>::sameMatrix(const KMatrix<T>& other)
{
    if (m_row != other.m_row || m_column != other.m_column)
        return false;
    for (int i = 0; i < m_row; ++i)
    {
        for (int j = 0; j < m_column; ++j)
        {
            if (getData(i, j) != other.getData(i, j))
                return false;
        }
    }
    return true;
}


#endif // _WEEK04_KMATRIX_BASE_H_