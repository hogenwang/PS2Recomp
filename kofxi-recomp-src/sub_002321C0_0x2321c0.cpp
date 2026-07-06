#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002321C0
// Address: 0x2321c0 - 0x232678
void sub_002321C0_0x2321c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002321C0_0x2321c0");
#endif

    switch (ctx->pc) {
        case 0x232268u: goto label_232268;
        case 0x232320u: goto label_232320;
        case 0x2323e8u: goto label_2323e8;
        case 0x2323fcu: goto label_2323fc;
        case 0x23240cu: goto label_23240c;
        case 0x232420u: goto label_232420;
        case 0x232430u: goto label_232430;
        case 0x232444u: goto label_232444;
        case 0x232458u: goto label_232458;
        case 0x232528u: goto label_232528;
        default: break;
    }

    ctx->pc = 0x2321c0u;

    // 0x2321c0: 0x90870007  lbu         $a3, 0x7($a0)
    ctx->pc = 0x2321c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2321c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2321c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2321c8: 0x90880006  lbu         $t0, 0x6($a0)
    ctx->pc = 0x2321c8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2321cc: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2321ccu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321d0: 0x908e0001  lbu         $t6, 0x1($a0)
    ctx->pc = 0x2321d0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2321d4: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2321d8: 0x90890005  lbu         $t1, 0x5($a0)
    ctx->pc = 0x2321d8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2321dc: 0x82902  srl         $a1, $t0, 4
    ctx->pc = 0x2321dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x2321e0: 0x908a0003  lbu         $t2, 0x3($a0)
    ctx->pc = 0x2321e0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2321e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2321e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2321e8: 0x908b0002  lbu         $t3, 0x2($a0)
    ctx->pc = 0x2321e8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2321ec: 0x93102  srl         $a2, $t1, 4
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x2321f0: 0xa6102  srl         $t4, $t2, 4
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2321f4: 0xe6902  srl         $t5, $t6, 4
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2321f8: 0xb2102  srl         $a0, $t3, 4
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x2321fc: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x2321fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x232200: 0x1a36818  mult        $t5, $t5, $v1
    ctx->pc = 0x232200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x232204: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x232204u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x232208: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x232208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23220c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x232210: 0x71836018  mult1       $t4, $t4, $v1
    ctx->pc = 0x232210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x232214: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x232214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x232218: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x232218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23221c: 0x240f07b2  addiu       $t7, $zero, 0x7B2
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
    // 0x232220: 0x244707d0  addiu       $a3, $v0, 0x7D0
    ctx->pc = 0x232220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x232224: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x232224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x232228: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x232228u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x23222c: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x23222cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x232230: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x232230u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x232234: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x232234u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x232238: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x232238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x23223c: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x23223cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x232240: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x232240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x232244: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x232248: 0x1e7102a  slt         $v0, $t7, $a3
    ctx->pc = 0x232248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23224c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23224Cu;
    {
        const bool branch_taken_0x23224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23224Cu;
        // 0x232250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23224c) {
            ctx->pc = 0x2322C4u;
            goto label_2322c4;
        }
    }
    ctx->pc = 0x232254u;
    // 0x232254: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x232254u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232258: 0x24aaffff  addiu       $t2, $a1, -0x1
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23225c: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x23225cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x232260: 0x31e20003  andi        $v0, $t7, 0x3
    ctx->pc = 0x232260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x232264: 0x0  nop
    ctx->pc = 0x232264u;
    // NOP
label_232268:
    // 0x232268: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x232268u;
    {
        const bool branch_taken_0x232268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232268) {
            ctx->pc = 0x23226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232268u;
            // 0x23226c: 0x2508016d  addiu       $t0, $t0, 0x16D (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 365));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2322ACu;
            goto label_2322ac;
        }
    }
    ctx->pc = 0x232270u;
    // 0x232270: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x232274: 0x1e2001a  div         $zero, $t7, $v0
    ctx->pc = 0x232274u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232278: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232278u;
    {
        const bool branch_taken_0x232278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232278) {
            ctx->pc = 0x23227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232278u;
            // 0x23227c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232280u;
            goto label_232280;
        }
    }
    ctx->pc = 0x232280u;
