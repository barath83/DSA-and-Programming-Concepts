--https://www.hackerrank.com/challenges/more-than-75-marks/problem


--RIGHT extracts the no of characters from right side of give string eg: RIGHT(string,3)

SELECT Name 
FROM STUDENTS
WHERE Marks>75 ORDER BY RIGHT(Name,3),ID ASC;