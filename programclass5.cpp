#include <iostream>
#include <cmath>
using namespace std;

struct data{
    int x;
    int y;
    int z;
};

int main(){
    float jarak, max=0;
    int id=0;
    data p[13];
        p[0].x = -10, p[0].y=5, p[0].z=-2;
        p[1].x = 3, p[1].y=-2, p[1].z=-4;
        p[2].x = -10, p[2].y=-6, p[2].z=-6;
        p[3].x = 4, p[3].y=5, p[3].z=4;
        p[4].x = 3, p[4].y=-5, p[4].z=10;
        p[5].x = 7, p[5].y=-6, p[5].z=9;
        p[6].x = -2, p[6].y=-5, p[6].z=-4;
        p[7].x = -6, p[7].y=-9, p[7].z=3;
        p[8].x = 4, p[8].y=-5, p[8].z=-7;
        p[9].x = -3, p[9].y=-9, p[9].z=-2;
        p[10].x = 8, p[10].y=-5, p[10].z=-4;
        p[11].x = -3, p[11].y=-4, p[11].z=9;
        p[12].x = -2, p[12].y=3, p[12].z=-4;

    cout << "Particles' group in areas of 3D Cartesian." << endl;
    for(int i=0;i<13;i++){
        if(p[i].x > 0 && p[i].y > 0 && p[i].z > 0){
            cout << "Octant 1: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x < 0 && p[i].y > 0 && p[i].z > 0){
            cout << "Octant 2: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x < 0 && p[i].y < 0 && p[i].z > 0){ 
            cout << "Octant 3: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x > 0 && p[i].y < 0 && p[i].z > 0){ 
            cout << "Octant 4: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x > 0 && p[i].y > 0 && p[i].z < 0){ 
            cout << "Octant 5: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x < 0 && p[i].y > 0 && p[i].z < 0){ 
            cout << "Octant 6: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else if(p[i].x > 0 && p[i].y < 0 && p[i].z < 0){
            cout << "Octant 8: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }else{
            cout << "Octant 7: p" << i+1 << " (" << p[i].x << " " << p[i].y << " " << p[i].z << ") " << endl;
        }
    }

    for(int i=0;i<13;i++){
        jarak = sqrt((pow(p[i].x,2)+ pow(p[i].y,2)+ pow(p[i].z,2)));
        if(jarak > max){
            max = jarak;
            id = i;
        }
    }
    cout << endl << "Particle farthest away from (0,0,0) is p" << id+1 << "(" << p[id].x << " " << p[id].y << " " << p[id].z << ")" << endl;  

    cout << endl << "Magnitude of each particles: " << endl;
    for(int i=0;i<13;i++){
        jarak = sqrt((pow(p[i].x,2)+ pow(p[i].y,2)+ pow(p[i].z,2)));
        cout << "p" << i+1 << " is " << jarak << endl;
        if(jarak > max){
            max = jarak;
            id = i;
        }
    }
}