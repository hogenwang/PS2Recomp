#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5670
// Address: 0x1e5670 - 0x1e5730
void sub_001E5670_0x1e5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5670_0x1e5670");
#endif

    switch (ctx->pc) {
        case 0x1e5698u: goto label_1e5698;
        case 0x1e56c8u: goto label_1e56c8;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f4u: goto label_1e56f4;
        default: break;
    }

    ctx->pc = 0x1e5670u;

    // 0x1e5670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e567c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5680: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5684: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e5684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5688: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e5688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e568c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5690: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5690u;
    SET_GPR_U32(ctx, 31, 0x1E5698u);
    ctx->pc = 0x1E5694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5690u;
            // 0x1e5694: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5698u; }
        if (ctx->pc != 0x1E5698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5698u; }
        if (ctx->pc != 0x1E5698u) { return; }
    }
    ctx->pc = 0x1E5698u;
label_1e5698:
    // 0x1e5698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e569c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e56a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e56a4: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E56A4u;
    {
        const bool branch_taken_0x1e56a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E56A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56A4u;
            // 0x1e56a8: 0x2484e2d0  addiu       $a0, $a0, -0x1D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56a4) {
            ctx->pc = 0x1E56C8u;
            goto label_1e56c8;
        }
    }
    ctx->pc = 0x1E56ACu;
    // 0x1e56ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e56acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e56b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e56b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e56b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e56b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e56b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e56b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e56bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e56bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e56c0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E56C0u;
    ctx->pc = 0x1E56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56C0u;
            // 0x1e56c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E56C8u;
label_1e56c8:
    // 0x1e56c8: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1E56C8u;
    SET_GPR_U32(ctx, 31, 0x1E56D0u);
    ctx->pc = 0x1E56CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56C8u;
            // 0x1e56cc: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56D0u; }
        if (ctx->pc != 0x1E56D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56D0u; }
        if (ctx->pc != 0x1E56D0u) { return; }
    }
    ctx->pc = 0x1E56D0u;
label_1e56d0:
    // 0x1e56d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e56d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e56d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56d8: 0xc07956a  jal         func_1E55A8
    ctx->pc = 0x1E56D8u;
    SET_GPR_U32(ctx, 31, 0x1E56E0u);
    ctx->pc = 0x1E56DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56D8u;
            // 0x1e56dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55A8u;
    if (runtime->hasFunction(0x1E55A8u)) {
        auto targetFn = runtime->lookupFunction(0x1E55A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E0u; }
        if (ctx->pc != 0x1E56E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E55A8_0x1e55a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E0u; }
        if (ctx->pc != 0x1E56E0u) { return; }
    }
    ctx->pc = 0x1E56E0u;
label_1e56e0:
    // 0x1e56e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e56e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56e4: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1E56E4u;
    SET_GPR_U32(ctx, 31, 0x1E56ECu);
    ctx->pc = 0x1E56E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56E4u;
            // 0x1e56e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53A0u;
    if (runtime->hasFunction(0x1E53A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E53A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56ECu; }
        if (ctx->pc != 0x1E56ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E53A0_0x1e53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56ECu; }
        if (ctx->pc != 0x1E56ECu) { return; }
    }
    ctx->pc = 0x1E56ECu;
label_1e56ec:
    // 0x1e56ec: 0xc0794c0  jal         func_1E5300
    ctx->pc = 0x1E56ECu;
    SET_GPR_U32(ctx, 31, 0x1E56F4u);
    ctx->pc = 0x1E56F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56ECu;
            // 0x1e56f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5300u;
    if (runtime->hasFunction(0x1E5300u)) {
        auto targetFn = runtime->lookupFunction(0x1E5300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56F4u; }
        if (ctx->pc != 0x1E56F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5300_0x1e5300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56F4u; }
        if (ctx->pc != 0x1E56F4u) { return; }
    }
    ctx->pc = 0x1E56F4u;
label_1e56f4:
    // 0x1e56f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e56f8: 0x8e0304e4  lw          $v1, 0x4E4($s0)
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x1e56fc: 0xae0204e8  sw          $v0, 0x4E8($s0)
    ctx->pc = 0x1e56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1256), GPR_U32(ctx, 2));
    // 0x1e5700: 0xae1204f0  sw          $s2, 0x4F0($s0)
    ctx->pc = 0x1e5700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 18));
    // 0x1e5704: 0xae1304f4  sw          $s3, 0x4F4($s0)
    ctx->pc = 0x1e5704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 19));
    // 0x1e5708: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5708u;
    {
        const bool branch_taken_0x1e5708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5708u;
            // 0x1e570c: 0xae1104e0  sw          $s1, 0x4E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5708) {
            ctx->pc = 0x1E5714u;
            goto label_1e5714;
        }
    }
    ctx->pc = 0x1E5710u;
    // 0x1e5710: 0xae1104ec  sw          $s1, 0x4EC($s0)
    ctx->pc = 0x1e5710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 17));
label_1e5714:
    // 0x1e5714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e571c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e571cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5720: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5728: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5728u;
            // 0x1e572c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5730u;
    ctx->pc = 0x1e5730u;
}
