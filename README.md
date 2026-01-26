<!-- *********************************************************************** -->
<!--                                                                         -->
<!--                                                      :::      ::::::::  -->
<!-- README.md                                          :+:      :+:    :+:  -->
<!--                                                  +:+ +:+         +:+    -->
<!-- By: relhadi <relhadi@42angouleme.fr>           +#+  +:+       +#+       -->
<!--                                              +#+#+#+#+#+   +#+          -->
<!-- Created: 2026/01/26 22:32:01 by relhadi           #+#    #+#            -->
<!-- Updated: 2026/01/26 23:41:24 by relhadi          ###   ########.fr      -->
<!--                                                                         -->
<!-- *********************************************************************** -->

*This project has been created as part of the 42 curriculum by relhadi.*

# push_swap

## Description

The **push_swap** project aims to sort a stack of integers stored in **stack a**, using an auxiliary stack (**stack b**) and a limited set of allowed operations.  
The objective is to generate an optimized sequence of instructions that efficiently sorts the stack.

## Instructions

Use the **make** command to compile the project.
After compilation, the push_swap executable will be generated and can be used as follows:
./push_swap 42 1447 0

## Resources

- **Thuggonaut push_swap tutorial**  
  This tutorial was extremely helpful for understanding the core algorithm, value compression, and the use of doubly linked lists within the project.

- **libft (personal library)**  
  I reviewed my own libft implementation to better understand how linked lists work and how to manipulate and traverse them efficiently in this project.

- **AI assistance (Gemini)**  
  Gemini was used as a learning aid when I struggled to understand certain parts of the project. It helped clarify concepts and algorithmic ideas. No code was copied directly from it.

## Technical Choices

- **Doubly linked lists**  
  I chose to use doubly linked lists to fully understand their structure and internal behavior. This data structure made stack manipulation easier and improved my understanding of list traversal and node management.

- **Sorting algorithm (Turk algorithm)**  
  I decided to implement the Turk algorithm for its good performance and because I clearly understood how it works. The choice of the sorting algorithm is subjective and may differ depending on the developer’s strategy and understanding.
