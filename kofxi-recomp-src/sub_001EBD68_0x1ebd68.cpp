#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBD68
// Address: 0x1ebd68 - 0x1ebe18
void sub_001EBD68_0x1ebd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBD68_0x1ebd68");
#endif

    switch (ctx->pc) {
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebe00u: goto label_1ebe00;
        default: break;
    }

    ctx->pc = 0x1ebd68u;

    // 0x1ebd68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebd6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ebd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ebd70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ebd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ebd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ebd78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ebd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ebd80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ebd80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ebd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ebd88: 0xc07af86  jal         func_1EBE18
    ctx->pc = 0x1EBD88u;
    SET_GPR_U32(ctx, 31, 0x1EBD90u);
    ctx->pc = 0x1EBD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD88u;
            // 0x1ebd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE18u;
    if (runtime->hasFunction(0x1EBE18u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD90u; }
        if (ctx->pc != 0x1EBD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE18_0x1ebe18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD90u; }
        if (ctx->pc != 0x1EBD90u) { return; }
    }
    ctx->pc = 0x1EBD90u;
label_1ebd90:
    // 0x1ebd90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd98: 0xc07af9e  jal         func_1EBE78
    ctx->pc = 0x1EBD98u;
    SET_GPR_U32(ctx, 31, 0x1EBDA0u);
    ctx->pc = 0x1EBD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD98u;
            // 0x1ebd9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE78u;
    if (runtime->hasFunction(0x1EBE78u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDA0u; }
        if (ctx->pc != 0x1EBDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE78_0x1ebe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDA0u; }
        if (ctx->pc != 0x1EBDA0u) { return; }
    }
    ctx->pc = 0x1EBDA0u;
label_1ebda0:
    // 0x1ebda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebda4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebda8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EBDA8u;
    {
        const bool branch_taken_0x1ebda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDA8u;
            // 0x1ebdac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda8) {
            ctx->pc = 0x1EBE00u;
            goto label_1ebe00;
        }
    }
    ctx->pc = 0x1EBDB0u;
    // 0x1ebdb0: 0xc07afa0  jal         func_1EBE80
    ctx->pc = 0x1EBDB0u;
    SET_GPR_U32(ctx, 31, 0x1EBDB8u);
    ctx->pc = 0x1EBE80u;
    if (runtime->hasFunction(0x1EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDB8u; }
        if (ctx->pc != 0x1EBDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE80_0x1ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDB8u; }
        if (ctx->pc != 0x1EBDB8u) { return; }
    }
    ctx->pc = 0x1EBDB8u;
label_1ebdb8:
    // 0x1ebdb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EBDB8u;
    {
        const bool branch_taken_0x1ebdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebdb8) {
            ctx->pc = 0x1EBDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDB8u;
            // 0x1ebdbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE04u;
            goto label_1ebe04;
        }
    }
    ctx->pc = 0x1EBDC0u;
    // 0x1ebdc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdc8: 0xc07b220  jal         func_1EC880
    ctx->pc = 0x1EBDC8u;
    SET_GPR_U32(ctx, 31, 0x1EBDD0u);
    ctx->pc = 0x1EBDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDC8u;
            // 0x1ebdcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC880u;
    if (runtime->hasFunction(0x1EC880u)) {
        auto targetFn = runtime->lookupFunction(0x1EC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDD0u; }
        if (ctx->pc != 0x1EBDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC880_0x1ec880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDD0u; }
        if (ctx->pc != 0x1EBDD0u) { return; }
    }
    ctx->pc = 0x1EBDD0u;
label_1ebdd0:
    // 0x1ebdd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBDD8u;
    {
        const bool branch_taken_0x1ebdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDD8u;
            // 0x1ebddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdd8) {
            ctx->pc = 0x1EBE00u;
            goto label_1ebe00;
        }
    }
    ctx->pc = 0x1EBDE0u;
    // 0x1ebde0: 0xc07b0fa  jal         func_1EC3E8
    ctx->pc = 0x1EBDE0u;
    SET_GPR_U32(ctx, 31, 0x1EBDE8u);
    ctx->pc = 0x1EC3E8u;
    if (runtime->hasFunction(0x1EC3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDE8u; }
        if (ctx->pc != 0x1EBDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC3E8_0x1ec3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDE8u; }
        if (ctx->pc != 0x1EBDE8u) { return; }
    }
    ctx->pc = 0x1EBDE8u;
label_1ebde8:
    // 0x1ebde8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBDE8u;
    {
        const bool branch_taken_0x1ebde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebde8) {
            ctx->pc = 0x1EBDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDE8u;
            // 0x1ebdec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE04u;
            goto label_1ebe04;
        }
    }
    ctx->pc = 0x1EBDF0u;
    // 0x1ebdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdf8: 0xc07b1a2  jal         func_1EC688
    ctx->pc = 0x1EBDF8u;
    SET_GPR_U32(ctx, 31, 0x1EBE00u);
    ctx->pc = 0x1EBDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDF8u;
            // 0x1ebdfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC688u;
    if (runtime->hasFunction(0x1EC688u)) {
        auto targetFn = runtime->lookupFunction(0x1EC688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE00u; }
        if (ctx->pc != 0x1EBE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC688_0x1ec688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE00u; }
        if (ctx->pc != 0x1EBE00u) { return; }
    }
    ctx->pc = 0x1EBE00u;
label_1ebe00:
    // 0x1ebe00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebe00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebe04:
    // 0x1ebe04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ebe04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ebe08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ebe08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebe0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ebe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebe10: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE10u;
            // 0x1ebe14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBE18u;
    ctx->pc = 0x1ebe18u;
}
