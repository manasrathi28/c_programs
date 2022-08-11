// To Compute the telephone bill of a customer. Rules are
// 1. For all calls upto 80, Rs. 250/-
// 2. For all calls above 80 but <= 160, Rs. 0.60 per call
// 3. For all calls above 160 but <= 250, Rs. 0.50 per call
// 4. For all calls above 250, Rs. 0.40 per call
// 40 calls, bill Rs. 250/-
// 120 calls, 250 + (120-80) i.e. 40 calls @ Rs. 0.60 = 250 + 24 = 274
// 210 calls, 250 + 80 * 0.60 + (200-160) * 0.50 = 250 + 48 + 20 = 318
// 320 calls, 250 + 80 * 0.60 + 90 * 0.50 + (320-250) * 0.40 = 250 + 48 + 45 + 28 = 371

