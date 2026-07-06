#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288060
// Address: 0x288060 - 0x2881f0
void sub_00288060_0x288060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288060_0x288060");
#endif

    switch (ctx->pc) {
        case 0x2880e0u: goto label_2880e0;
        case 0x28811cu: goto label_28811c;
        case 0x288144u: goto label_288144;
        case 0x288160u: goto label_288160;
        case 0x288190u: goto label_288190;
        case 0x2881c8u: goto label_2881c8;
        default: break;
    }

    ctx->pc = 0x288060u;

    // 0x288060: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x288060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x288064: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x288064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288068: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x288068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
    // 0x28806c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x28806cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x288070: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x288070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x288074: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x288074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288078: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x288078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x28807c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x28807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x288080: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x288080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288084: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x288084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x288088: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x288088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x28808c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x28808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x288090: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x288090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x288094: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x288094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288098: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x288098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28809c: 0x16750004  bne         $s3, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x28809Cu;
    {
        const bool branch_taken_0x28809c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x2880A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28809Cu;
            // 0x2880a0: 0xe2a021  addu        $s4, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28809c) {
            ctx->pc = 0x2880B0u;
            goto label_2880b0;
        }
    }
    ctx->pc = 0x2880A4u;
    // 0x2880a4: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x2880a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2880a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2880A8u;
    {
        const bool branch_taken_0x2880a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880A8u;
            // 0x2880ac: 0xe28021  addu        $s0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880a8) {
            ctx->pc = 0x2880B4u;
            goto label_2880b4;
        }
    }
    ctx->pc = 0x2880B0u;
label_2880b0:
    // 0x2880b0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2880b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2880b4:
    // 0x2880b4: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2880b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2880b8: 0x5e400003  bgtzl       $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2880B8u;
    {
        const bool branch_taken_0x2880b8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x2880b8) {
            ctx->pc = 0x2880BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2880B8u;
            // 0x2880bc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2880C8u;
            goto label_2880c8;
        }
    }
    ctx->pc = 0x2880C0u;
    // 0x2880c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2880C0u;
    {
        const bool branch_taken_0x2880c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880C0u;
            // 0x2880c4: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880c0) {
            ctx->pc = 0x2881C8u;
            goto label_2881c8;
        }
    }
    ctx->pc = 0x2880C8u;
label_2880c8:
    // 0x2880c8: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x2880c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2880cc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2880ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2880d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2880D0u;
    {
        const bool branch_taken_0x2880d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880D0u;
            // 0x2880d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880d0) {
            ctx->pc = 0x2880F0u;
            goto label_2880f0;
        }
    }
    ctx->pc = 0x2880D8u;
    // 0x2880d8: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x2880D8u;
    SET_GPR_U32(ctx, 31, 0x2880E0u);
    ctx->pc = 0x2880DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2880D8u;
            // 0x2880dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2880E0u; }
        if (ctx->pc != 0x2880E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2880E0u; }
        if (ctx->pc != 0x2880E0u) { return; }
    }
    ctx->pc = 0x2880E0u;
label_2880e0:
    // 0x2880e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2880E0u;
    {
        const bool branch_taken_0x2880e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2880e0) {
            ctx->pc = 0x2880E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2880E0u;
            // 0x2880e4: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2880FCu;
            goto label_2880fc;
        }
    }
    ctx->pc = 0x2880E8u;
    // 0x2880e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2880E8u;
    {
        const bool branch_taken_0x2880e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880E8u;
            // 0x2880ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880e8) {
            ctx->pc = 0x2881CCu;
            goto label_2881cc;
        }
    }
    ctx->pc = 0x2880F0u;
label_2880f0:
    // 0x2880f0: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2880F0u;
    {
        const bool branch_taken_0x2880f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2880F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880F0u;
            // 0x2880f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880f0) {
            ctx->pc = 0x2881CCu;
            goto label_2881cc;
        }
    }
    ctx->pc = 0x2880F8u;
    // 0x2880f8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2880fc:
    // 0x2880fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288100: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288100u;
    {
        const bool branch_taken_0x288100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x288104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288100u;
            // 0x288104: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288100) {
            ctx->pc = 0x288124u;
            goto label_288124;
        }
    }
    ctx->pc = 0x288108u;
    // 0x288108: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x288108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28810c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288110: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288114: 0xc0a207c  jal         func_2881F0
    ctx->pc = 0x288114u;
    SET_GPR_U32(ctx, 31, 0x28811Cu);
    ctx->pc = 0x288118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288114u;
            // 0x288118: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (runtime->hasFunction(0x2881F0u)) {
        auto targetFn = runtime->lookupFunction(0x2881F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28811Cu; }
        if (ctx->pc != 0x28811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002881F0_0x2881f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28811Cu; }
        if (ctx->pc != 0x28811Cu) { return; }
    }
    ctx->pc = 0x28811Cu;
label_28811c:
    // 0x28811c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28811Cu;
    {
        const bool branch_taken_0x28811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28811c) {
            ctx->pc = 0x288190u;
            goto label_288190;
        }
    }
    ctx->pc = 0x288124u;
