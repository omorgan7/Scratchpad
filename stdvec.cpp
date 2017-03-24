#include <vector>
#include <cstdlib>

inline std::vector<float> Vec3CrossProduct(std::vector<float> u, std::vector<float> v){
    std::vector<float> crossProduct = std::vector<float>(3);
    crossProduct[0] = u[1]*v[2] - u[2]*v[1];
    crossProduct[1] = u[2]*v[0] - u[0]*v[2];
    crossProduct[2] = u[0]*v[1] - u[1]*v[0];
    return crossProduct;
}

int main(){
    std::vector<float > u=std::vector<float>(3);
    std::vector<float > v=std::vector<float>(3);
    for(int j = 0; j<10000000; j++){
        for(int i =0; i<3; i++){
            u[i] = (float)std::rand();
            v[i] = (float)std::rand();
        }
        auto cp = Vec3CrossProduct(u,v);
    }
}