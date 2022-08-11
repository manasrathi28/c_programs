// accept the cost & sale price of an item from user & determine whether it is a No Profit,
// No Loss Deal OR Profit OR Loss Deal. Also display the profit or loss in percentage.
#include <stdio.h>

int main()
{
	float cost_price, sale_price, prft_loss;
	printf("Enter the cost & sale price of item :- ");
	scanf("%f %f",&cost_price,&sale_price);
	if (cost_price == sale_price)
		printf("It's a No Profit, No Loss Deal");
	else  // Profit OR Loss
	{
		prft_loss = (sale_price - cost_price) / cost_price * 100;
		if (sale_price > cost_price)
			printf("It's a profit of %.2f percent",prft_loss);
		else
			printf("It's a loss of %.2f percent",-prft_loss);  // change the sign from - to +		
	}
	return 0;
}
