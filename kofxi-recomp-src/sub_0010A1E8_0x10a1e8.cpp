#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A1E8
// Address: 0x10a1e8 - 0x10a358
void sub_0010A1E8_0x10a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1E8_0x10a1e8");
#endif

    switch (ctx->pc) {
        case 0x10a1e8u: goto label_10a1e8;
        case 0x10a1ecu: goto label_10a1ec;
        case 0x10a1f0u: goto label_10a1f0;
        case 0x10a1f4u: goto label_10a1f4;
        case 0x10a1f8u: goto label_10a1f8;
        case 0x10a1fcu: goto label_10a1fc;
        case 0x10a200u: goto label_10a200;
        case 0x10a204u: goto label_10a204;
        case 0x10a208u: goto label_10a208;
        case 0x10a20cu: goto label_10a20c;
        case 0x10a210u: goto label_10a210;
        case 0x10a214u: goto label_10a214;
        case 0x10a218u: goto label_10a218;
        case 0x10a21cu: goto label_10a21c;
        case 0x10a220u: goto label_10a220;
        case 0x10a224u: goto label_10a224;
        case 0x10a228u: goto label_10a228;
        case 0x10a22cu: goto label_10a22c;
        case 0x10a230u: goto label_10a230;
        case 0x10a234u: goto label_10a234;
        case 0x10a238u: goto label_10a238;
        case 0x10a23cu: goto label_10a23c;
        case 0x10a240u: goto label_10a240;
        case 0x10a244u: goto label_10a244;
        case 0x10a248u: goto label_10a248;
        case 0x10a24cu: goto label_10a24c;
        case 0x10a250u: goto label_10a250;
        case 0x10a254u: goto label_10a254;
        case 0x10a258u: goto label_10a258;
        case 0x10a25cu: goto label_10a25c;
        case 0x10a260u: goto label_10a260;
        case 0x10a264u: goto label_10a264;
        case 0x10a268u: goto label_10a268;
        case 0x10a26cu: goto label_10a26c;
        case 0x10a270u: goto label_10a270;
        case 0x10a274u: goto label_10a274;
        case 0x10a278u: goto label_10a278;
        case 0x10a27cu: goto label_10a27c;
        case 0x10a280u: goto label_10a280;
        case 0x10a284u: goto label_10a284;
        case 0x10a288u: goto label_10a288;
        case 0x10a28cu: goto label_10a28c;
        case 0x10a290u: goto label_10a290;
        case 0x10a294u: goto label_10a294;
        case 0x10a298u: goto label_10a298;
        case 0x10a29cu: goto label_10a29c;
        case 0x10a2a0u: goto label_10a2a0;
        case 0x10a2a4u: goto label_10a2a4;
        case 0x10a2a8u: goto label_10a2a8;
        case 0x10a2acu: goto label_10a2ac;
        case 0x10a2b0u: goto label_10a2b0;
        case 0x10a2b4u: goto label_10a2b4;
        case 0x10a2b8u: goto label_10a2b8;
        case 0x10a2bcu: goto label_10a2bc;
        case 0x10a2c0u: goto label_10a2c0;
        case 0x10a2c4u: goto label_10a2c4;
        case 0x10a2c8u: goto label_10a2c8;
        case 0x10a2ccu: goto label_10a2cc;
        case 0x10a2d0u: goto label_10a2d0;
        case 0x10a2d4u: goto label_10a2d4;
        case 0x10a2d8u: goto label_10a2d8;
        case 0x10a2dcu: goto label_10a2dc;
        case 0x10a2e0u: goto label_10a2e0;
        case 0x10a2e4u: goto label_10a2e4;
        case 0x10a2e8u: goto label_10a2e8;
        case 0x10a2ecu: goto label_10a2ec;
        case 0x10a2f0u: goto label_10a2f0;
        case 0x10a2f4u: goto label_10a2f4;
        case 0x10a2f8u: goto label_10a2f8;
        case 0x10a2fcu: goto label_10a2fc;
        case 0x10a300u: goto label_10a300;
        case 0x10a304u: goto label_10a304;
        case 0x10a308u: goto label_10a308;
        case 0x10a30cu: goto label_10a30c;
        case 0x10a310u: goto label_10a310;
        case 0x10a314u: goto label_10a314;
        case 0x10a318u: goto label_10a318;
        case 0x10a31cu: goto label_10a31c;
        case 0x10a320u: goto label_10a320;
        case 0x10a324u: goto label_10a324;
        case 0x10a328u: goto label_10a328;
        case 0x10a32cu: goto label_10a32c;
        case 0x10a330u: goto label_10a330;
        case 0x10a334u: goto label_10a334;
        case 0x10a338u: goto label_10a338;
        case 0x10a33cu: goto label_10a33c;
        case 0x10a340u: goto label_10a340;
        case 0x10a344u: goto label_10a344;
        case 0x10a348u: goto label_10a348;
        case 0x10a34cu: goto label_10a34c;
        case 0x10a350u: goto label_10a350;
        case 0x10a354u: goto label_10a354;
        default: break;
    }

    ctx->pc = 0x10a1e8u;

