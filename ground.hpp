#ifndef GROUND_HPP_
#define GROUND_HPP_

#include "abcgOpenGL.hpp"

class Ground
{
public:
  void create(GLuint program);
  void paint();
  void destroy();
  float m_maxLimit = 4; 

private:
  GLuint m_VAO{};
  GLuint m_VBO{};
  int m_numOfBlocks = 10;
  float m_side = 0.2;

  GLint m_modelMatrixLoc{};
  GLint m_colorLoc{};
};

#endif
