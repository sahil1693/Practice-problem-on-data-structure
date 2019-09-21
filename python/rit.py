class CardException(Exception):
    pass	    
def kind(n, ranks):
    "Return the first rank that this hand has exactly n of, None otherwise"
    for r in ranks:
        if ranks.count(r) == n: 
	        return r
    return None

def two_pair(ranks):
    """If there are two pair, return the two ranks as a tuple: (highest, lowest); otherwise return None."""
    highrank = kind(2, ranks)
    lowrank = kind(2, list(reversed(ranks)))
    if lowrank != highrank:
        return (highrank, lowrank)
    return None

def straight(ranks):
  'Return True if the ordered ranks form a 5 card straight'
  if (max(ranks) - min(ranks) == 4) and len(set(ranks)) == 5:
    return True
  return False
  
def flush(hand):
    'Return True if all the cards have the sane suit'
    suits = [s for r,s in hand]
    if len(set(suits)) == 1:
        return True
    return False

def card_ranks(cards):
    "Return a list of ranks sorted with higher first"
    for i in range(len(cards)):
	    if len(cards[i]) == 3:
		    cards[i] = 'T{}'.format(cards[i][2])
    ranks = ['--23456789TJQKA'.index(r) for r,s in cards]
    ranks.sort(reverse=True)
    return ranks

def hand_rank(hand):
    if len(hand) != 5:
	    raise CardException('5 cards expected only')
    ranks = card_ranks(hand)
    
    if straight(ranks) and flush(hand):
      return (8, max(ranks))
    if kind(4, ranks):
      return (7, kind(4, ranks), kind(1, ranks))
    if kind(3, ranks) and kind(2, ranks):
      return (6, kind(3, ranks), kind(2, ranks))
    if flush(hand):
      return (5, ranks)
    if straight(ranks):
      return (4, max(ranks))
    if kind(3, ranks):
      return (3, kind(3, ranks), ranks)
    if two_pair(ranks):
      return (2, two_pair(ranks), ranks)
    if kind(2, ranks):
      return (1, kind(2, ranks), ranks)
    else:
      return (0, ranks)

def poker(hands):
    "Return the best hand: poker([hand,...]) => hand"
    return max(hands, key=hand_rank)

def test():
    "Test cases for the functions in poker program"
    sf = "6C 7C 8C 9C 10C".split() # Straight Flush
    fk = "9D 9H 9S 9C 7D".split() # 4 of a kind
    fh = "10D 10C 10H 7C 7D".split() # Full House
    tp = "10D 9H TH 7C 3S".split() # Two Pair
    
    fkranks = card_ranks(fk)
    tpranks = card_ranks(tp)

    assert kind(4, fkranks) == 9
    assert kind(3, fkranks) == None
    assert kind(2, fkranks) == None
    assert kind(1, fkranks) == 7
    
    assert poker([sf, fk, fh]) == sf
    assert poker([fk, fh]) == fk

    pair = "AD KC KD QS 10C".split()
    pairRank = hand_rank(pair)
    assert pairRank[0] == 1
    assert pairRank[1] == 13
    isException = False	
    invalid = "AD KC KD QS".split()
    try:
        hand_rank(invalid)
    except CardException as c:
	    print(c)
	    isException = True
    assert isException == True
    return 'tests pass'
  
if __name__ == '__main__':
    print(test())
