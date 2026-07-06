#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261BE0
// Address: 0x261be0 - 0x261ca0
void sub_00261BE0_0x261be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261BE0_0x261be0");
#endif

    switch (ctx->pc) {
        case 0x261c10u: goto label_261c10;
        case 0x261c40u: goto label_261c40;
        case 0x261c60u: goto label_261c60;
        case 0x261c8cu: goto label_261c8c;
        default: break;
    }

    ctx->pc = 0x261be0u;

    // 0x261be0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x261be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x261be4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x261be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261bec: 0x8ca4d768  lw          $a0, -0x2898($a1)
    ctx->pc = 0x261becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956904)));
    // 0x261bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261bf4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x261BF4u;
    {
        const bool branch_taken_0x261bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261BF4u;
            // 0x261bf8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bf4) {
            ctx->pc = 0x261C2Cu;
            goto label_261c2c;
        }
    }
    ctx->pc = 0x261BFCu;
    // 0x261bfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x261c00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x261c04: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x261C04u;
    {
        const bool branch_taken_0x261c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x261c04) {
            ctx->pc = 0x261C24u;
            goto label_261c24;
        }
    }
    ctx->pc = 0x261C0Cu;
    // 0x261c0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_261c10:
    // 0x261c10: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x261C10u;
    {
        const bool branch_taken_0x261c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c10) {
            ctx->pc = 0x261C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261C10u;
            // 0x261c14: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261C30u;
            goto label_261c30;
        }
    }
    ctx->pc = 0x261C18u;
    // 0x261c18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x261c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x261c1c: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x261C1Cu;
    {
        const bool branch_taken_0x261c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x261c1c) {
            ctx->pc = 0x261C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261C1Cu;
            // 0x261c20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261c10;
        }
    }
    ctx->pc = 0x261C24u;
label_261c24:
    // 0x261c24: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261C24u;
    {
        const bool branch_taken_0x261c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C24u;
            // 0x261c28: 0x8ce2d768  lw          $v0, -0x2898($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c24) {
            ctx->pc = 0x261C48u;
            goto label_261c48;
        }
    }
    ctx->pc = 0x261C2Cu;
label_261c2c:
    // 0x261c2c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_261c30:
    // 0x261c30: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x261c34: 0x24a572a8  addiu       $a1, $a1, 0x72A8
    ctx->pc = 0x261c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29352));
    // 0x261c38: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x261C38u;
    SET_GPR_U32(ctx, 31, 0x261C40u);
    ctx->pc = 0x261C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261C38u;
            // 0x261c3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C40u; }
        if (ctx->pc != 0x261C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C40u; }
        if (ctx->pc != 0x261C40u) { return; }
    }
    ctx->pc = 0x261C40u;
label_261c40:
    // 0x261c40: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x261C40u;
    {
        const bool branch_taken_0x261c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C40u;
            // 0x261c44: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c40) {
            ctx->pc = 0x261C90u;
            goto label_261c90;
        }
    }
    ctx->pc = 0x261C48u;
label_261c48:
    // 0x261c48: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261C48u;
    {
        const bool branch_taken_0x261c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x261C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C48u;
            // 0x261c4c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c48) {
            ctx->pc = 0x261C64u;
            goto label_261c64;
        }
    }
    ctx->pc = 0x261C50u;
    // 0x261c50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x261c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x261c54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x261C54u;
    {
        const bool branch_taken_0x261c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C54u;
            // 0x261c58: 0xaca2d768  sw          $v0, -0x2898($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c54) {
            ctx->pc = 0x261C84u;
            goto label_261c84;
        }
    }
    ctx->pc = 0x261C5Cu;
    // 0x261c5c: 0x0  nop
    ctx->pc = 0x261c5cu;
    // NOP
label_261c60:
    // 0x261c60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x261c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261c64:
    // 0x261c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x261c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261c68: 0x0  nop
    ctx->pc = 0x261c68u;
    // NOP
    // 0x261c6c: 0x0  nop
    ctx->pc = 0x261c6cu;
    // NOP
    // 0x261c70: 0x0  nop
    ctx->pc = 0x261c70u;
    // NOP
    // 0x261c74: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x261C74u;
    {
        const bool branch_taken_0x261c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x261c74) {
            ctx->pc = 0x261C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261c60;
        }
    }
    ctx->pc = 0x261C7Cu;
    // 0x261c7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261c80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x261c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_261c84:
    // 0x261c84: 0xc098560  jal         func_261580
    ctx->pc = 0x261C84u;
    SET_GPR_U32(ctx, 31, 0x261C8Cu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C8Cu; }
        if (ctx->pc != 0x261C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261C8Cu; }
        if (ctx->pc != 0x261C8Cu) { return; }
    }
    ctx->pc = 0x261C8Cu;
label_261c8c:
    // 0x261c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261c90:
    // 0x261c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261c94: 0x3e00008  jr          $ra
    ctx->pc = 0x261C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261C94u;
            // 0x261c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261C9Cu;
    // 0x261c9c: 0x0  nop
    ctx->pc = 0x261c9cu;
    // NOP
    ctx->pc = 0x261ca0u;
}
