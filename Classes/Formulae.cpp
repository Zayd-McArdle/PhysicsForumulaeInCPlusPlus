#include "Formulae.h"
#include <cmath>
#pragma region Formula Base
inline bool FormulaBase::fieldInitialised(double *field)
{
    return *field != 0;
}
inline void FormulaBase::setTop(double* value){
    m_top = *value;
}
inline void FormulaBase::setLeft(double* value){
    m_left = *value;
}
inline void FormulaBase::setRight(double* value){
    m_right = *value;
}
#pragma endregion
#pragma region Simple Formula
inline double SimpleFormula::getTop() { 
    return m_left * m_right; 
}
inline double SimpleFormula::getLeft() { 
    return m_top / m_right; 
}
inline double SimpleFormula::getRight() { 
    return m_top / m_left; 
}
#pragma endregion
#pragma region Complex Formula
inline double ComplexFormula::getTop() { 
    return 0.5 * m_left * pow(m_right, 2); 
}
inline double ComplexFormula::getLeft() { 
    return m_top / (0.5 * pow(m_right, 2)); 
}
inline double ComplexFormula::getRight() { 
    return sqrt(2 * m_top / m_left);
}
#pragma endregion
#pragma region Extended Formula
inline double ExtendedFormula::getTop()
{
    return m_left * m_centre * m_right;
}

inline double ExtendedFormula::getLeft()
{
    return m_top / (m_centre * m_right);
}

inline double ExtendedFormula::getCentre()
{
    return m_top / (m_left * m_right);
}

inline void ExtendedFormula::setCentre(double *value)
{
    m_centre = *value;
}

inline double ExtendedFormula::getRight()
{
    return m_top / (m_left * m_centre);
}
#pragma endregion