#include <iostream> 
using namespace std; 

struct Point 
{ 
	int x; 
	int y; 
}; 

// Checka se o ponto q esta no segmento pr
bool onSegment(Point p, Point q, Point r) 
{ 
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
	return true; 

	return false; 
} 

// Encontrando a orientacao
int orientation(Point p, Point q, Point r) 
{ 
	int val = (q.y - p.y) * (r.x - q.x) - 
			(q.x - p.x) * (r.y - q.y); 

	if (val == 0) return 0; // collinear 

	return (val > 0)? 1: 2; // horario ou anti horario
} 

// Retorna true se p1q1 intercepta p2q2
bool Intersect(Point p1, Point q1, Point p2, Point q2) 
{ 
	int o1 = orientation(p1, q1, p2); 
	int o2 = orientation(p1, q1, q2); 
	int o3 = orientation(p2, q2, p1); 
	int o4 = orientation(p2, q2, q1); 

	if (o1 != o2 && o3 != o4) 
		return true; 

	// Casos especiais
	if (o1 == 0 && onSegment(p1, p2, q1)) return true; 

	if (o2 == 0 && onSegment(p1, q2, q1)) return true; 

	if (o3 == 0 && onSegment(p2, p1, q2)) return true; 

	if (o4 == 0 && onSegment(p2, q1, q2)) return true; 

	return false; // Nao se encaixa em nenhum dos casos
} 

int main() 
{ 
    Point p1,q1,p2,q2;

    cin >> p1.x >> p1.y >> q1.x >> q1.y >> p2.x >> p2.y >> q2.x >> q2.y;

    if(Intersect(p1,q1,p2,q2))
        cout << "SIM" << endl;
    else
        cout << "NAO" << endl;

	return 0; 
} 
