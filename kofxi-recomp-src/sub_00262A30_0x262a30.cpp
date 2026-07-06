#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262A30
// Address: 0x262a30 - 0x262ad0
void sub_00262A30_0x262a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A30_0x262a30");
#endif

    switch (ctx->pc) {
        case 0x262a58u: goto label_262a58;
        case 0x262a68u: goto label_262a68;
        case 0x262aacu: goto label_262aac;
        case 0x262ab4u: goto label_262ab4;
        default: break;
    }

    ctx->pc = 0x262a30u;

    // 0x262a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262a3c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x262a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x262a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x262a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262a48: 0x8e441a10  lw          $a0, 0x1A10($s2)
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6672)));
    // 0x262a4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262a50: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x262A50u;
    SET_GPR_U32(ctx, 31, 0x262A58u);
    ctx->pc = 0x262A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262A50u;
            // 0x262a54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A58u; }
        if (ctx->pc != 0x262A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262A58u; }
        if (ctx->pc != 0x262A58u) { return; }
    }
    ctx->pc = 0x262A58u;
label_262a58:
    // 0x262a58: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x262a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x262a5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x262a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x262A60u;
    {
        const bool branch_taken_0x262a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A60u;
            // 0x262a64: 0x8ca4d778  lw          $a0, -0x2888($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a60) {
            ctx->pc = 0x262A6Cu;
            goto label_262a6c;
        }
    }
    ctx->pc = 0x262A68u;
label_262a68:
    // 0x262a68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x262a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_262a6c:
    // 0x262a6c: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x262A6Cu;
    {
        const bool branch_taken_0x262a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a6c) {
            ctx->pc = 0x262A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262A6Cu;
            // 0x262a70: 0x2411ffe4  addiu       $s1, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262A74u;
    // 0x262a74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x262a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x262a78: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x262A78u;
    {
        const bool branch_taken_0x262a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x262a78) {
            ctx->pc = 0x262A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x262A78u;
            // 0x262a7c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x262A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262a68;
        }
    }
    ctx->pc = 0x262A80u;
    // 0x262a80: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A80u;
    {
        const bool branch_taken_0x262a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a80) {
            ctx->pc = 0x262A90u;
            goto label_262a90;
        }
    }
    ctx->pc = 0x262A88u;
    // 0x262a88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262A88u;
    {
        const bool branch_taken_0x262a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A88u;
            // 0x262a8c: 0x2411ffe4  addiu       $s1, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a88) {
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262A90u;
label_262a90:
    // 0x262a90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262A90u;
    {
        const bool branch_taken_0x262a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A90u;
            // 0x262a94: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a90) {
            ctx->pc = 0x262AA0u;
            goto label_262aa0;
        }
    }
    ctx->pc = 0x262A98u;
    // 0x262a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x262A98u;
    {
        const bool branch_taken_0x262a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262A98u;
            // 0x262a9c: 0xaca2d778  sw          $v0, -0x2888($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a98) {
            ctx->pc = 0x262AA4u;
            goto label_262aa4;
        }
    }
    ctx->pc = 0x262AA0u;
label_262aa0:
    // 0x262aa0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x262aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_262aa4:
    // 0x262aa4: 0xc098560  jal         func_261580
    ctx->pc = 0x262AA4u;
    SET_GPR_U32(ctx, 31, 0x262AACu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AACu; }
        if (ctx->pc != 0x262AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AACu; }
        if (ctx->pc != 0x262AACu) { return; }
    }
    ctx->pc = 0x262AACu;
label_262aac:
    // 0x262aac: 0xc043320  jal         func_10CC80
    ctx->pc = 0x262AACu;
    SET_GPR_U32(ctx, 31, 0x262AB4u);
    ctx->pc = 0x262AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262AACu;
            // 0x262ab0: 0x8e441a10  lw          $a0, 0x1A10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AB4u; }
        if (ctx->pc != 0x262AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262AB4u; }
        if (ctx->pc != 0x262AB4u) { return; }
    }
    ctx->pc = 0x262AB4u;
label_262ab4:
    // 0x262ab4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x262ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ab8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262abc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262ac0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x262AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262AC8u;
            // 0x262acc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262AD0u;
    ctx->pc = 0x262ad0u;
}
