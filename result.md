
<br/>

Results 
======

## Optimizations  `ON`
| Make Fast | Linear Functions | Binary Functions |
| :---         |     :---:      |          ---: |
| Reference    | 0.717598s      | 0.000344157s    |
| Pointers     | (P) 0.737864s       |  (P) 0.000384336s      |

<br/>

## Debugging Symbols  `-g`
| Make | Linear Functions | Binary Functions |
| :---         |     :---:      |          ---: |
| Reference |    1.50727s      |   0.000453068s   |	
| Pointers |  (P) 1.30648s   | (P) 0.000346529s | 

<br/>
<br/>

<img align="right" width="200" height="100" src="https://www.geeksforgeeks.org/wp-content/uploads/Linear-Search.png">

## Linear Functions
```
Result Summary
```
*The elements of the array were searched by traversing the array from the "begin" to the "end" making the process of finding an element very slow. The pointer functions had a slightly better performance but not by much. The time difference was 0.020266 seconds making the pointer functions the best choice.*

<br/>

<img align="left" width="200" height="100" src="https://hackernoon.com/hn-images/1*DOR__3reJYPwGuyytG520g.jpeg">

## Binary Functions
```
Result Summary
```
*Elements in the array consumed less time when the position of a target value by repeatedly dividing the search interval in half. Making the process of finding an element very efficient. Compared to its pointer function counterpart the time difference between the two functions was 0.000040179 seconds.*

<br/>

<img align="right" width="200" height="100" src="https://techdifferences.com/wp-content/uploads/2017/08/featured2.jpg">

## Debugging Symbols '-g' vs. Optimizations 'On'
```
Death Battle
```
*The time difference when for running 'optimization' and 'g' was 1.439 seconds to be exact. It would seem that when Debugging Symbols '-g' is used the performance takes a time hit but the results are the same regardless.*

> :dog:


## Table 
| Real | Debugging Symbols '-g' | Optimizations 'On' | 
| :---         |     :---:      |          ---: |
| Time | 0m3.130s | 0m1.691s | 

<br/>

<p align="center">
  <img width="100000" height="50" src="https://dhggywfvre0o8.cloudfront.net/app/uploads/2017/11/22153252/Typeform-Blog-BlackFriday-Cover-AskAwesomely.jpg">
 
</p>


#### Sources
Images
1. https://www.geeksforgeeks.org/wp-content/uploads/Linear-Search.png
1. https://techdifferences.com/wp-content/uploads/2017/08/featured2.jpg
1. https://dhggywfvre0o8.cloudfront.net/app/uploads/2017/11/22153252/Typeform-Blog-BlackFriday-Cover-AskAwesomely.jpg
