#include "当たり判定.h"
#include "サービス・弾丸.h"

namespace エンジン {
	bool 当たり判定::hitFlag(double c1, double c2, double cx1, double cx2, double cy1, double cy2)
	{
		double hlength = c1 + c2;
		double xlength = cx1 - cx2;
		double ylength = cy1 - cy2;

		if (hlength * hlength >= xlength * xlength + ylength * ylength) {
			return true;
		}
		else {
			return false;
		}
	}

	bool 弾丸::自弾の位置(int index, double *x, double *y)
	{
		int 最大数 = 3;
		for (int i = 0; i < 最大数; i++) {
			if (i < index){
				弾丸データ& r = データ配列_[i];
				*x = r.位置.x;
				*y = r.位置.y;
				return true;
			}
			else {
				return false;
			}
		}
	}
}