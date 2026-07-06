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

// Function: sub_001C6E28
// Address: 0x1c6e28 - 0x1c6ef0
void sub_001C6E28_0x1c6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6E28_0x1c6e28");
#endif

    switch (ctx->pc) {
        case 0x1c6e78u: goto label_1c6e78;
        case 0x1c6ec0u: goto label_1c6ec0;
        default: break;
    }

    ctx->pc = 0x1c6e28u;

    // 0x1c6e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6e3c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6e40: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6E40u;
    {
        const bool branch_taken_0x1c6e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e40) {
            ctx->pc = 0x1C6E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6E40u;
            // 0x1c6e44: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6E68u;
            goto label_1c6e68;
        }
    }
    ctx->pc = 0x1C6E48u;
    // 0x1c6e48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6e54: 0x2484aa60  addiu       $a0, $a0, -0x55A0
    ctx->pc = 0x1c6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945376));
    // 0x1c6e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e5c: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C6E5Cu;
    ctx->pc = 0x1C6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E5Cu;
    // 0x1c6e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6E64u;
    // 0x1c6e64: 0x0  nop
    ctx->pc = 0x1c6e64u;
    // NOP
label_1c6e68:
    // 0x1c6e68: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c6e6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c6e70: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1C6E70u;
    SET_GPR_U32(ctx, 31, 0x1C6E78u);
    ctx->pc = 0x1C6E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E70u;
    // 0x1c6e74: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C60u, 0x1C6E70u, 0x1C6E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E78u;
label_1c6e78:
    // 0x1c6e78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6e80: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6E80u;
    {
        const bool branch_taken_0x1c6e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E80u;
        // 0x1c6e84: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e80) {
            ctx->pc = 0x1C6EC8u;
            goto label_1c6ec8;
        }
    }
    ctx->pc = 0x1C6E88u;
    // 0x1c6e88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6E88u;
    {
        const bool branch_taken_0x1c6e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E88u;
        // 0x1c6e8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e88) {
            ctx->pc = 0x1C6EA8u;
            goto label_1c6ea8;
        }
    }
    ctx->pc = 0x1C6E90u;
    // 0x1c6e90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6e94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6E94u;
    {
        const bool branch_taken_0x1c6e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6e94) {
            ctx->pc = 0x1C6EB8u;
            goto label_1c6eb8;
        }
    }
    ctx->pc = 0x1C6E9Cu;
    // 0x1c6e9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C6E9Cu;
    {
        const bool branch_taken_0x1c6e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E9Cu;
        // 0x1c6ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e9c) {
            ctx->pc = 0x1C6EDCu;
            goto label_1c6edc;
        }
    }
    ctx->pc = 0x1C6EA4u;
    // 0x1c6ea4: 0x0  nop
    ctx->pc = 0x1c6ea4u;
    // NOP
label_1c6ea8:
    // 0x1c6ea8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6EA8u;
    {
        const bool branch_taken_0x1c6ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6ea8) {
            ctx->pc = 0x1C6EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6EA8u;
            // 0x1c6eac: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6ED8u;
            goto label_1c6ed8;
        }
    }
    ctx->pc = 0x1C6EB0u;
    // 0x1c6eb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6EB0u;
    {
        const bool branch_taken_0x1c6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EB0u;
        // 0x1c6eb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eb0) {
            ctx->pc = 0x1C6EDCu;
            goto label_1c6edc;
        }
    }
    ctx->pc = 0x1C6EB8u;
label_1c6eb8:
    // 0x1c6eb8: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1C6EB8u;
    SET_GPR_U32(ctx, 31, 0x1C6EC0u);
    ctx->pc = 0x1C6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EB8u;
    // 0x1c6ebc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1C6EB8u, 0x1C6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EC0u;
label_1c6ec0:
    // 0x1c6ec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6EC0u;
    {
        const bool branch_taken_0x1c6ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC0u;
        // 0x1c6ec4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ec0) {
            ctx->pc = 0x1C6ED8u;
            goto label_1c6ed8;
        }
    }
    ctx->pc = 0x1C6EC8u;
label_1c6ec8:
    // 0x1c6ec8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1c6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c6ecc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6ed0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1c6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1c6ed4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1c6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1c6ed8:
    // 0x1c6ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6edc:
    // 0x1c6edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EE4u;
        // 0x1c6ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6EECu;
    // 0x1c6eec: 0x0  nop
    ctx->pc = 0x1c6eecu;
    // NOP
    if (ctx->pc == 0x1c6eecu) { ctx->pc = 0x1c6ef0u; }
}
