/*
Enter your query below.
Please append a semicolon ";" at the end of the query
*/
SELECT sku, product_name 
FROM PRODUCT as pd
WHERE (NOT EXISTS 
(SELECT product_id
FROM INVOICE_ITEM as init
WHERE PD.id=init.product_id
))
ORDER BY sku ASC