label_232280:
    // 0x232280: 0x1810  mfhi        $v1
    ctx->pc = 0x232280u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x232284: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x232284u;
    {
        const bool branch_taken_0x232284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232284) {
            ctx->pc = 0x232288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232284u;
            // 0x232288: 0x2508016e  addiu       $t0, $t0, 0x16E (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 366));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2322ACu;
            goto label_2322ac;
        }
    }
    ctx->pc = 0x23228Cu;
    // 0x23228c: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x232290: 0x1e2001a  div         $zero, $t7, $v0
    ctx->pc = 0x232290u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232294: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232294u;
    {
        const bool branch_taken_0x232294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232294) {
            ctx->pc = 0x232298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232294u;
            // 0x232298: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23229Cu;
            goto label_23229c;
        }
    }
    ctx->pc = 0x23229Cu;
label_23229c:
    // 0x23229c: 0x1810  mfhi        $v1
    ctx->pc = 0x23229cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2322a0: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2322A0u;
    {
        const bool branch_taken_0x2322a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322a0) {
            ctx->pc = 0x2322A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322A0u;
            // 0x2322a4: 0x2508016d  addiu       $t0, $t0, 0x16D (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 365));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2322ACu;
            goto label_2322ac;
        }
    }
    ctx->pc = 0x2322A8u;
    // 0x2322a8: 0x2508016e  addiu       $t0, $t0, 0x16E
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 366));
label_2322ac:
    // 0x2322ac: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2322b0: 0x1e7102a  slt         $v0, $t7, $a3
    ctx->pc = 0x2322b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2322b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2322B4u;
    {
        const bool branch_taken_0x2322b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322B4u;
        // 0x2322b8: 0x31e20003  andi        $v0, $t7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322b4) {
            ctx->pc = 0x232268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232268;
        }
    }
    ctx->pc = 0x2322BCu;
    // 0x2322bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2322BCu;
    {
        const bool branch_taken_0x2322bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322BCu;
        // 0x2322c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322bc) {
            ctx->pc = 0x2322D4u;
            goto label_2322d4;
        }
    }
    ctx->pc = 0x2322C4u;
label_2322c4:
    // 0x2322c4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2322c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322c8: 0x24aaffff  addiu       $t2, $a1, -0x1
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2322cc: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x2322ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2322d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2322d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2322d4:
    // 0x2322d4: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2322D4u;
    {
        const bool branch_taken_0x2322d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322D4u;
        // 0x2322d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322d4) {
            ctx->pc = 0x232310u;
            goto label_232310;
        }
    }
    ctx->pc = 0x2322DCu;
    // 0x2322dc: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2322dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2322e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2322E0u;
    {
        const bool branch_taken_0x2322e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322e0) {
            ctx->pc = 0x2322E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322E0u;
            // 0x2322e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2322E8u;
            goto label_2322e8;
        }
    }
    ctx->pc = 0x2322E8u;
label_2322e8:
    // 0x2322e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2322e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2322ec: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2322ECu;
    {
        const bool branch_taken_0x2322ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322ec) {
            ctx->pc = 0x2322F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322ECu;
            // 0x2322f0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232310u;
            goto label_232310;
        }
    }
    ctx->pc = 0x2322F4u;
    // 0x2322f4: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2322f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2322f8: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2322f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2322fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2322FCu;
    {
        const bool branch_taken_0x2322fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322fc) {
            ctx->pc = 0x232300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2322FCu;
            // 0x232300: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232304u;
            goto label_232304;
        }
    }
    ctx->pc = 0x232304u;
label_232304:
    // 0x232304: 0x1810  mfhi        $v1
    ctx->pc = 0x232304u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x232308: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232308u;
    {
        const bool branch_taken_0x232308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232308) {
            ctx->pc = 0x23230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232308u;
            // 0x23230c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232310u;
            goto label_232310;
        }
    }
    ctx->pc = 0x232310u;
label_232310:
    // 0x232310: 0x1940000e  blez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x232310u;
    {
        const bool branch_taken_0x232310 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x232314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232310u;
        // 0x232314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232310) {
            ctx->pc = 0x23234Cu;
            goto label_23234c;
        }
    }
    ctx->pc = 0x232318u;
    // 0x232318: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x23231c: 0x0  nop
    ctx->pc = 0x23231cu;
    // NOP
label_232320:
    // 0x232320: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x232320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x232324: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x232328: 0x1621018  mult        $v0, $t3, $v0
    ctx->pc = 0x232328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23232c: 0x25244740  addiu       $a0, $t1, 0x4740
    ctx->pc = 0x23232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x232330: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x232330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x232334: 0xea282a  slt         $a1, $a3, $t2
    ctx->pc = 0x232334u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x232338: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23233c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x232340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232344: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x232344u;
    {
        const bool branch_taken_0x232344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x232348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232344u;
        // 0x232348: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232344) {
            ctx->pc = 0x232320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232320;
        }
    }
    ctx->pc = 0x23234Cu;
