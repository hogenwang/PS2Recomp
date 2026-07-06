#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECD68
// Address: 0x1ecd68 - 0x1ecdd0
void sub_001ECD68_0x1ecd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECD68_0x1ecd68");
#endif

    switch (ctx->pc) {
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd98u: goto label_1ecd98;
        case 0x1ecda0u: goto label_1ecda0;
        case 0x1ecdb8u: goto label_1ecdb8;
        default: break;
    }

    ctx->pc = 0x1ecd68u;

    // 0x1ecd68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ecd6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ecd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ecd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecd78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ecd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ecd7c: 0xc07b374  jal         func_1ECDD0
    ctx->pc = 0x1ECD7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD84u);
    ctx->pc = 0x1ECD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD7Cu;
            // 0x1ecd80: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDD0u;
    if (runtime->hasFunction(0x1ECDD0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD84u; }
        if (ctx->pc != 0x1ECD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECDD0_0x1ecdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD84u; }
        if (ctx->pc != 0x1ECD84u) { return; }
    }
    ctx->pc = 0x1ECD84u;
label_1ecd84:
    // 0x1ecd84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ecd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ECD88u;
    {
        const bool branch_taken_0x1ecd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD88u;
            // 0x1ecd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd88) {
            ctx->pc = 0x1ECDB8u;
            goto label_1ecdb8;
        }
    }
    ctx->pc = 0x1ECD90u;
    // 0x1ecd90: 0xc07b326  jal         func_1ECC98
    ctx->pc = 0x1ECD90u;
    SET_GPR_U32(ctx, 31, 0x1ECD98u);
    ctx->pc = 0x1ECC98u;
    if (runtime->hasFunction(0x1ECC98u)) {
        auto targetFn = runtime->lookupFunction(0x1ECC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD98u; }
        if (ctx->pc != 0x1ECD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECC98_0x1ecc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD98u; }
        if (ctx->pc != 0x1ECD98u) { return; }
    }
    ctx->pc = 0x1ECD98u;
label_1ecd98:
    // 0x1ecd98: 0xc07b388  jal         func_1ECE20
    ctx->pc = 0x1ECD98u;
    SET_GPR_U32(ctx, 31, 0x1ECDA0u);
    ctx->pc = 0x1ECD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD98u;
            // 0x1ecd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE20u;
    if (runtime->hasFunction(0x1ECE20u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDA0u; }
        if (ctx->pc != 0x1ECDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE20_0x1ece20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECDA0u; }
        if (ctx->pc != 0x1ECDA0u) { return; }
    }
    ctx->pc = 0x1ECDA0u;
label_1ecda0:
    // 0x1ecda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ecda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecda8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ecda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ecdac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecdb0: 0x807b510  j           func_1ED440
    ctx->pc = 0x1ECDB0u;
    ctx->pc = 0x1ECDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDB0u;
            // 0x1ecdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED440u;
    if (runtime->hasFunction(0x1ED440u)) {
        auto targetFn = runtime->lookupFunction(0x1ED440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED440_0x1ed440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ECDB8u;
label_1ecdb8:
    // 0x1ecdb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecdbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ecdc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDC4u;
            // 0x1ecdc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECDCCu;
    // 0x1ecdcc: 0x0  nop
    ctx->pc = 0x1ecdccu;
    // NOP
    ctx->pc = 0x1ecdd0u;
}
