--https://www.hackerrank.com/challenges/earnings-of-employees/problem

-- multiplies to find earning as per question and keeps an alias for it 
-- grouping them by max_earnings with a condition having only the maxmimum values and limiting it to one
-- HAVING can only be used on aggregate functions

SELECT (salary * months) AS max_earnings, COUNT(*) AS employee_count
FROM employee
GROUP BY max_earnings
HAVING max_earnings = MAX(salary * months)
ORDER BY max_earnings DESC
LIMIT 1;