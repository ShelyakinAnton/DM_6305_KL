typedef struct Ratio
{
	int *Numer_Z;
	int Dgr_Z;
	int Sgn_Z;
	
	int *Denom_N;
	int Dgr_N;
	
	/*
	*Numer_Z - ��������� �� ������ ���� ������ ����� �����
	DgrZ - ����� ������� ������� ������ ����� �����
	SgnZ - ���� ������ ����� �����
	*Denomr_N - ��������� �� ������ ���� ������������ ����� �����
	DgrN - ����� ������� ������� ������������ ����� �����
	*/
} t_Rat;

typedef struct Integer
{
	int *Numer_Z;
	int Dgr_Z;
	int Sgn_Z;
} t_Int;

typedef struct Natural
{
	int *Denom_N;
	int Dgr_N;
} t_Nat;
