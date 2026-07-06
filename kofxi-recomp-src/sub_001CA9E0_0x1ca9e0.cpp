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

// Function: sub_001CA9E0
// Address: 0x1ca9e0 - 0x1caad8
void sub_001CA9E0_0x1ca9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA9E0_0x1ca9e0");
#endif

    switch (ctx->pc) {
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa94u: goto label_1caa94;
        case 0x1caabcu: goto label_1caabc;
        case 0x1caac4u: goto label_1caac4;
        default: break;
    }

    ctx->pc = 0x1ca9e0u;

    // 0x1ca9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca9e4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ca9e8: 0x24c286e8  addiu       $v0, $a2, -0x7918
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936296));
    // 0x1ca9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca9f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca9f4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ca9f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ca9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1caa04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CAA34u;
            goto label_1caa34;
        }
    }
    ctx->pc = 0x1CAA0Cu;
    // 0x1caa0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1caa10:
    // 0x1caa10: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1caa10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1caa14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAA14u;
    {
        const bool branch_taken_0x1caa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA14u;
        // 0x1caa18: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa14) {
            ctx->pc = 0x1CAA34u;
            goto label_1caa34;
        }
    }
    ctx->pc = 0x1CAA1Cu;
    // 0x1caa1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1caa20: 0x0  nop
    ctx->pc = 0x1caa20u;
    // NOP
    // 0x1caa24: 0x0  nop
    ctx->pc = 0x1caa24u;
    // NOP
    // 0x1caa28: 0x0  nop
    ctx->pc = 0x1caa28u;
    // NOP
    // 0x1caa2c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CAA2Cu;
    {
        const bool branch_taken_0x1caa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caa2c) {
            ctx->pc = 0x1CAA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAA2Cu;
            // 0x1caa30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1caa10;
        }
    }
    ctx->pc = 0x1CAA34u;
label_1caa34:
    // 0x1caa34: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1caa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1caa38: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CAA38u;
    {
        const bool branch_taken_0x1caa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA38u;
        // 0x1caa3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa38) {
            ctx->pc = 0x1CAA98u;
            goto label_1caa98;
        }
    }
    ctx->pc = 0x1CAA40u;
    // 0x1caa40: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x1caa40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1caa44: 0x24c286e8  addiu       $v0, $a2, -0x7918
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936296));
    // 0x1caa48: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1caa4c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1caa50: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1caa50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1caa54: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1caa54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1caa58: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1caa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1caa5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1caa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1caa60: 0x246386b0  addiu       $v1, $v1, -0x7950
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x1caa64: 0x24c6b838  addiu       $a2, $a2, -0x47C8
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948920));
    // 0x1caa68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa6c: 0x24a5a830  addiu       $a1, $a1, -0x57D0
    ctx->pc = 0x1caa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944816));
    // 0x1caa70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1caa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1caa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1caa7c: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x1caa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x1caa80: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x1caa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x1caa84: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x1caa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x1caa88: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1caa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1caa8c: 0xc072b34  jal         func_1CACD0
    ctx->pc = 0x1CAA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA94u);
    ctx->pc = 0x1CAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA8Cu;
    // 0x1caa90: 0xae100020  sw          $s0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CACD0u, 0x1CAA8Cu, 0x1CAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA94u;
label_1caa94:
    // 0x1caa94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1caa94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1caa98:
    // 0x1caa98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caa9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAA0u;
        // 0x1caaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAAA8u;
    // 0x1caaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caab4: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CAAB4u;
    SET_GPR_U32(ctx, 31, 0x1CAABCu);
    ctx->pc = 0x1CAAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAB4u;
    // 0x1caab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CAAB4u, 0x1CAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAABCu;
label_1caabc:
    // 0x1caabc: 0xc072ab6  jal         func_1CAAD8
    ctx->pc = 0x1CAABCu;
    SET_GPR_U32(ctx, 31, 0x1CAAC4u);
    ctx->pc = 0x1CAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAABCu;
    // 0x1caac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAAD8u, 0x1CAABCu, 0x1CAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAC4u;
label_1caac4:
    // 0x1caac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caacc: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CAACCu;
    ctx->pc = 0x1CAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAACCu;
    // 0x1caad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAAD4u;
    // 0x1caad4: 0x0  nop
    ctx->pc = 0x1caad4u;
    // NOP
    if (ctx->pc == 0x1caad4u) { ctx->pc = 0x1caad8u; }
}
