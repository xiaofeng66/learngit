ZMCellEntity *cellEntity3 = self.vipInfoArray[1][0];
if([ZMStringUtils isBlank:cellEntity3.value]){
    self.vipCategory.count = -1;
}else {
    self.vipCategory.count = [cellEntity3.value integerValue];
}

// 价格名称
ZMCellEntity *cellEntity4 = self.vipInfoArray[2][0];
self.vipCategory.priceAlias = cellEntity4.value;

