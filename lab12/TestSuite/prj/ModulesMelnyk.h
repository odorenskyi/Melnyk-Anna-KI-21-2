#ifndef MODULESMELNYK_H_INCLUDED
#define MODULESMELNYK_H_INCLUDED

class ClassLab12_Melnyk{
public:
    ClassLab12_Melnyk(){}
    ClassLab12_Melnyk(float height, float wight, float lenght);

    void setTabletHeight(float height);
    float getTabletHeight();
    void setTabletWidth(float width);
    float getTabletWidth();
    void setTabletLength(float length);
    float getTabletLength();
    float getTabletSquare();

private:
    float height = 1.0;
    float width = 10.0;
    float length = 20.0;
};
ClassLab12_Melnyk::ClassLab12_Melnyk(float height, float wight, float lenght){
    this->height = height;
    this->length = length;
    this->width = width;
}
//set
void ClassLab12_Melnyk::setTabletHeight(float height){
    this->height = height;
}

void ClassLab12_Melnyk::setTabletLength(float length){
    this->length = length;
}

void ClassLab12_Melnyk::setTabletWidth(float width){
    this->width = width;
}

//get
float ClassLab12_Melnyk::getTabletHeight(){
    return height;
}

float ClassLab12_Melnyk::getTabletLength(){
    return length;
}

float ClassLab12_Melnyk::getTabletWidth(){
    return width;
}

float ClassLab12_Melnyk::getTabletSquare(){
    return (2 * (length * width) + length * height + width * height);
}
#endif // MODULESMELNYK_H_INCLUDED
