#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295B60
// Address: 0x295b60 - 0x295c90
void sub_00295B60_0x295b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295B60_0x295b60");
#endif

    switch (ctx->pc) {
        case 0x295b94u: goto label_295b94;
        case 0x295bbcu: goto label_295bbc;
        default: break;
    }

    ctx->pc = 0x295b60u;

    // 0x295b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295b64: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x295b68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x295b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x295b6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x295b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295b74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x295b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295b7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x295b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295b84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x295b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x295b8c: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x295B8Cu;
    SET_GPR_U32(ctx, 31, 0x295B94u);
    ctx->pc = 0x295B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B8Cu;
    // 0x295b90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D88u, 0x295B8Cu, 0x295B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B94u;
label_295b94:
    // 0x295b94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b98: 0x8cc3018c  lw          $v1, 0x18C($a2)
    ctx->pc = 0x295b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
    // 0x295b9c: 0x8cc20188  lw          $v0, 0x188($a2)
    ctx->pc = 0x295b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 392)));
    // 0x295ba0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295BA0u;
    {
        const bool branch_taken_0x295ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BA0u;
        // 0x295ba4: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ba0) {
            ctx->pc = 0x295BB0u;
            goto label_295bb0;
        }
    }
    ctx->pc = 0x295BA8u;
    // 0x295ba8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x295BA8u;
    {
        const bool branch_taken_0x295ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BA8u;
        // 0x295bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ba8) {
            ctx->pc = 0x295C70u;
            goto label_295c70;
        }
    }
    ctx->pc = 0x295BB0u;
label_295bb0:
    // 0x295bb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x295bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295bb4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x295bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x295bb8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x295bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_295bbc:
    // 0x295bbc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x295bbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x295bc0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x295bc4: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x295bc4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    // 0x295bc8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x295bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x295bcc: 0x823823  subu        $a3, $a0, $v0
    ctx->pc = 0x295bccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295bd0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x295bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x295bd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x295bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x295bd8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x295BD8u;
    {
        const bool branch_taken_0x295bd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BD8u;
        // 0x295bdc: 0xdca40000  ld          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bd8) {
            ctx->pc = 0x295BE8u;
            goto label_295be8;
        }
    }
    ctx->pc = 0x295BE0u;
    // 0x295be0: 0xacc7018c  sw          $a3, 0x18C($a2)
    ctx->pc = 0x295be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 396), GPR_U32(ctx, 7));
    // 0x295be4: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x295be4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
label_295be8:
    // 0x295be8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x295BE8u;
    {
        const bool branch_taken_0x295be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x295be8) {
            ctx->pc = 0x295C28u;
            goto label_295c28;
        }
    }
    ctx->pc = 0x295BF0u;
    // 0x295bf0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x295BF0u;
    {
        const bool branch_taken_0x295bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BF0u;
        // 0x295bf4: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bf0) {
            ctx->pc = 0x295C28u;
            goto label_295c28;
        }
    }
    ctx->pc = 0x295BF8u;
    // 0x295bf8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x295bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x295bfc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x295bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x295c00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x295C00u;
    {
        const bool branch_taken_0x295c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c00) {
            ctx->pc = 0x295C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C00u;
            // 0x295c04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295C1Cu;
            goto label_295c1c;
        }
    }
    ctx->pc = 0x295C08u;
    // 0x295c08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x295c0c: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x295c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x295c10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x295c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x295c14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295C14u;
    {
        const bool branch_taken_0x295c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C14u;
        // 0x295c18: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c14) {
            ctx->pc = 0x295C28u;
            goto label_295c28;
        }
    }
    ctx->pc = 0x295C1Cu;
label_295c1c:
    // 0x295c1c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x295c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x295c20: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x295c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x295c24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x295c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_295c28:
    // 0x295c28: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x295C28u;
    {
        const bool branch_taken_0x295c28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C28u;
        // 0x295c2c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c28) {
            ctx->pc = 0x295C6Cu;
            goto label_295c6c;
        }
    }
    ctx->pc = 0x295C30u;
    // 0x295c30: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x295c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x295c34: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x295c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x295c38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295C38u;
    {
        const bool branch_taken_0x295c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c38) {
            ctx->pc = 0x295C58u;
            goto label_295c58;
        }
    }
    ctx->pc = 0x295C40u;
    // 0x295c40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x295c44: 0x2442b498  addiu       $v0, $v0, -0x4B68
    ctx->pc = 0x295c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x295c48: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x295C48u;
    {
        const bool branch_taken_0x295c48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C48u;
        // 0x295c4c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c48) {
            ctx->pc = 0x295C6Cu;
            goto label_295c6c;
        }
    }
    ctx->pc = 0x295C50u;
    // 0x295c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295C50u;
    {
        const bool branch_taken_0x295c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C50u;
        // 0x295c54: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c50) {
            ctx->pc = 0x295C6Cu;
            goto label_295c6c;
        }
    }
    ctx->pc = 0x295C58u;
label_295c58:
    // 0x295c58: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x295C58u;
    {
        const bool branch_taken_0x295c58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C58u;
        // 0x295c5c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c58) {
            ctx->pc = 0x295C6Cu;
            goto label_295c6c;
        }
    }
    ctx->pc = 0x295C60u;
    // 0x295c60: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x295c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x295c64: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x295c68: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x295c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_295c6c:
    // 0x295c6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x295c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295c70:
    // 0x295c70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x295c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295c74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x295c74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295c78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x295c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295c88: 0x3e00008  jr          $ra
    ctx->pc = 0x295C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C88u;
        // 0x295c8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295C90u;
}
