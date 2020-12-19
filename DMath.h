#ifndef SHAPE_H_
#define SHAPE_H_

#include<cmath>
const float Pi = 3.1415926535897;

class Shape
{
	private:
	double height,bottom,radius,upBottom,downBottom,length,width,sideLength,sideNumber,angle,arcLength;
	
	public:
	//set parameter
	void setHeight(double value)
	{
	    height = value;
	}
	double getHeight()
	{
	    return height;
	}
	void setBottom(double value)
	{
	    bottom = value;
	}
	double getBottom()
	{
	    return bottom;
	}
	void setRadius(double value)
	{
	    radius = value;
	}
	double getRadius()
	{
	    return radius;
	}
	void setUpBottom(double value)
	{
	    upBottom = value;
	}
	double getUpBottom()
	{
	    return upBottom;
	}
	void setDownBottom(double value)
	{
	    downBottom = value;
	}
	double getDoenBottom()
	{
	    return downBottom;
	}
	void setLength(double value)
	{
	    length = value;
	}
	double getLength()
	{
	    return length;
	}
	void setWidth(double value)
	{
	    width = value;
	}
	double getWidth()
	{
	    return width;
	}
	void setSideLength(
