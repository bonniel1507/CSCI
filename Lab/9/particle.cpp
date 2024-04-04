// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: 9f

#include <iostream>
using namespace std;

class Particle {
public:
    double x;
    double y;
    double z;
    double vx;
    double vy;
    double vz;
};

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
    Particle *a = new Particle;
    a->x = x;
    a->y = y;
    a->z = z;
    a->vx = vx;
    a->vy = vy;
    a->vz = vz;
    return a;
}
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
    p->vx = vx;
    p->vy = vy;
    p->vz = vz;
}
// get its current position
Coord3D getPosition(Particle *p){
    Coord3D h = {p->x, p->y, p->z};
    return h;
}
// update particle's position after elapsed time dt
void move(Particle *p, double dt){
    p->x *= dt;
    p->y *= dt;
    p->z *= dt;
}
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
    delete p;
}

int main() {
     // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);

    return 0;
}
