function maxProfit(x, y) {
  const profitK = 150000;
  const profitM = 200000;
  const KerjaK = 4;
  const KerjaM = 6;
  const AlatK = 5;
  const AlatM = 3;
  const maxKerja = 240;
  const maxAlat = 180;

  const totalKerja = x * KerjaK + y * KerjaM;
  const totalAlat = x * AlatK + y * AlatM;
  const totalProfit = x * profitK + y * profitM;

  if (totalKerja > maxKerja || totalAlat > maxAlat) {
    return 0;
  } else {
    return totalProfit;
  }
}

export { maxProfit };