label_23234c:
    // 0x23234c: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x23234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x232350: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x232350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x232354: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x232354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232358: 0xff000008  sd          $zero, 0x8($t8)
    ctx->pc = 0x232358u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 0));
    // 0x23235c: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x23235cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x232360: 0x1812  mflo        $v1
    ctx->pc = 0x232360u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x232364: 0x1010  mfhi        $v0
    ctx->pc = 0x232364u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x232368: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x232368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23236c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232370: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x232370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x232374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x232374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x232378: 0x4c102d  daddu       $v0, $v0, $t4
    ctx->pc = 0x232378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 12));
    // 0x23237c: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x23237cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x232380: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x232380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x232384: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x232384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x232388: 0x6e182d  daddu       $v1, $v1, $t6
    ctx->pc = 0x232388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 14));
    // 0x23238c: 0x31138  dsll        $v0, $v1, 4
    ctx->pc = 0x23238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 4);
    // 0x232390: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x232390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x232394: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x232398: 0x4d102d  daddu       $v0, $v0, $t5
    ctx->pc = 0x232398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 13));
    // 0x23239c: 0x3e00008  jr          $ra
    ctx->pc = 0x23239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2323A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23239Cu;
        // 0x2323a0: 0xff020000  sd          $v0, 0x0($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23239Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2323A4u;
    // 0x2323a4: 0x0  nop
    ctx->pc = 0x2323a4u;
    // NOP
    // 0x2323a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2323ac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2323acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2323b0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2323b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2323b4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2323b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2323b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2323b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2323bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2323bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2323c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2323c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2323c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2323c8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2323c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2323cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2323ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2323d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2323d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2323d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2323d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2323d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2323d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2323dc: 0xdc900000  ld          $s0, 0x0($a0)
    ctx->pc = 0x2323dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2323e0: 0xc048382  jal         func_120E08
    ctx->pc = 0x2323E0u;
    SET_GPR_U32(ctx, 31, 0x2323E8u);
    ctx->pc = 0x2323E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323E0u;
    // 0x2323e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E08u, 0x2323E0u, 0x2323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323E8u;
label_2323e8:
    // 0x2323e8: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x2323e8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2323ec: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x2323ecu;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x2323f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2323f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323f4: 0xc04818c  jal         func_120630
    ctx->pc = 0x2323F4u;
    SET_GPR_U32(ctx, 31, 0x2323FCu);
    ctx->pc = 0x2323F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323F4u;
    // 0x2323f8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x2323F4u, 0x2323FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323FCu;
label_2323fc:
    // 0x2323fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2323fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232400: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x232400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x232404: 0xc048382  jal         func_120E08
    ctx->pc = 0x232404u;
    SET_GPR_U32(ctx, 31, 0x23240Cu);
    ctx->pc = 0x232408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232404u;
    // 0x232408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E08u, 0x232404u, 0x23240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23240Cu;
label_23240c:
    // 0x23240c: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x23240cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232410: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x232410u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x232414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232418: 0xc04818c  jal         func_120630
    ctx->pc = 0x232418u;
    SET_GPR_U32(ctx, 31, 0x232420u);
    ctx->pc = 0x23241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232418u;
    // 0x23241c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x232418u, 0x232420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232420u;
label_232420:
    // 0x232420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232424: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x232424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x232428: 0xc048382  jal         func_120E08
    ctx->pc = 0x232428u;
    SET_GPR_U32(ctx, 31, 0x232430u);
    ctx->pc = 0x23242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232428u;
    // 0x23242c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E08u, 0x232428u, 0x232430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232430u;
label_232430:
    // 0x232430: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x232430u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232434: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x232434u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x232438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23243c: 0xc04818c  jal         func_120630
    ctx->pc = 0x23243Cu;
    SET_GPR_U32(ctx, 31, 0x232444u);
    ctx->pc = 0x232440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23243Cu;
    // 0x232440: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x23243Cu, 0x232444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232444u;
label_232444:
    // 0x232444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232448: 0x240607b2  addiu       $a2, $zero, 0x7B2
    ctx->pc = 0x232448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
    // 0x23244c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23244Cu;
    {
        const bool branch_taken_0x23244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23244Cu;
        // 0x232450: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23244c) {
            ctx->pc = 0x23245Cu;
            goto label_23245c;
        }
    }
    ctx->pc = 0x232454u;
    // 0x232454: 0x0  nop
    ctx->pc = 0x232454u;
    // NOP