label_288124:
    // 0x288124: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x288124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x288128: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288128u;
    {
        const bool branch_taken_0x288128 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x288128) {
            ctx->pc = 0x28812Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288128u;
            // 0x28812c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28814Cu;
            goto label_28814c;
        }
    }
    ctx->pc = 0x288130u;
    // 0x288130: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x288130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x288134: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x288138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28813c: 0xc0a207c  jal         func_2881F0
    ctx->pc = 0x28813Cu;
    SET_GPR_U32(ctx, 31, 0x288144u);
    ctx->pc = 0x288140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28813Cu;
            // 0x288140: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (runtime->hasFunction(0x2881F0u)) {
        auto targetFn = runtime->lookupFunction(0x2881F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288144u; }
        if (ctx->pc != 0x288144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002881F0_0x2881f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288144u; }
        if (ctx->pc != 0x288144u) { return; }
    }
    ctx->pc = 0x288144u;
label_288144:
    // 0x288144: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288144u;
    {
        const bool branch_taken_0x288144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288144) {
            ctx->pc = 0x288190u;
            goto label_288190;
        }
    }
    ctx->pc = 0x28814Cu;
label_28814c:
    // 0x28814c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x28814cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x288150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288150u;
    {
        const bool branch_taken_0x288150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288150u;
            // 0x288154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288150) {
            ctx->pc = 0x288170u;
            goto label_288170;
        }
    }
    ctx->pc = 0x288158u;
    // 0x288158: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x288158u;
    SET_GPR_U32(ctx, 31, 0x288160u);
    ctx->pc = 0x28815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288158u;
            // 0x28815c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288160u; }
        if (ctx->pc != 0x288160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288160u; }
        if (ctx->pc != 0x288160u) { return; }
    }
    ctx->pc = 0x288160u;
label_288160:
    // 0x288160: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x288160u;
    {
        const bool branch_taken_0x288160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288160) {
            ctx->pc = 0x288164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288160u;
            // 0x288164: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288180u;
            goto label_288180;
        }
    }
    ctx->pc = 0x288168u;
    // 0x288168: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x288168u;
    {
        const bool branch_taken_0x288168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288168u;
            // 0x28816c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288168) {
            ctx->pc = 0x2881CCu;
            goto label_2881cc;
        }
    }
    ctx->pc = 0x288170u;
label_288170:
    // 0x288170: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x288170u;
    {
        const bool branch_taken_0x288170 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x288170) {
            ctx->pc = 0x288174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288170u;
            // 0x288174: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288180u;
            goto label_288180;
        }
    }
    ctx->pc = 0x288178u;
    // 0x288178: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x288178u;
    {
        const bool branch_taken_0x288178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288178u;
            // 0x28817c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288178) {
            ctx->pc = 0x2881CCu;
            goto label_2881cc;
        }
    }
    ctx->pc = 0x288180u;
label_288180:
    // 0x288180: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x288180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288184: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x288184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288188: 0xc0a207c  jal         func_2881F0
    ctx->pc = 0x288188u;
    SET_GPR_U32(ctx, 31, 0x288190u);
    ctx->pc = 0x28818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288188u;
            // 0x28818c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (runtime->hasFunction(0x2881F0u)) {
        auto targetFn = runtime->lookupFunction(0x2881F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288190u; }
        if (ctx->pc != 0x288190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002881F0_0x2881f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288190u; }
        if (ctx->pc != 0x288190u) { return; }
    }
    ctx->pc = 0x288190u;
label_288190:
    // 0x288190: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x288190u;
    {
        const bool branch_taken_0x288190 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x288194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288190u;
            // 0x288194: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288190) {
            ctx->pc = 0x2881B8u;
            goto label_2881b8;
        }
    }
    ctx->pc = 0x288198u;
    // 0x288198: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x288198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28819c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2881a0: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2881a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2881a4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2881A4u;
    {
        const bool branch_taken_0x2881a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2881a4) {
            ctx->pc = 0x2881B8u;
            goto label_2881b8;
        }
    }
    ctx->pc = 0x2881ACu;
    // 0x2881ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2881b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2881b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2881b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2881b8:
    // 0x2881b8: 0x12150003  beq         $s0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2881B8u;
    {
        const bool branch_taken_0x2881b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x2881BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881B8u;
            // 0x2881bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881b8) {
            ctx->pc = 0x2881C8u;
            goto label_2881c8;
        }
    }
    ctx->pc = 0x2881C0u;
    // 0x2881c0: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x2881C0u;
    SET_GPR_U32(ctx, 31, 0x2881C8u);
    ctx->pc = 0x2881C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2881C0u;
            // 0x2881c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (runtime->hasFunction(0x286C70u)) {
        auto targetFn = runtime->lookupFunction(0x286C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881C8u; }
        if (ctx->pc != 0x2881C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C70_0x286c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881C8u; }
        if (ctx->pc != 0x2881C8u) { return; }
    }
    ctx->pc = 0x2881C8u;
label_2881c8:
    // 0x2881c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2881c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2881cc:
    // 0x2881cc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2881ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2881d0: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x2881d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2881d4: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2881d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2881d8: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x2881d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2881dc: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2881dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2881e0: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x2881e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2881e4: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2881e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2881e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2881E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2881ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881E8u;
            // 0x2881ec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2881F0u;
    ctx->pc = 0x2881f0u;
}
