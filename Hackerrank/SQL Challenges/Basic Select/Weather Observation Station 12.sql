--https://www.hackerrank.com/challenges/weather-observation-station-12/problem


SELECT DISTINCT CITY
FROM STATION
WHERE CITY REGEXP '^[^AEIOUaeiou]' AND CITY REGEXP '[^AEIOUaeiou]$';