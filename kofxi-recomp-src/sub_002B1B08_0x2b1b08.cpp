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

// Function: sub_002B1B08
// Address: 0x2b1b08 - 0x2b1bc0
void sub_002B1B08_0x2b1b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1B08_0x2b1b08");
#endif

    switch (ctx->pc) {
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1ba8u: goto label_2b1ba8;
        default: break;
    }

    ctx->pc = 0x2b1b08u;

    // 0x2b1b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b1b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b1b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1b14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b1b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b1b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b20: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1B20u;
    {
        const bool branch_taken_0x2b1b20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B20u;
        // 0x2b1b24: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b20) {
            ctx->pc = 0x2B1B38u;
            goto label_2b1b38;
        }
    }
    ctx->pc = 0x2B1B28u;
    // 0x2b1b28: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1b2c: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x2b1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2b1b30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B1B30u;
    {
        const bool branch_taken_0x2b1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B30u;
        // 0x2b1b34: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b30) {
            ctx->pc = 0x2B1B74u;
            goto label_2b1b74;
        }
    }
    ctx->pc = 0x2B1B38u;
label_2b1b38:
    // 0x2b1b38: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2b1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2b1b3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1B3Cu;
    {
        const bool branch_taken_0x2b1b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b3c) {
            ctx->pc = 0x2B1B54u;
            goto label_2b1b54;
        }
    }
    ctx->pc = 0x2B1B44u;
    // 0x2b1b44: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2b1b48: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2b1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2b1b4c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B1B4Cu;
    {
        const bool branch_taken_0x2b1b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b1b4c) {
            ctx->pc = 0x2B1BA0u;
            goto label_2b1ba0;
        }
    }
    ctx->pc = 0x2B1B54u;
label_2b1b54:
    // 0x2b1b54: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B1B54u;
    SET_GPR_U32(ctx, 31, 0x2B1B5Cu);
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2B1B54u, 0x2B1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B5Cu;
label_2b1b5c:
    // 0x2b1b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b60: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1B60u;
    {
        const bool branch_taken_0x2b1b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b60) {
            ctx->pc = 0x2B1B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B60u;
            // 0x2b1b64: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1B68u;
    // 0x2b1b68: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1b6c: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x2b1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2b1b70: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b1b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b1b74:
    // 0x2b1b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b78: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1B78u;
    SET_GPR_U32(ctx, 31, 0x2B1B80u);
    ctx->pc = 0x2B1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B78u;
    // 0x2b1b7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B1B78u, 0x2B1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B80u;
label_2b1b80:
    // 0x2b1b80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1B80u;
    {
        const bool branch_taken_0x2b1b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B80u;
        // 0x2b1b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b80) {
            ctx->pc = 0x2B1BA8u;
            goto label_2b1ba8;
        }
    }
    ctx->pc = 0x2B1B88u;
label_2b1b88:
    // 0x2b1b88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1B88u;
    {
        const bool branch_taken_0x2b1b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b88) {
            ctx->pc = 0x2B1B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B88u;
            // 0x2b1b8c: 0xae300084  sw          $s0, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B9Cu;
            goto label_2b1b9c;
        }
    }
    ctx->pc = 0x2B1B90u;
    // 0x2b1b90: 0xc0abe62  jal         func_2AF988
    ctx->pc = 0x2B1B90u;
    SET_GPR_U32(ctx, 31, 0x2B1B98u);
    ctx->pc = 0x2AF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF988u, 0x2B1B90u, 0x2B1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B98u;
label_2b1b98:
    // 0x2b1b98: 0xae300084  sw          $s0, 0x84($s1)
    ctx->pc = 0x2b1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
label_2b1b9c:
    // 0x2b1b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ba0:
    // 0x2b1ba0: 0xc0ac65a  jal         func_2B1968
    ctx->pc = 0x2B1BA0u;
    SET_GPR_U32(ctx, 31, 0x2B1BA8u);
    ctx->pc = 0x2B1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BA0u;
    // 0x2b1ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1968u, 0x2B1BA0u, 0x2B1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BA8u;
label_2b1ba8:
    // 0x2b1ba8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b1ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1bb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BB8u;
        // 0x2b1bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1BC0u;
}