label_10a1e8:
    // 0x10a1e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10a1ec:
    // 0x10a1ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a1f0:
    // 0x10a1f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_10a1f4:
    // 0x10a1f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10a1f8:
    // 0x10a1f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a1f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a1fc:
    // 0x10a1fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10a200:
    // 0x10a200: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10a200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a204:
    // 0x10a204: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_10a208:
    // 0x10a208: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_10a20c:
    // 0x10a20c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_10a210:
    if (ctx->pc == 0x10A210u) {
        ctx->pc = 0x10A210u;
            // 0x10a210: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->pc = 0x10A214u;
        goto label_10a214;
    }
    ctx->pc = 0x10A20Cu;
    {
        const bool branch_taken_0x10a20c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A20Cu;
            // 0x10a210: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a20c) {
            ctx->pc = 0x10A220u;
            goto label_10a220;
        }
    }
    ctx->pc = 0x10A214u;
label_10a214:
    // 0x10a214: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10a214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10a218:
    // 0x10a218: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10a21c:
    if (ctx->pc == 0x10A21Cu) {
        ctx->pc = 0x10A21Cu;
            // 0x10a21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A220u;
        goto label_10a220;
    }
    ctx->pc = 0x10A218u;
    {
        const bool branch_taken_0x10a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A218u;
            // 0x10a21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a218) {
            ctx->pc = 0x10A25Cu;
            goto label_10a25c;
        }
    }
    ctx->pc = 0x10A220u;
label_10a220:
    // 0x10a220: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10a224:
    // 0x10a224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10a228:
    if (ctx->pc == 0x10A228u) {
        ctx->pc = 0x10A228u;
            // 0x10a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A22Cu;
        goto label_10a22c;
    }
    ctx->pc = 0x10A224u;
    {
        const bool branch_taken_0x10a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A224u;
            // 0x10a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a224) {
            ctx->pc = 0x10A238u;
            goto label_10a238;
        }
    }
    ctx->pc = 0x10A22Cu;
label_10a22c:
    // 0x10a22c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_10a230:
    // 0x10a230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a234:
    // 0x10a234: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10a234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10a238:
    // 0x10a238: 0xc0427cc  jal         func_109F30
label_10a23c:
    if (ctx->pc == 0x10A23Cu) {
        ctx->pc = 0x10A23Cu;
            // 0x10a23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A240u;
        goto label_10a240;
    }
    ctx->pc = 0x10A238u;
    SET_GPR_U32(ctx, 31, 0x10A240u);
    ctx->pc = 0x10A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A238u;
            // 0x10a23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F30u;
    if (runtime->hasFunction(0x109F30u)) {
        auto targetFn = runtime->lookupFunction(0x109F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A240u; }
        if (ctx->pc != 0x10A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F30_0x109f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A240u; }
        if (ctx->pc != 0x10A240u) { return; }
    }
    ctx->pc = 0x10A240u;
label_10a240:
    // 0x10a240: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10a244:
    if (ctx->pc == 0x10A244u) {
        ctx->pc = 0x10A244u;
            // 0x10a244: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A248u;
        goto label_10a248;
    }
    ctx->pc = 0x10A240u;
    {
        const bool branch_taken_0x10a240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A240u;
            // 0x10a244: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a240) {
            ctx->pc = 0x10A254u;
            goto label_10a254;
        }
    }
    ctx->pc = 0x10A248u;
label_10a248:
    // 0x10a248: 0xc042aa6  jal         func_10AA98
label_10a24c:
    if (ctx->pc == 0x10A24Cu) {
        ctx->pc = 0x10A24Cu;
            // 0x10a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A250u;
        goto label_10a250;
    }
    ctx->pc = 0x10A248u;
    SET_GPR_U32(ctx, 31, 0x10A250u);
    ctx->pc = 0x10A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A248u;
            // 0x10a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA98u;
    if (runtime->hasFunction(0x10AA98u)) {
        auto targetFn = runtime->lookupFunction(0x10AA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A250u; }
        if (ctx->pc != 0x10A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AA98_0x10aa98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A250u; }
        if (ctx->pc != 0x10A250u) { return; }
    }
    ctx->pc = 0x10A250u;
