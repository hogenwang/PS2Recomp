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

// Function: sub_001A6C18
// Address: 0x1a6c18 - 0x1a6cf8
void sub_001A6C18_0x1a6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6C18_0x1a6c18");
#endif

    switch (ctx->pc) {
        case 0x1a6c2cu: goto label_1a6c2c;
        default: break;
    }

    ctx->pc = 0x1a6c18u;

    // 0x1a6c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6c24: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A6C24u;
    SET_GPR_U32(ctx, 31, 0x1A6C2Cu);
    ctx->pc = 0x1A6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C24u;
    // 0x1a6c28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A6C24u, 0x1A6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C2Cu;
label_1a6c2c:
    // 0x1a6c2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c30: 0x101282  srl         $v0, $s0, 10
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x1a6c34: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6C34u;
    {
        const bool branch_taken_0x1a6c34 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C34u;
        // 0x1a6c38: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c34) {
            ctx->pc = 0x1A6C4Cu;
            goto label_1a6c4c;
        }
    }
    ctx->pc = 0x1A6C3Cu;
    // 0x1a6c3c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a6c40: 0x320203ff  andi        $v0, $s0, 0x3FF
    ctx->pc = 0x1a6c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1023);
    // 0x1a6c44: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6C44u;
    {
        const bool branch_taken_0x1a6c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6c44) {
            ctx->pc = 0x1A6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C44u;
            // 0x1a6c48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6C58u;
            goto label_1a6c58;
        }
    }
    ctx->pc = 0x1A6C4Cu;
label_1a6c4c:
    // 0x1a6c4c: 0x3c058106  lui         $a1, 0x8106
    ctx->pc = 0x1a6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6c50: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A6C50u;
    {
        const bool branch_taken_0x1a6c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C50u;
        // 0x1a6c54: 0x34a58002  ori         $a1, $a1, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c50) {
            ctx->pc = 0x1A6CD4u;
            goto label_1a6cd4;
        }
    }
    ctx->pc = 0x1A6C58u;
label_1a6c58:
    // 0x1a6c58: 0x24a4e118  addiu       $a0, $a1, -0x1EE8
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959384));
    // 0x1a6c5c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1a6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a6c60: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6C60u;
    {
        const bool branch_taken_0x1a6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a6c60) {
            ctx->pc = 0x1A6C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C60u;
            // 0x1a6c64: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6C74u;
            goto label_1a6c74;
        }
    }
    ctx->pc = 0x1A6C68u;
    // 0x1a6c68: 0x3c058106  lui         $a1, 0x8106
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33030 << 16));
    // 0x1a6c6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6C6Cu;
    {
        const bool branch_taken_0x1a6c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C6Cu;
        // 0x1a6c70: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c6c) {
            ctx->pc = 0x1A6CD4u;
            goto label_1a6cd4;
        }
    }
    ctx->pc = 0x1A6C74u;
label_1a6c74:
    // 0x1a6c74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a6c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a6c78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6C78u;
    {
        const bool branch_taken_0x1a6c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c78) {
            ctx->pc = 0x1A6CACu;
            goto label_1a6cac;
        }
    }
    ctx->pc = 0x1A6C80u;
    // 0x1a6c80: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C84u;
    {
        const bool branch_taken_0x1a6c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C84u;
        // 0x1a6c88: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c84) {
            ctx->pc = 0x1A6C94u;
            goto label_1a6c94;
        }
    }
    ctx->pc = 0x1A6C8Cu;
    // 0x1a6c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6C8Cu;
    {
        const bool branch_taken_0x1a6c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c8c) {
            ctx->pc = 0x1A6C98u;
            goto label_1a6c98;
        }
    }
    ctx->pc = 0x1A6C94u;
label_1a6c94:
    // 0x1a6c94: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1a6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1a6c98:
    // 0x1a6c98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6C98u;
    {
        const bool branch_taken_0x1a6c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c98) {
            ctx->pc = 0x1A6C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C98u;
            // 0x1a6c9c: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6CACu;
            goto label_1a6cac;
        }
    }
    ctx->pc = 0x1A6CA0u;
    // 0x1a6ca0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6ca4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a6ca8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1a6ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1a6cac:
    // 0x1a6cac: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1a6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1a6cb0: 0x24a2e118  addiu       $v0, $a1, -0x1EE8
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959384));
    // 0x1a6cb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1a6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1a6cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cbc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a6cc0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a6cc4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a6cc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a6ccc: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1a6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1a6cd0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1a6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_1a6cd4:
    // 0x1a6cd4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6CD4u;
    {
        const bool branch_taken_0x1a6cd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD4u;
        // 0x1a6cd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cd4) {
            ctx->pc = 0x1A6CE8u;
            goto label_1a6ce8;
        }
    }
    ctx->pc = 0x1A6CDCu;
    // 0x1a6cdc: 0xf  sync
    ctx->pc = 0x1a6cdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6ce0: 0x42000038  ei
    ctx->pc = 0x1a6ce0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a6ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6ce8:
    // 0x1a6ce8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a6ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CF0u;
        // 0x1a6cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CF8u;
}
