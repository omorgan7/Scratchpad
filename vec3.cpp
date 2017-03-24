#include <cstdlib>

template <typename T>
struct vec3{
    union{
        struct{
            T x, y, z;
        };
        T coords[3];
    };
};

template<typename T>
inline vec3<T> Vec3CrossProduct(vec3<T> u, vec3<T> v){
    vec3<T> crossProduct;
    crossProduct.x = u.y*v.z - u.z*v.y;
    crossProduct.y = u.z*v.x - u.x*v.z;
    crossProduct.z = u.x*v.y - u.y*v.x;
    return crossProduct;
}

int main(){
    vec3<float> u,v;
    for(int j = 0; j<10000000; j++){
        for(int i =0; i<3; i++){
            u.coords[i] = (float)std::rand();
            v.coords[i] = (float)std::rand();
        }
        auto cp = Vec3CrossProduct(u,v);
    }
}