label_10a250:
    // 0x10a250: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x10a250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10a254:
    // 0x10a254: 0x1000001b  b           . + 4 + (0x1B << 2)
label_10a258:
    if (ctx->pc == 0x10A258u) {
        ctx->pc = 0x10A258u;
            // 0x10a258: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A25Cu;
        goto label_10a25c;
    }
    ctx->pc = 0x10A254u;
    {
        const bool branch_taken_0x10a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A254u;
            // 0x10a258: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a254) {
            ctx->pc = 0x10A2C4u;
            goto label_10a2c4;
        }
    }
    ctx->pc = 0x10A25Cu;
label_10a25c:
    // 0x10a25c: 0xc0427cc  jal         func_109F30
label_10a260:
    if (ctx->pc == 0x10A260u) {
        ctx->pc = 0x10A260u;
            // 0x10a260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A264u;
        goto label_10a264;
    }
    ctx->pc = 0x10A25Cu;
    SET_GPR_U32(ctx, 31, 0x10A264u);
    ctx->pc = 0x10A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A25Cu;
            // 0x10a260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F30u;
    if (runtime->hasFunction(0x109F30u)) {
        auto targetFn = runtime->lookupFunction(0x109F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A264u; }
        if (ctx->pc != 0x10A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F30_0x109f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A264u; }
        if (ctx->pc != 0x10A264u) { return; }
    }
    ctx->pc = 0x10A264u;
label_10a264:
    // 0x10a264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a268:
    // 0x10a268: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a26c:
    // 0x10a26c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_10a270:
    if (ctx->pc == 0x10A270u) {
        ctx->pc = 0x10A270u;
            // 0x10a270: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A274u;
        goto label_10a274;
    }
    ctx->pc = 0x10A26Cu;
    {
        const bool branch_taken_0x10a26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A26Cu;
            // 0x10a270: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a26c) {
            ctx->pc = 0x10A2C0u;
            goto label_10a2c0;
        }
    }
    ctx->pc = 0x10A274u;
label_10a274:
    // 0x10a274: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_10a278:
    // 0x10a278: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10a27c:
    if (ctx->pc == 0x10A27Cu) {
        ctx->pc = 0x10A27Cu;
            // 0x10a27c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10A280u;
        goto label_10a280;
    }
    ctx->pc = 0x10A278u;
    {
        const bool branch_taken_0x10a278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A278u;
            // 0x10a27c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a278) {
            ctx->pc = 0x10A2C4u;
            goto label_10a2c4;
        }
    }
    ctx->pc = 0x10A280u;
label_10a280:
    // 0x10a280: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10a280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10a284:
    // 0x10a284: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_10a288:
    if (ctx->pc == 0x10A288u) {
        ctx->pc = 0x10A288u;
            // 0x10a288: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->pc = 0x10A28Cu;
        goto label_10a28c;
    }
    ctx->pc = 0x10A284u;
    {
        const bool branch_taken_0x10a284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a284) {
            ctx->pc = 0x10A288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A284u;
            // 0x10a288: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2C8u;
            goto label_10a2c8;
        }
    }
    ctx->pc = 0x10A28Cu;
label_10a28c:
    // 0x10a28c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10a290:
    // 0x10a290: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10a290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a294:
    // 0x10a294: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10a294u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a298:
    // 0x10a298: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a29c:
    // 0x10a29c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10a2a0:
    // 0x10a2a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10a2a4:
    // 0x10a2a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10a2a8:
    // 0x10a2a8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10a2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10a2ac:
    // 0x10a2ac: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10a2b0:
    // 0x10a2b0: 0xe0f809  jalr        $a3
label_10a2b4:
    if (ctx->pc == 0x10A2B4u) {
        ctx->pc = 0x10A2B4u;
            // 0x10a2b4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x10A2B8u;
        goto label_10a2b8;
    }
    ctx->pc = 0x10A2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10A2B8u);
        ctx->pc = 0x10A2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2B0u;
            // 0x10a2b4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10A2B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A2B8u; }
            if (ctx->pc != 0x10A2B8u) { return; }
        }
        }
    }
    ctx->pc = 0x10A2B8u;
