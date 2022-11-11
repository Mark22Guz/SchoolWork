#include <iostream>
#include <iomanip>
#include "clockType.h"

using namespace std;

void clockType :: setTime(int h, int m, int s)
{
  if(0 < h and h < 24)
  {
    hr = h;
  }
  else
  {
    hr = 0;
  }

  if(0 < m and m <60)
  {
    min = m;
  }
  else
  {
    min = 0;
  }

  if( 0 < s and s < 60)
  {
    sec = s;
  }
  else
  {
    sec = 0;
  }

}


void clockType :: getTime(int& hours, int& minutes, int& seconds) const
{
  hours = hr;
  minutes = min;
  seconds = sec;
}


int clockType :: getHours()
{
  return hr;
}

int clockType :: getMinutes()
{
  return min;
}

int clockType :: getSeconds()
{
  return sec;
}


void clockType :: setHours(int h)
{
  hr = h;
}

void clockType :: setMinutes(int m)
{
  min = m;
}

void clockType :: setSeconds(int s)
{
  sec = s;
}

