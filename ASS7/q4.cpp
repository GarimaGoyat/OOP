👉 Arithmetic (+, -, *, /)
Distance operator+(Distance &d){
    return Distance(x + d.x, y + d.y);
}

👉 Relational ( < , == )
bool operator < (const Distance &d){
    return x < d.x;      // compare x values
}

👉 Logical (&&)
bool operator && (const Distance &d){
    return (x && d.x);   // true if both non-zero
}

👉 Bitwise (&)
Distance operator&(Distance &d){
    return Distance(x & d.x, y & d.y);
}