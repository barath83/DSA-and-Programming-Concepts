--https://www.hackerrank.com/challenges/the-blunder/problem

--REPLACE repalces the old string 0 in this case with empty character as per question
-- So avaerage is calculated on the error table and the difference is found with CEIL enclosed


SELECT CEIL(AVG(Salary)-AVG(REPLACE(Salary,'0',''))) FROM EMPLOYEES;