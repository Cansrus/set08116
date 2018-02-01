#define GLM_ENABLE_EXPERIMENTAL
#include <glm\glm.hpp>
#include <glm\gtc\constants.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\quaternion.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\projection.hpp>
#include <iostream>

using namespace std;
using namespace glm;

int main() 
{
	vec2 a(1.0f, 0.0f);
	vec2 b(-1.0f, 0.0f);
	vec3 c(0.0f, 1.0f, 0.0f);
	vec3 d(0.0f, -1.0f, 0.0f);
	vec4 e(0.0f, 0.0f, 1.0f, 0.0f);
	vec4 f(0.0f, 0.0f, -1.0f, 0.0f);

	vec3 g((a), 0.0f);
	vec4 h((b), 1.0f, 0.0f);
	vec2 i(c);
	vec4 j((d), 1.0f);
	vec2 k(e);
	vec3 l(f);

	vec2 m = a + b;
	vec2 n = a - b;
	vec3 o = c + d;
	vec3 p = c - d;
	vec4 q = e + f;
	vec4 r = e - f;

	vec2 s = 5.0f * i;
	vec2 t = k / 3.0f;
	vec3 u = 9.0f * p;
	vec3 v = o / 2.0f;
	vec4 w = 11.0f * j;
	vec4 x = r / 4.0f;

	float al = length(a);
	float ac = length(c);
	float ae = length(e);

	vec2 ni = normalize(i);
	vec3 ng = normalize(g);
	vec4 nr = normalize(r);

	float dit = dot(i, t);
	float dop = dot(o, p);
	float dqr = dot(q, r);

	vec2 pmn = proj(m, n);
	vec3 pov = proj(o, v);
	vec4 pwr = proj(w, r);

	vec3 xpo = cross(p, o);
	vec3 xuv = cross(u, v);
	
	mat4 ma(1.0f);
	mat4 ax(3.0f);
	mat3 bx(2.0f);
	mat4 cx((bx));
	mat3 nx(mat4(1.0f));
	mat4 ox(1.0f);

	mat4 mal = ma + ax;
	mat4 cxl = cx - ox;

	mat4 mla = mal / 5.0f;
	mat4 oxs = ox * 3.0f;

	mat4 lol = oxs * cxl;

	vec4 mv = lol * r;
	vec4 mva = mal * x;
	vec4 mvb = cx * vec4(pov, 1.0f);
	vec4 mvc = ax * mv;

	mat4 T = translate(mat4(1.0f), c);
	vec3 tr = T * vec4(u, 1.0f);

	mat4 Rx = rotate(mat4(1.0f), 0.5f, vec3(1.0f, 0.0f, 0.0f));
	mat4 Ry = rotate(mat4(1.0f), 0.5f, vec3(0.0f, 1.0f, 0.0f));
	mat4 Rz = rotate(mat4(1.0f), 0.5f, vec3(0.0f, 0.0f, 1.0f));
	vec3 rc = Ry * vec4(c, 0.0f);

	mat4 S = scale(mat4(1.0f), vec3(1.0f, 0.0f, 1.0f));
	vec3 sc = S * vec4(c, 0.0f);

	mat4 trans = S * (Rx * T);
	vec3 X = vec4(d,0.0f) * trans;
	
	quat qu;
	quat qu = rotate(quat(), 0.5f, vec3(0.0f, 0.0f, 1.0f));
	quat qx = rotate(quat(), 1.5f, vec3(1.0f, 0.0f, 0.0f));
	quat qy = rotate(quat(), 1.5f, vec3(0.0f, 1.0f, 0.0f));
	quat qz = rotate(quat(), 2.5f, vec3(0.0f, 0.0f, 1.0f));
	quat R = qz * qx * qy;
	
	mat4 Ree = mat4_cast(qu);
	vec3 = 




	


}
