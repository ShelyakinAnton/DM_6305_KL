t_Nat TRUNS_Q_Z (t_Rat Q);

t_Nat TRUNS_Q_Z (t_Rat Q)
{
	t_Nat Z;
	
	//�������� ����������� �� �������� "1"
	if ((Q.Denom_N[0] == 1) && (Q.Dgr_N = 0))
	{
		Z.Numer_Z = Q.Numer_Z;
		Z.Dgr_Z = Q.Dgr_Z;
		Z.Sgn_Z = Q.Sgn_Z;	
		
		return Z;
	}
	else return NULL;

	//�������� - ������� ����������
	//��� - ������� ��������
	//����� - ~5 �����
}
