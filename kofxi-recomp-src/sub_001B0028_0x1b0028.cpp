#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0028
// Address: 0x1b0028 - 0x1b00c8
void sub_001B0028_0x1b0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0028_0x1b0028");
#endif

    switch (ctx->pc) {
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b0094u: goto label_1b0094;
        case 0x1b00acu: goto label_1b00ac;
        default: break;
    }

    ctx->pc = 0x1b0028u;

    // 0x1b0028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b002c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b002cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b003c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b003cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0044: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b004c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0050: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0054: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0054u;
    SET_GPR_U32(ctx, 31, 0x1B005Cu);
    ctx->pc = 0x1B0058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0054u;
            // 0x1b0058: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B005Cu; }
        if (ctx->pc != 0x1B005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B005Cu; }
        if (ctx->pc != 0x1B005Cu) { return; }
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0xc06bfa6  jal         func_1AFE98
    ctx->pc = 0x1B005Cu;
    SET_GPR_U32(ctx, 31, 0x1B0064u);
    ctx->pc = 0x1AFE98u;
    if (runtime->hasFunction(0x1AFE98u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0064u; }
        if (ctx->pc != 0x1B0064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFE98_0x1afe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0064u; }
        if (ctx->pc != 0x1B0064u) { return; }
    }
    ctx->pc = 0x1B0064u;
label_1b0064:
    // 0x1b0064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b006c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b006cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0070: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0070u;
    {
        const bool branch_taken_0x1b0070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0070u;
            // 0x1b0074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0070) {
            ctx->pc = 0x1B0094u;
            goto label_1b0094;
        }
    }
    ctx->pc = 0x1B0078u;
    // 0x1b0078: 0xc06bfcc  jal         func_1AFF30
    ctx->pc = 0x1B0078u;
    SET_GPR_U32(ctx, 31, 0x1B0080u);
    ctx->pc = 0x1AFF30u;
    if (runtime->hasFunction(0x1AFF30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0080u; }
        if (ctx->pc != 0x1B0080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF30_0x1aff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0080u; }
        if (ctx->pc != 0x1B0080u) { return; }
    }
    ctx->pc = 0x1B0080u;
label_1b0080:
    // 0x1b0080: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0080u;
    {
        const bool branch_taken_0x1b0080 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0080u;
            // 0x1b0084: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0080) {
            ctx->pc = 0x1B0098u;
            goto label_1b0098;
        }
    }
    ctx->pc = 0x1B0088u;
    // 0x1b0088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b008c: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1B008Cu;
    SET_GPR_U32(ctx, 31, 0x1B0094u);
    ctx->pc = 0x1B0090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B008Cu;
            // 0x1b0090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0094u; }
        if (ctx->pc != 0x1B0094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0094u; }
        if (ctx->pc != 0x1B0094u) { return; }
    }
    ctx->pc = 0x1B0094u;
label_1b0094:
    // 0x1b0094: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0098:
    // 0x1b0098: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b009c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b00a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b00a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b00a4: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B00A4u;
    SET_GPR_U32(ctx, 31, 0x1B00ACu);
    ctx->pc = 0x1B00A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00A4u;
            // 0x1b00a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00ACu; }
        if (ctx->pc != 0x1B00ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00ACu; }
        if (ctx->pc != 0x1B00ACu) { return; }
    }
    ctx->pc = 0x1B00ACu;
label_1b00ac:
    // 0x1b00ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b00acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b00b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b00b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b00b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b00b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b00b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b00bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b00c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B00C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B00C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00C0u;
            // 0x1b00c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B00C8u;
    ctx->pc = 0x1b00c8u;
}
