/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT roll_number, name 
FROM student_information
JOIN faculty_information  
ON student_information.advisor = faculty_information.employee_id
WHERE (gender='M' and salary > 15000) 
OR (gender='F' and salary > 20000);