label_232458:
    // 0x232458: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23245c:
    // 0x23245c: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x23245cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x232460: 0x14e00010  bnez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x232460u;
    {
        const bool branch_taken_0x232460 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x232464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232460u;
        // 0x232464: 0x2402016d  addiu       $v0, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232460) {
            ctx->pc = 0x2324A4u;
            goto label_2324a4;
        }
    }
    ctx->pc = 0x232468u;
    // 0x232468: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x23246c: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x23246cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232470: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232470u;
    {
        const bool branch_taken_0x232470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232470) {
            ctx->pc = 0x232474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232470u;
            // 0x232474: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232478u;
            goto label_232478;
        }
    }
    ctx->pc = 0x232478u;
label_232478:
    // 0x232478: 0x1810  mfhi        $v1
    ctx->pc = 0x232478u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23247c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23247Cu;
    {
        const bool branch_taken_0x23247c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23247Cu;
        // 0x232480: 0x2402016e  addiu       $v0, $zero, 0x16E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23247c) {
            ctx->pc = 0x2324A4u;
            goto label_2324a4;
        }
    }
    ctx->pc = 0x232484u;
    // 0x232484: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x232484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x232488: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x232488u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23248c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23248Cu;
    {
        const bool branch_taken_0x23248c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23248c) {
            ctx->pc = 0x232490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23248Cu;
            // 0x232490: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232494u;
            goto label_232494;
        }
    }
    ctx->pc = 0x232494u;
label_232494:
    // 0x232494: 0x1810  mfhi        $v1
    ctx->pc = 0x232494u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x232498: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x232498u;
    {
        const bool branch_taken_0x232498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232498u;
        // 0x23249c: 0x2402016d  addiu       $v0, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232498) {
            ctx->pc = 0x2324A4u;
            goto label_2324a4;
        }
    }
    ctx->pc = 0x2324A0u;
    // 0x2324a0: 0x2402016e  addiu       $v0, $zero, 0x16E
    ctx->pc = 0x2324a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_2324a4:
    // 0x2324a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2324a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2324ac: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2324ACu;
    {
        const bool branch_taken_0x2324ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324ac) {
            ctx->pc = 0x2324B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324ACu;
            // 0x2324b0: 0x203802f  dsubu       $s0, $s0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232458;
        }
    }
    ctx->pc = 0x2324B4u;
    // 0x2324b4: 0x14e00010  bnez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2324B4u;
    {
        const bool branch_taken_0x2324b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324b4) {
            ctx->pc = 0x2324F8u;
            goto label_2324f8;
        }
    }
    ctx->pc = 0x2324BCu;
    // 0x2324bc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2324bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2324c0: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2324c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2324c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2324C4u;
    {
        const bool branch_taken_0x2324c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324c4) {
            ctx->pc = 0x2324C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324C4u;
            // 0x2324c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2324CCu;
            goto label_2324cc;
        }
    }
    ctx->pc = 0x2324CCu;
label_2324cc:
    // 0x2324cc: 0x1810  mfhi        $v1
    ctx->pc = 0x2324ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2324d0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2324D0u;
    {
        const bool branch_taken_0x2324d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2324d0) {
            ctx->pc = 0x2324D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324D0u;
            // 0x2324d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2324F8u;
            goto label_2324f8;
        }
    }
    ctx->pc = 0x2324D8u;
    // 0x2324d8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2324d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2324dc: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2324dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2324e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2324E0u;
    {
        const bool branch_taken_0x2324e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324e0) {
            ctx->pc = 0x2324E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2324E0u;
            // 0x2324e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2324E8u;
            goto label_2324e8;
        }
    }
    ctx->pc = 0x2324E8u;
label_2324e8:
    // 0x2324e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2324e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2324ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2324ECu;
    {
        const bool branch_taken_0x2324ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2324F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324ECu;
        // 0x2324f0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324ec) {
            ctx->pc = 0x2324FCu;
            goto label_2324fc;
        }
    }
    ctx->pc = 0x2324F4u;
    // 0x2324f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2324f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2324f8:
    // 0x2324f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2324f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2324fc:
    // 0x2324fc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2324fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232500: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x232500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x232504: 0x25244740  addiu       $a0, $t1, 0x4740
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x232508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23250c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232510: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x232510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232514: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x232514u;
    {
        const bool branch_taken_0x232514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232514u;
        // 0x232518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232514) {
            ctx->pc = 0x232570u;
            goto label_232570;
        }
    }
    ctx->pc = 0x23251Cu;
    // 0x23251c: 0x24c6f830  addiu       $a2, $a2, -0x7D0
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965296));
    // 0x232520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x232520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232524: 0x0  nop
    ctx->pc = 0x232524u;
    // NOP
