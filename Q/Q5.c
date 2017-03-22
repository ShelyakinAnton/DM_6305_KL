t_Rat ADD_QQ_Q(t_Rat ftQ, t_Rat sdQ);
/*
	fgEqual - ���� �������� ��������� ������������ ��� ������ ������ COM_NN_D
*/

t_Rat ADD_QQ_Q(t_Rat ftQ, t_Rat sdQ)
{
	int fgEqual;
	t_Nat ftN, sdN, N;
	t_Int ftZ, sdZ, Z1, Z2;
	
	//���������� ������� ������������� ����� �� ����� � �����������
	ftZ.Numer_Z = ftQ.Numer_Z;
	ftZ.Dgr_Z = ftQ.Dgr_Z;
	ftZ.Sgn_Z = ftQ.Sgn_Z;
	ftN.Denom_N = ftQ.Denom_N;
	ftN.Dgr_N = ftQ.Dgr_N;
	
	//���������� ������� ������������� ����� �� ����� � �����������
	sdZ.Numer_Z = sdQ.Numer_Z;
	sdZ.Dgr_Z = sdQ.Dgr_Z;
	sdZ.Sgn_Z = sdQ.Sgn_Z;
	sdN.Denom_N = sdQ.Denom_N;
	sdN.Dgr_N = sdQ.Dgr_N;
	
	fgEqual = COM_NN_D(ftN, sdN); //�������� ������������ ������ � ������ ������ �� ���������

	if (equal != 0)
	{//� ������, ���� ����������� �� �����, �������� ����� � ������ �����������
		sdZ.Numer_Z = sdQ.Denom_N;
		sdZ.Dgr_Z = sdQ.Dgr_N;
		sdZ.Sgn_Z = sdQ.Sgn_Z;
		
		Z1 = MUL_ZZ_Z(ftZ, sdZ); //��������� ��������� ������ ����� �� ����������� ������ �����
		
		
		sdZ.Numer_Z = sdQ.Numer_Z;
		sdZ.Dgr_Z = sdQ.Dgr_Z;
		sdZ.Sgn_Z = sdQ.Sgn_Z;
		ftZ.Numer_Z = sdQ.Denom_N;
		ftZ.Dgr_Z = sdQ.Dgr_N;
		sdZ.Sgn_Z = sdQ.Sgn_Z;

		Z2 = MUL_ZZ_Z(sdZ, ftZ); //��������� ��������� ������ ����� �� ����������� ������ �����
	
	
		ftN.Denom_N = ftQ.Denom_N;
		ftN.Dgr_N = ftQ.Dgr_N;
		sdN.Denom_N = sdQ.Denom_N;
		sdN.Dgr_N = sdQ.Dgr_N;
		
		N = MUL_NN_N(ftN, sdN); //��������� ������������ ���� ������ ����� �����, ��������� - ����� ����������� ���� �������� ������
	}

	ADD_ZZ_Z(Z1, Z2); //��������� ���������� ������ � ������ �����

	ftQ.Numer_Z = Z.Numer_Z;
	ftQ.Dgr_Z = Z.Dgr_Z;
	ftQ.Sgn_Z = Z.Sgn_Z;
	ftQ.Denom_N = N.Denom_N;
	ftQ.Dgr_N = N.Dgr_N;
	
	RED_Q_Q(ftQ); //���������� ���������� �����
	
	return ftQ;
	
	//�������� - ������� ��������
	//��� - ������� ��������, ������� �������� (���.)
	//����� - 5-7 �����
}
