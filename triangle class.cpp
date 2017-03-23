#include <iostream>

template <typename T>
struct vec3{
    union{
        struct{
            T x, y, z;
        };
        T coords[3];
    };
};

template <typename T>
class triangle{
    public:
    triangle(){};
    vec3<T> vertices;
    vec3<T> normals;
};

int main(){
    triangle<float> t;
    for(int i =0; i<3; i++){
        t.vertices.coords[i] = (float) i + 0.5f;
    }
    std::cout<<t.vertices.x<<"\n";
    std::cout<<t.vertices.y<<"\n";
    std::cout<<t.vertices.z<<"\n";
    return 0;
}