int INT_Q_B (t_Rat Q);

int INT_Q_B (t_Rat Q)
{
	t_Nat N1, N2, Rem;
	t_Int Z;
	
	Z.Numer_Z = Q.Numer_Z;
	Z.Dgr_Z = Q.Dgr_Z;
	Z.Sgn_Z = Q.Sgn_Z;
	N1.Denom_N = Q.Denom_N;
	N1.Dgr_N = Q.Dgr_N;
	
	N2 = ABS_Z_N (Z);
	
	//��������� ��������� � �����������
	if ((COM_NN_D (N1, N2)) < 2)
	{
		Rem = MOD_NN_N (N1, N2); //���������� ������� �� ������� ��������� �� �����������
		
		//�������� ������� �� �������� "0"
		if (NZER_N_B(Rem))
		{
			return 1;
		}
	}
	
	return 0;
	
	//�������� - ��������� ���������
	//��� - �������� �������
	//����� - 15-20 �����
}
