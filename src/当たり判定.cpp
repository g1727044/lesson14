#include "�����蔻��.h"
#include "�T�[�r�X�E�e��.h"

namespace �G���W�� {
	bool �����蔻��::hitFlag(double c1, double c2, double cx1, double cx2, double cy1, double cy2)
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

	bool �e��::���e�̈ʒu(int index, double *x, double *y)
	{
		int �ő吔 = 3;
		for (int i = 0; i < �ő吔; i++) {
			if (i < index){
				�e�ۃf�[�^& r = �f�[�^�z��_[i];
				*x = r.�ʒu.x;
				*y = r.�ʒu.y;
				return true;
			}
			else {
				return false;
			}
		}
	}
}