label_232528:
    // 0x232528: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x232528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23252c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23252cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x232530: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x232530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x232534: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x232534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x232538: 0x25254740  addiu       $a1, $t1, 0x4740
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x23253c: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x232540: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x232540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232544: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x232544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x232548: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x232548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x23254c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232550: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x232550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x232554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232558: 0x204802f  dsubu       $s0, $s0, $a0
    ctx->pc = 0x232558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 4));
    // 0x23255c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23255cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232560: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x232560u;
    {
        const bool branch_taken_0x232560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232560u;
        // 0x232564: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232560) {
            ctx->pc = 0x232528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232528;
        }
    }
    ctx->pc = 0x232568u;
    // 0x232568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x232568u;
    {
        const bool branch_taken_0x232568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232568u;
        // 0x23256c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232568) {
            ctx->pc = 0x23257Cu;
            goto label_23257c;
        }
    }
    ctx->pc = 0x232570u;
label_232570:
    // 0x232570: 0x24c6f830  addiu       $a2, $a2, -0x7D0
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965296));
    // 0x232574: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x232574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232578: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23257c:
    // 0x23257c: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x23257cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232580: 0x66040001  daddiu      $a0, $s0, 0x1
    ctx->pc = 0x232580u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x232584: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x232584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x232588: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x232588u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x23258c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x232590: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232590u;
    {
        const bool branch_taken_0x232590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x232590) {
            ctx->pc = 0x232594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232590u;
            // 0x232594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232598u;
            goto label_232598;
        }
    }
    ctx->pc = 0x232598u;
label_232598:
    // 0x232598: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23259c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325a0: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2325a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325a4: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325a8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325ac: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325b0: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325b4: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2325b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325b8: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325bc: 0x6810  mfhi        $t5
    ctx->pc = 0x2325bcu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2325c0: 0x3012  mflo        $a2
    ctx->pc = 0x2325c0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2325c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2325c8: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x2325c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x2325cc: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x2325ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2325d0: 0xa2a60007  sb          $a2, 0x7($s5)
    ctx->pc = 0x2325d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x2325d4: 0x7010  mfhi        $t6
    ctx->pc = 0x2325d4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x2325d8: 0x3812  mflo        $a3
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2325dc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2325e0: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x2325e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x2325e4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2325e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2325e8: 0xa2a70006  sb          $a3, 0x6($s5)
    ctx->pc = 0x2325e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x2325ec: 0x4010  mfhi        $t0
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2325f0: 0x2012  mflo        $a0
    ctx->pc = 0x2325f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2325f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2325f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2325f8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x2325f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2325fc: 0x2c3001a  div         $zero, $s6, $v1
    ctx->pc = 0x2325fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232600: 0xa2a40005  sb          $a0, 0x5($s5)
    ctx->pc = 0x232600u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x232604: 0x4810  mfhi        $t1
    ctx->pc = 0x232604u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x232608: 0x2812  mflo        $a1
    ctx->pc = 0x232608u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x23260c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x23260cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x232610: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x232614: 0x2e3001a  div         $zero, $s7, $v1
    ctx->pc = 0x232614u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232618: 0xa2a50003  sb          $a1, 0x3($s5)
    ctx->pc = 0x232618u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x23261c: 0x3010  mfhi        $a2
    ctx->pc = 0x23261cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x232620: 0x1012  mflo        $v0
    ctx->pc = 0x232620u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x232624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x232628: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x232628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x23262c: 0x3c3001a  div         $zero, $fp, $v1
    ctx->pc = 0x23262cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 30);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232630: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x232630u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x232634: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x232638: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23263c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232640: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x232640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232644: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x232644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232648: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x232648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23264c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23264cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232650: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232658: 0x1812  mflo        $v1
    ctx->pc = 0x232658u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23265c: 0x3810  mfhi        $a3
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x232660: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x232664: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x232668: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x232668u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23266c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23266cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232670: 0x3e00008  jr          $ra
    ctx->pc = 0x232670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232670u;
        // 0x232674: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232678u;
}
