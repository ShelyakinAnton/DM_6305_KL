t_Rat DIV_QQ_Q (t_Rat ftQ, t_Rat sdQ);

t_Rat DIV_QQ_Q (t_Rat ftQ, t_Rat sdQ)
{
	t_Nat ftN, sdN;
	t_Int ftZ, sdZ;
	
	//���������� ������� ������������� ����� �� ����� � �����������
	ftZ.Numer_Z = ftQ.Numer_Z;
	ftZ.Dgr_Z = ftQ.Dgr_Z;
	ftZ.Sgn_Z = ftQ.Sgn_Z;
	ftN.Denom_N = ftQ.Denom_N;
	ftN.Dgr_N = ftQ.Dgr_N;
	
	//���������� ������� ������������� ����� �� ����� � �����������
	sdZ.Numer_Z = sdQ.Denom_N;
	sdZ.Dgr_Z = sdQ.Dgr_N;
	sdZ.Sgn_Z = sdQ.Sgn_Z;
	sdN.Denom_N = sdQ.Numer_Z;
	sdN.Dgr_N = sdQ.Dgr_Z;
	
	ftZ = MUL_ZZ_Z (ftZ, sdZ); //��������� ����� ����� (����������)
	
	//������ ��������� ������������� �����
	ftQ.Numer_Z = ftZ.Numer_Z;
	ftQ.Dgr_Z = ftZ.Dgr_Z;
	ftQ.Sgn_Z = ftZ.Sgn_Z;
	
	ftN = MUL_NN_N (ftN, sdN); //��������� ����������� ����� (������������)
	
	//������ ����������� ������������� �����
	ftQ.Denom_N = ftN.Denom_N;
	ftQ.Dgr_N = ftN.Dgr_N;	
	
	RED_Q_Q (ftQ); //���������� �����
	
	return ftQ;
	
	//�������� - ������� ��������
	//��� - ������� ��������
	//����� - 5-10 �����
}
