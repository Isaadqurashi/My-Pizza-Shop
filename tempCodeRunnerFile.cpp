if (temp->cusotomer.pizzaName == "chickenTikka")
        {
            // insert at front
            takeAwayCustomer *firstCustomer = myPizzaShop->nextTakeAwayCustomer;
            myPizzaShop->nextTakeAwayCustomer = currentTakeAwayCustomer;
            currentTakeAwayCustomer->next = firstCustomer;
        }