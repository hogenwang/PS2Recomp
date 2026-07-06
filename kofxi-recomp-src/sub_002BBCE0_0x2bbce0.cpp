#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBCE0
// Address: 0x2bbce0 - 0x2bbd30
void sub_002BBCE0_0x2bbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBCE0_0x2bbce0");
#endif

    switch (ctx->pc) {
        case 0x2bbd00u: goto label_2bbd00;
        case 0x2bbd10u: goto label_2bbd10;
        default: break;
    }

    ctx->pc = 0x2bbce0u;

    // 0x2bbce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbce8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbcf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bbcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbcf8: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBCF8u;
    SET_GPR_U32(ctx, 31, 0x2BBD00u);
    ctx->pc = 0x2BBCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCF8u;
            // 0x2bbcfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD00u; }
        if (ctx->pc != 0x2BBD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD00u; }
        if (ctx->pc != 0x2BBD00u) { return; }
    }
    ctx->pc = 0x2BBD00u;
label_2bbd00:
    // 0x2bbd00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBD00u;
    {
        const bool branch_taken_0x2bbd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD00u;
            // 0x2bbd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd00) {
            ctx->pc = 0x2BBD18u;
            goto label_2bbd18;
        }
    }
    ctx->pc = 0x2BBD08u;
    // 0x2bbd08: 0xc0a723e  jal         func_29C8F8
    ctx->pc = 0x2BBD08u;
    SET_GPR_U32(ctx, 31, 0x2BBD10u);
    ctx->pc = 0x2BBD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD08u;
            // 0x2bbd0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F8u;
    if (runtime->hasFunction(0x29C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x29C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD10u; }
        if (ctx->pc != 0x2BBD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8F8_0x29c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD10u; }
        if (ctx->pc != 0x2BBD10u) { return; }
    }
    ctx->pc = 0x2BBD10u;
label_2bbd10:
    // 0x2bbd10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBD10u;
    {
        const bool branch_taken_0x2bbd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD10u;
            // 0x2bbd14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd10) {
            ctx->pc = 0x2BBD20u;
            goto label_2bbd20;
        }
    }
    ctx->pc = 0x2BBD18u;
label_2bbd18:
    // 0x2bbd18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbd20:
    // 0x2bbd20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD28u;
            // 0x2bbd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBD30u;
    ctx->pc = 0x2bbd30u;
}
