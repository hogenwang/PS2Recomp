#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7D40
// Address: 0x1c7d40 - 0x1c7de0
void sub_001C7D40_0x1c7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7D40_0x1c7d40");
#endif

    switch (ctx->pc) {
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7dc4u: goto label_1c7dc4;
        default: break;
    }

    ctx->pc = 0x1c7d40u;

    // 0x1c7d40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d48: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1c7d48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c7d4c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x1c7d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c7d50:
    // 0x1c7d50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c7d54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c7d58: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1c7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c7d5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c7d60: 0x28a30060  slti        $v1, $a1, 0x60
    ctx->pc = 0x1c7d60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1c7d64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c7d68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7D68u;
    {
        const bool branch_taken_0x1c7d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D68u;
            // 0x1c7d6c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d68) {
            ctx->pc = 0x1C7D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7d50;
        }
    }
    ctx->pc = 0x1C7D70u;
    // 0x1c7d70: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c7d74: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1c7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1c7d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D78u;
            // 0x1c7d7c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7D80u;
label_1c7d80:
    // 0x1c7d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7d88: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1c7d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7d98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c7d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7da0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c7da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7da8: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7DA8u;
    SET_GPR_U32(ctx, 31, 0x1C7DB0u);
    ctx->pc = 0x1C7DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DA8u;
            // 0x1c7dac: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (runtime->hasFunction(0x1C7A08u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DB0u; }
        if (ctx->pc != 0x1C7DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7A08_0x1c7a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DB0u; }
        if (ctx->pc != 0x1C7DB0u) { return; }
    }
    ctx->pc = 0x1C7DB0u;
label_1c7db0:
    // 0x1c7db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7db4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7db8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c7db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dbc: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x1C7DBCu;
    SET_GPR_U32(ctx, 31, 0x1C7DC4u);
    ctx->pc = 0x1C7DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DBCu;
            // 0x1c7dc0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (runtime->hasFunction(0x1C7DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C7DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC4u; }
        if (ctx->pc != 0x1C7DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7DE0_0x1c7de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC4u; }
        if (ctx->pc != 0x1C7DC4u) { return; }
    }
    ctx->pc = 0x1C7DC4u;
label_1c7dc4:
    // 0x1c7dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7dcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7dd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7dd8: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7DD8u;
    ctx->pc = 0x1C7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DD8u;
            // 0x1c7ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    if (runtime->hasFunction(0x1C7A20u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C7DE0u;
    ctx->pc = 0x1c7de0u;
}
