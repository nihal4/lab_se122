#include <stdio.h>

struct employee {
  char name[50];
  int id;
  float salary;
  float bonus;
};

int main() {
  struct employee emp;

  printf("Enter employee name: ");
  fgets(emp.name, sizeof(emp.name), stdin);

  printf("Enter employee ID: ");
  scanf("%d", &emp.id);

  printf("Enter employee salary: ");
  scanf("%f", &emp.salary);

  printf("Enter employee bonus: ");
  scanf("%f", &emp.bonus);

  
  float total_compensation = emp.salary + emp.bonus;

  
  printf("\nEmployee Details:\n");
  printf("Name: %s", emp.name);
  printf("ID: %d\n", emp.id);
  printf("Salary: %.2f\n", emp.salary);
  printf("Bonus: %.2f\n", emp.bonus);
  printf("Total Compensation: %.2f\n", total_compensation);

  return 0;
}
