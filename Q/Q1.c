t_Rat RED_QQ_Q (t_Rat Q);
/*
	�������� �� ���� ������������ ����� (������ �� ������ ������, �������� ������ ������������ �����)

	GCD - ��� ��������� � ����������� �����
*/

t_Rat RED_QQ_Q (t_Rat Q)
{
	t_Nat GCD;
	t_Int GCDforZ;
	t_Nat N;
	t_Int Z;
	
	//���������� ������������� ����� �� ����� � �����������
	Z.Numer_Z = Q.Numer_Z;
	Z.Dgr_Z = Q.Dgr_Z;
	Z.Sgn_Z = Q.Sgn_Z;
	N.Denom_N = Q.Denom_N;
	N.Dgr_N = Q.Dgr_N;
	
	GCD = GCF_NN_N(ABS_Z_N(Z), N); //��� ��������� � ����������� �����
	
	GCDforZ.Numer_Z = GCD.Denom_N;
	GCDforZ.Dgr_Z = GCD.Dgr_N;
	GCDforZ.Sgn_Z = 0;
	
	Z = DIV_ZZ_Z (Z, GCDforZ); //������� ��������� �� ��� ��������� � �����������
	
	//������ ��������� ������������� �����
	Q.Numer_Z = Z.Numer_Z;
	Q.Dgr_Z = Z.Dgr_Z;
	Q.Sgn_Z = Z.Sgn_Z;
	
	N = DIV_NN_N (N, GCD); //������� ����������� �� ��� ��������� � �����������
	
	//������ ����������� ������������� �����
	Q.Denom_N = N.Denom_N;
	Q.Dgr_N = N.Dgr_N;
	
	return Q;
	
	//�������� - ���� ���������
	//��� - ���� ���������, ������� ��������(���.)
	//����� - 10-15 �����
}
