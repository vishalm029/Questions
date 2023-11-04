# Write your MySQL query statement below
SELECT employee_id,department_id From Employee
where primary_flag ='Y'
Union
SELECT employee_id, department_id From Employee
Group By employee_id
Having COUNT(department_id)=1;