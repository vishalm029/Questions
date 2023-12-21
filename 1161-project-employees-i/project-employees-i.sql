SELECT
    p.project_id,
    ROUND(AVG(em.experience_years), 2) AS average_years
FROM
    Project p
 LEFT JOIN
    Employee em ON p.employee_id = em.employee_id
GROUP BY
    p.project_id;
