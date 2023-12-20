# Write your MySQL query statement below
SELECT * 
FROM CINEMA 
WHERE mod(ID,2)!=0 
AND DESCRIPTION != 'boring'
ORDER BY rating DESC;