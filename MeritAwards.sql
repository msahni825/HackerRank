/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT employee_information.employee_ID, Name 
FROM employee_information
JOIN last_quarter_bonus 
ON employee_information.employee_ID=last_quarter_bonus.employee_ID
WHERE division='HR'and bonus>=5000;