label_10a2b8:
    // 0x10a2b8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10a2b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a2bc:
    // 0x10a2bc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10a2bcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a2c0:
    // 0x10a2c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a2c4:
    // 0x10a2c4: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_10a2c8:
    // 0x10a2c8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_10a2cc:
    if (ctx->pc == 0x10A2CCu) {
        ctx->pc = 0x10A2CCu;
            // 0x10a2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A2D0u;
        goto label_10a2d0;
    }
    ctx->pc = 0x10A2C8u;
    {
        const bool branch_taken_0x10a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2C8u;
            // 0x10a2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2c8) {
            ctx->pc = 0x10A33Cu;
            goto label_10a33c;
        }
    }
    ctx->pc = 0x10A2D0u;
label_10a2d0:
    // 0x10a2d0: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10a2d4:
    // 0x10a2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a2d8:
    // 0x10a2d8: 0xc042daa  jal         func_10B6A8
label_10a2dc:
    if (ctx->pc == 0x10A2DCu) {
        ctx->pc = 0x10A2DCu;
            // 0x10a2dc: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x10A2E0u;
        goto label_10a2e0;
    }
    ctx->pc = 0x10A2D8u;
    SET_GPR_U32(ctx, 31, 0x10A2E0u);
    ctx->pc = 0x10A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2D8u;
            // 0x10a2dc: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B6A8u;
    if (runtime->hasFunction(0x10B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x10B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2E0u; }
        if (ctx->pc != 0x10A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6A8_0x10b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2E0u; }
        if (ctx->pc != 0x10A2E0u) { return; }
    }
    ctx->pc = 0x10A2E0u;
label_10a2e0:
    // 0x10a2e0: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_10a2e4:
    // 0x10a2e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10a2e8:
    // 0x10a2e8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_10a2ec:
    if (ctx->pc == 0x10A2ECu) {
        ctx->pc = 0x10A2ECu;
            // 0x10a2ec: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x10A2F0u;
        goto label_10a2f0;
    }
    ctx->pc = 0x10A2E8u;
    {
        const bool branch_taken_0x10a2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a2e8) {
            ctx->pc = 0x10A2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2E8u;
            // 0x10a2ec: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A2F0u;
label_10a2f0:
    // 0x10a2f0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_10a2f4:
    if (ctx->pc == 0x10A2F4u) {
        ctx->pc = 0x10A2F4u;
            // 0x10a2f4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x10A2F8u;
        goto label_10a2f8;
    }
    ctx->pc = 0x10A2F0u;
    {
        const bool branch_taken_0x10a2f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a2f0) {
            ctx->pc = 0x10A2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2F0u;
            // 0x10a2f4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A2F8u;
label_10a2f8:
    // 0x10a2f8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_10a2fc:
    // 0x10a2fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10a300:
    // 0x10a300: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x10a300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_10a304:
    // 0x10a304: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x10a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_10a308:
    // 0x10a308: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10a30c:
    // 0x10a30c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a310:
    // 0x10a310: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10a310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_10a314:
    // 0x10a314: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x10a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_10a318:
    // 0x10a318: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_10a31c:
    if (ctx->pc == 0x10A31Cu) {
        ctx->pc = 0x10A31Cu;
            // 0x10a31c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A320u;
        goto label_10a320;
    }
    ctx->pc = 0x10A318u;
    {
        const bool branch_taken_0x10a318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A318u;
            // 0x10a31c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a318) {
            ctx->pc = 0x10A33Cu;
            goto label_10a33c;
        }
    }
    ctx->pc = 0x10A320u;
label_10a320:
    // 0x10a320: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x10a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10a324:
    // 0x10a324: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10a328:
    // 0x10a328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10a32c:
    // 0x10a32c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10a330:
    // 0x10a330: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x10a330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_10a334:
    // 0x10a334: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10a334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_10a338:
    // 0x10a338: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10a338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a33c:
    // 0x10a33c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a340:
    // 0x10a340: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10a340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10a344:
    // 0x10a344: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10a344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a348:
    // 0x10a348: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10a348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10a34c:
    // 0x10a34c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10a34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10a350:
    // 0x10a350: 0x3e00008  jr          $ra
label_10a354:
    if (ctx->pc == 0x10A354u) {
        ctx->pc = 0x10A354u;
            // 0x10a354: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x10A358u;
        goto label_fallthrough_0x10a350;
    }
    ctx->pc = 0x10A350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A350u;
            // 0x10a354: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10a350:
    ctx->pc = 0x10A358u;
    ctx->pc = 0x10a358u;
}
