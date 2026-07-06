#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBB30
// Address: 0x2bbb30 - 0x2bbbd8
void sub_002BBB30_0x2bbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBB30_0x2bbb30");
#endif

    switch (ctx->pc) {
        case 0x2bbb64u: goto label_2bbb64;
        case 0x2bbbb0u: goto label_2bbbb0;
        case 0x2bbbb8u: goto label_2bbbb8;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbbc8u: goto label_2bbbc8;
        case 0x2bbbd0u: goto label_2bbbd0;
        default: break;
    }

    ctx->pc = 0x2bbb30u;

    // 0x2bbb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbb34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbb3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbb40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bbb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb44: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2bbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2bbb48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBB48u;
    {
        const bool branch_taken_0x2bbb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB48u;
            // 0x2bbb4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb48) {
            ctx->pc = 0x2BBB64u;
            goto label_2bbb64;
        }
    }
    ctx->pc = 0x2BBB50u;
    // 0x2bbb50: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2bbb54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBB54u;
    {
        const bool branch_taken_0x2bbb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb54) {
            ctx->pc = 0x2BBB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB54u;
            // 0x2bbb58: 0x8e230028  lw          $v1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBB68u;
            goto label_2bbb68;
        }
    }
    ctx->pc = 0x2BBB5Cu;
    // 0x2bbb5c: 0xc0aeeae  jal         func_2BBAB8
    ctx->pc = 0x2BBB5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB64u);
    ctx->pc = 0x2BBAB8u;
    if (runtime->hasFunction(0x2BBAB8u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB64u; }
        if (ctx->pc != 0x2BBB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAB8_0x2bbab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB64u; }
        if (ctx->pc != 0x2BBB64u) { return; }
    }
    ctx->pc = 0x2BBB64u;
label_2bbb64:
    // 0x2bbb64: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2bbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2bbb68:
    // 0x2bbb68: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBB68u;
    {
        const bool branch_taken_0x2bbb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb68) {
            ctx->pc = 0x2BBB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB68u;
            // 0x2bbb6c: 0xae0300c8  sw          $v1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBB8Cu;
            goto label_2bbb8c;
        }
    }
    ctx->pc = 0x2BBB70u;
    // 0x2bbb70: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x2bbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x2bbb74: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x2bbb78: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x2bbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x2bbb7c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x2bbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2bbb80: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2bbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2bbb84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBB84u;
    {
        const bool branch_taken_0x2bbb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB84u;
            // 0x2bbb88: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb84) {
            ctx->pc = 0x2BBB9Cu;
            goto label_2bbb9c;
        }
    }
    ctx->pc = 0x2BBB8Cu;
label_2bbb8c:
    // 0x2bbb8c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x2bbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2bbb90: 0xac7000c4  sw          $s0, 0xC4($v1)
    ctx->pc = 0x2bbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 16));
    // 0x2bbb94: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x2bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x2bbb98: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x2bbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_2bbb9c:
    // 0x2bbb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbba0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbba8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBA8u;
            // 0x2bbbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBB0u;
label_2bbbb0:
    // 0x2bbbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBB0u;
            // 0x2bbbb4: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBB8u;
label_2bbbb8:
    // 0x2bbbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBB8u;
            // 0x2bbbbc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBC0u;
label_2bbbc0:
    // 0x2bbbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBC0u;
            // 0x2bbbc4: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBC8u;
label_2bbbc8:
    // 0x2bbbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBC8u;
            // 0x2bbbcc: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBD0u;
label_2bbbd0:
    // 0x2bbbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBD0u;
            // 0x2bbbd4: 0x24820048  addiu       $v0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBBD8u;
    ctx->pc = 0x2bbbd8u;
}
