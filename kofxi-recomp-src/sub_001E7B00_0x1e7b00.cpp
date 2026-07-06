#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7B00
// Address: 0x1e7b00 - 0x1e7ba8
void sub_001E7B00_0x1e7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7B00_0x1e7b00");
#endif

    switch (ctx->pc) {
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b38u: goto label_1e7b38;
        case 0x1e7b48u: goto label_1e7b48;
        case 0x1e7b64u: goto label_1e7b64;
        case 0x1e7b74u: goto label_1e7b74;
        case 0x1e7ba0u: goto label_1e7ba0;
        default: break;
    }

    ctx->pc = 0x1e7b00u;

    // 0x1e7b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7b04: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e7b08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7b0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7b10: 0x8c51ec14  lw          $s1, -0x13EC($v0)
    ctx->pc = 0x1e7b10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962196)));
    // 0x1e7b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7b18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7b1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7b20: 0x16230017  bne         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E7B20u;
    {
        const bool branch_taken_0x1e7b20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B20u;
            // 0x1e7b24: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b20) {
            ctx->pc = 0x1E7B80u;
            goto label_1e7b80;
        }
    }
    ctx->pc = 0x1E7B28u;
    // 0x1e7b28: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7B28u;
    SET_GPR_U32(ctx, 31, 0x1E7B30u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B30u; }
        if (ctx->pc != 0x1E7B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B30u; }
        if (ctx->pc != 0x1E7B30u) { return; }
    }
    ctx->pc = 0x1E7B30u;
label_1e7b30:
    // 0x1e7b30: 0xc079e9c  jal         func_1E7A70
    ctx->pc = 0x1E7B30u;
    SET_GPR_U32(ctx, 31, 0x1E7B38u);
    ctx->pc = 0x1E7B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B30u;
            // 0x1e7b34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A70u;
    if (runtime->hasFunction(0x1E7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B38u; }
        if (ctx->pc != 0x1E7B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7A70_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B38u; }
        if (ctx->pc != 0x1E7B38u) { return; }
    }
    ctx->pc = 0x1E7B38u;
label_1e7b38:
    // 0x1e7b38: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E7B38u;
    {
        const bool branch_taken_0x1e7b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E7B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B38u;
            // 0x1e7b3c: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b38) {
            ctx->pc = 0x1E7B80u;
            goto label_1e7b80;
        }
    }
    ctx->pc = 0x1E7B40u;
    // 0x1e7b40: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e7b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7b44: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1e7b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e7b48:
    // 0x1e7b48: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7B48u;
    {
        const bool branch_taken_0x1e7b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b48) {
            ctx->pc = 0x1E7B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B48u;
            // 0x1e7b4c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7B78u;
            goto label_1e7b78;
        }
    }
    ctx->pc = 0x1E7B50u;
    // 0x1e7b50: 0x8e110508  lw          $s1, 0x508($s0)
    ctx->pc = 0x1e7b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
    // 0x1e7b54: 0x56330008  bnel        $s1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7B54u;
    {
        const bool branch_taken_0x1e7b54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e7b54) {
            ctx->pc = 0x1E7B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B54u;
            // 0x1e7b58: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7B78u;
            goto label_1e7b78;
        }
    }
    ctx->pc = 0x1E7B5Cu;
    // 0x1e7b5c: 0xc07876e  jal         func_1E1DB8
    ctx->pc = 0x1E7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B64u);
    ctx->pc = 0x1E7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B5Cu;
            // 0x1e7b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1DB8u;
    if (runtime->hasFunction(0x1E1DB8u)) {
        auto targetFn = runtime->lookupFunction(0x1E1DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B64u; }
        if (ctx->pc != 0x1E7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1DB8_0x1e1db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B64u; }
        if (ctx->pc != 0x1E7B64u) { return; }
    }
    ctx->pc = 0x1E7B64u;
label_1e7b64:
    // 0x1e7b64: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7B64u;
    {
        const bool branch_taken_0x1e7b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E7B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B64u;
            // 0x1e7b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b64) {
            ctx->pc = 0x1E7B74u;
            goto label_1e7b74;
        }
    }
    ctx->pc = 0x1E7B6Cu;
    // 0x1e7b6c: 0xc0785f8  jal         func_1E17E0
    ctx->pc = 0x1E7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B74u);
    ctx->pc = 0x1E17E0u;
    if (runtime->hasFunction(0x1E17E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E17E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B74u; }
        if (ctx->pc != 0x1E7B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E17E0_0x1e17e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B74u; }
        if (ctx->pc != 0x1E7B74u) { return; }
    }
    ctx->pc = 0x1E7B74u;
label_1e7b74:
    // 0x1e7b74: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e7b78:
    // 0x1e7b78: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E7B78u;
    {
        const bool branch_taken_0x1e7b78 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1E7B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B78u;
            // 0x1e7b7c: 0x2610050c  addiu       $s0, $s0, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b78) {
            ctx->pc = 0x1E7B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7b48;
        }
    }
    ctx->pc = 0x1E7B80u;
label_1e7b80:
    // 0x1e7b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7b8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e7b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7b90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B94u;
            // 0x1e7b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B9Cu;
    // 0x1e7b9c: 0x0  nop
    ctx->pc = 0x1e7b9cu;
    // NOP
label_1e7ba0:
    // 0x1e7ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BA0u;
            // 0x1e7ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7BA8u;
    ctx->pc = 0x1e7ba8u;
}
