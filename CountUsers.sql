/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT cust.id, us.first_name, us.last_name, ct.customer_id, us.user_name
FROM customer cust
JOIN user_account us
ON cust.id=us.id 
JOIN contact ct
ON ct.user_account_id=us.id
ORDER BY user_account_id ASC;
