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

// Function: sub_001CCBA0
// Address: 0x1ccba0 - 0x1cccb0
void sub_001CCBA0_0x1ccba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCBA0_0x1ccba0");
#endif

    switch (ctx->pc) {
        case 0x1ccba0u: goto label_1ccba0;
        case 0x1ccba4u: goto label_1ccba4;
        case 0x1ccba8u: goto label_1ccba8;
        case 0x1ccbacu: goto label_1ccbac;
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbb4u: goto label_1ccbb4;
        case 0x1ccbb8u: goto label_1ccbb8;
        case 0x1ccbbcu: goto label_1ccbbc;
        case 0x1ccbc0u: goto label_1ccbc0;
        case 0x1ccbc4u: goto label_1ccbc4;
        case 0x1ccbc8u: goto label_1ccbc8;
        case 0x1ccbccu: goto label_1ccbcc;
        case 0x1ccbd0u: goto label_1ccbd0;
        case 0x1ccbd4u: goto label_1ccbd4;
        case 0x1ccbd8u: goto label_1ccbd8;
        case 0x1ccbdcu: goto label_1ccbdc;
        case 0x1ccbe0u: goto label_1ccbe0;
        case 0x1ccbe4u: goto label_1ccbe4;
        case 0x1ccbe8u: goto label_1ccbe8;
        case 0x1ccbecu: goto label_1ccbec;
        case 0x1ccbf0u: goto label_1ccbf0;
        case 0x1ccbf4u: goto label_1ccbf4;
        case 0x1ccbf8u: goto label_1ccbf8;
        case 0x1ccbfcu: goto label_1ccbfc;
        case 0x1ccc00u: goto label_1ccc00;
        case 0x1ccc04u: goto label_1ccc04;
        case 0x1ccc08u: goto label_1ccc08;
        case 0x1ccc0cu: goto label_1ccc0c;
        case 0x1ccc10u: goto label_1ccc10;
        case 0x1ccc14u: goto label_1ccc14;
        case 0x1ccc18u: goto label_1ccc18;
        case 0x1ccc1cu: goto label_1ccc1c;
        case 0x1ccc20u: goto label_1ccc20;
        case 0x1ccc24u: goto label_1ccc24;
        case 0x1ccc28u: goto label_1ccc28;
        case 0x1ccc2cu: goto label_1ccc2c;
        case 0x1ccc30u: goto label_1ccc30;
        case 0x1ccc34u: goto label_1ccc34;
        case 0x1ccc38u: goto label_1ccc38;
        case 0x1ccc3cu: goto label_1ccc3c;
        case 0x1ccc40u: goto label_1ccc40;
        case 0x1ccc44u: goto label_1ccc44;
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc4cu: goto label_1ccc4c;
        case 0x1ccc50u: goto label_1ccc50;
        case 0x1ccc54u: goto label_1ccc54;
        case 0x1ccc58u: goto label_1ccc58;
        case 0x1ccc5cu: goto label_1ccc5c;
        case 0x1ccc60u: goto label_1ccc60;
        case 0x1ccc64u: goto label_1ccc64;
        case 0x1ccc68u: goto label_1ccc68;
        case 0x1ccc6cu: goto label_1ccc6c;
        case 0x1ccc70u: goto label_1ccc70;
        case 0x1ccc74u: goto label_1ccc74;
        case 0x1ccc78u: goto label_1ccc78;
        case 0x1ccc7cu: goto label_1ccc7c;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1ccc84u: goto label_1ccc84;
        case 0x1ccc88u: goto label_1ccc88;
        case 0x1ccc8cu: goto label_1ccc8c;
        case 0x1ccc90u: goto label_1ccc90;
        case 0x1ccc94u: goto label_1ccc94;
        case 0x1ccc98u: goto label_1ccc98;
        case 0x1ccc9cu: goto label_1ccc9c;
        case 0x1ccca0u: goto label_1ccca0;
        case 0x1ccca4u: goto label_1ccca4;
        case 0x1ccca8u: goto label_1ccca8;
        case 0x1cccacu: goto label_1cccac;
        default: break;
    }

    ctx->pc = 0x1ccba0u;

label_1ccba0:
    // 0x1ccba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccba4:
    // 0x1ccba4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1ccba8:
    if (ctx->pc == 0x1CCBA8u) {
        ctx->pc = 0x1CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA4u;
        // 0x1ccba8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBACu;
        goto label_1ccbac;
    }
    ctx->pc = 0x1CCBA4u;
    {
        const bool branch_taken_0x1ccba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA4u;
        // 0x1ccba8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccba4) {
            ctx->pc = 0x1CCBC0u;
            goto label_1ccbc0;
        }
    }
    ctx->pc = 0x1CCBACu;
label_1ccbac:
    // 0x1ccbac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ccbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ccbb0:
    // 0x1ccbb0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1ccbb4:
    // 0x1ccbb4: 0x2484bca0  addiu       $a0, $a0, -0x4360
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
label_1ccbb8:
    // 0x1ccbb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ccbbc:
    if (ctx->pc == 0x1CCBBCu) {
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBC0u;
        goto label_1ccbc0;
    }
    ctx->pc = 0x1CCBB8u;
    {
        const bool branch_taken_0x1ccbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb8) {
            ctx->pc = 0x1CCBDCu;
            goto label_1ccbdc;
        }
    }
    ctx->pc = 0x1CCBC0u;
label_1ccbc0:
    // 0x1ccbc0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1ccbc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1ccbc4:
    // 0x1ccbc4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1ccbc8:
    if (ctx->pc == 0x1CCBC8u) {
        ctx->pc = 0x1CCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBC4u;
        // 0x1ccbc8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBCCu;
        goto label_1ccbcc;
    }
    ctx->pc = 0x1CCBC4u;
    {
        const bool branch_taken_0x1ccbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbc4) {
            ctx->pc = 0x1CCBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCBC4u;
            // 0x1ccbc8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCBF0u;
            goto label_1ccbf0;
        }
    }
    ctx->pc = 0x1CCBCCu;
label_1ccbcc:
    // 0x1ccbcc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ccbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ccbd0:
    // 0x1ccbd0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ccbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1ccbd4:
    // 0x1ccbd4: 0x2484bcb0  addiu       $a0, $a0, -0x4350
    ctx->pc = 0x1ccbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950064));
label_1ccbd8:
    // 0x1ccbd8: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1ccbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1ccbdc:
    // 0x1ccbdc: 0xc073006  jal         func_1CC018
label_1ccbe0:
    if (ctx->pc == 0x1CCBE0u) {
        ctx->pc = 0x1CCBE4u;
        goto label_1ccbe4;
    }
    ctx->pc = 0x1CCBDCu;
    SET_GPR_U32(ctx, 31, 0x1CCBE4u);
    ctx->pc = 0x1CC018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC018u, 0x1CCBDCu, 0x1CCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBE4u;
label_1ccbe4:
    // 0x1ccbe4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ccbe8:
    if (ctx->pc == 0x1CCBE8u) {
        ctx->pc = 0x1CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBE4u;
        // 0x1ccbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBECu;
        goto label_1ccbec;
    }
    ctx->pc = 0x1CCBE4u;
    {
        const bool branch_taken_0x1ccbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBE4u;
        // 0x1ccbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe4) {
            ctx->pc = 0x1CCC5Cu;
            goto label_1ccc5c;
        }
    }
    ctx->pc = 0x1CCBECu;
label_1ccbec:
    // 0x1ccbec: 0x0  nop
    ctx->pc = 0x1ccbecu;
    // NOP
label_1ccbf0:
    // 0x1ccbf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1ccbf4:
    if (ctx->pc == 0x1CCBF4u) {
        ctx->pc = 0x1CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF0u;
        // 0x1ccbf4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBF8u;
        goto label_1ccbf8;
    }
    ctx->pc = 0x1CCBF0u;
    {
        const bool branch_taken_0x1ccbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF0u;
        // 0x1ccbf4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf0) {
            ctx->pc = 0x1CCC18u;
            goto label_1ccc18;
        }
    }
    ctx->pc = 0x1CCBF8u;
label_1ccbf8:
    // 0x1ccbf8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1ccbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1ccbfc:
    // 0x1ccbfc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1ccc00:
    if (ctx->pc == 0x1CCC00u) {
        ctx->pc = 0x1CCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBFCu;
        // 0x1ccc00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC04u;
        goto label_1ccc04;
    }
    ctx->pc = 0x1CCBFCu;
    {
        const bool branch_taken_0x1ccbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbfc) {
            ctx->pc = 0x1CCC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCBFCu;
            // 0x1ccc00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC5Cu;
            goto label_1ccc5c;
        }
    }
    ctx->pc = 0x1CCC04u;
label_1ccc04:
    // 0x1ccc04: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1ccc08:
    // 0x1ccc08: 0x40f809  jalr        $v0
label_1ccc0c:
    if (ctx->pc == 0x1CCC0Cu) {
        ctx->pc = 0x1CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC08u;
        // 0x1ccc0c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC10u;
        goto label_1ccc10;
    }
    ctx->pc = 0x1CCC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCC10u);
        ctx->pc = 0x1CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC08u;
        // 0x1ccc0c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCC08u, 0x1CCC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCC10u;
label_1ccc10:
    // 0x1ccc10: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ccc14:
    if (ctx->pc == 0x1CCC14u) {
        ctx->pc = 0x1CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC10u;
        // 0x1ccc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC18u;
        goto label_1ccc18;
    }
    ctx->pc = 0x1CCC10u;
    {
        const bool branch_taken_0x1ccc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC10u;
        // 0x1ccc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc10) {
            ctx->pc = 0x1CCC5Cu;
            goto label_1ccc5c;
        }
    }
    ctx->pc = 0x1CCC18u;
label_1ccc18:
    // 0x1ccc18: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ccc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ccc1c:
    // 0x1ccc1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ccc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ccc20:
    // 0x1ccc20: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1ccc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1ccc24:
    // 0x1ccc24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1ccc28:
    if (ctx->pc == 0x1CCC28u) {
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC24u;
        // 0x1ccc28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC2Cu;
        goto label_1ccc2c;
    }
    ctx->pc = 0x1CCC24u;
    {
        const bool branch_taken_0x1ccc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC24u;
        // 0x1ccc28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc24) {
            ctx->pc = 0x1CCC5Cu;
            goto label_1ccc5c;
        }
    }
    ctx->pc = 0x1CCC2Cu;
label_1ccc2c:
    // 0x1ccc2c: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x1ccc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ccc30:
    // 0x1ccc30: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x1ccc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ccc34:
    // 0x1ccc34: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ccc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ccc38:
    // 0x1ccc38: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ccc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ccc3c:
    // 0x1ccc3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccc40:
    // 0x1ccc40: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ccc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ccc44:
    // 0x1ccc44: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1ccc44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1ccc48:
    // 0x1ccc48: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x1ccc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_1ccc4c:
    // 0x1ccc4c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_1ccc50:
    if (ctx->pc == 0x1CCC50u) {
        ctx->pc = 0x1CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC4Cu;
        // 0x1ccc50: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC54u;
        goto label_1ccc54;
    }
    ctx->pc = 0x1CCC4Cu;
    {
        const bool branch_taken_0x1ccc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ccc4c) {
            ctx->pc = 0x1CCC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC4Cu;
            // 0x1ccc50: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC58u;
            goto label_1ccc58;
        }
    }
    ctx->pc = 0x1CCC54u;
label_1ccc54:
    // 0x1ccc54: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1ccc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ccc58:
    // 0x1ccc58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ccc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ccc5c:
    // 0x1ccc5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccc60:
    // 0x1ccc60: 0x3e00008  jr          $ra
label_1ccc64:
    if (ctx->pc == 0x1CCC64u) {
        ctx->pc = 0x1CCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC60u;
        // 0x1ccc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC68u;
        goto label_1ccc68;
    }
    ctx->pc = 0x1CCC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC60u;
        // 0x1ccc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCC68u;
label_1ccc68:
    // 0x1ccc68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccc6c:
    // 0x1ccc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ccc70:
    // 0x1ccc70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc74:
    // 0x1ccc74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ccc78:
    // 0x1ccc78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ccc7c:
    // 0x1ccc7c: 0xc0729fa  jal         func_1CA7E8
label_1ccc80:
    if (ctx->pc == 0x1CCC80u) {
        ctx->pc = 0x1CCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC7Cu;
        // 0x1ccc80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC84u;
        goto label_1ccc84;
    }
    ctx->pc = 0x1CCC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC84u);
    ctx->pc = 0x1CCC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC7Cu;
    // 0x1ccc80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CCC7Cu, 0x1CCC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC84u;
label_1ccc84:
    // 0x1ccc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc88:
    // 0x1ccc88: 0xc07332c  jal         func_1CCCB0
label_1ccc8c:
    if (ctx->pc == 0x1CCC8Cu) {
        ctx->pc = 0x1CCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC88u;
        // 0x1ccc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC90u;
        goto label_1ccc90;
    }
    ctx->pc = 0x1CCC88u;
    SET_GPR_U32(ctx, 31, 0x1CCC90u);
    ctx->pc = 0x1CCC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC88u;
    // 0x1ccc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCCB0u, 0x1CCC88u, 0x1CCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC90u;
label_1ccc90:
    // 0x1ccc90: 0xc072a00  jal         func_1CA800
label_1ccc94:
    if (ctx->pc == 0x1CCC94u) {
        ctx->pc = 0x1CCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC90u;
        // 0x1ccc94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC98u;
        goto label_1ccc98;
    }
    ctx->pc = 0x1CCC90u;
    SET_GPR_U32(ctx, 31, 0x1CCC98u);
    ctx->pc = 0x1CCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC90u;
    // 0x1ccc94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CCC90u, 0x1CCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC98u;
label_1ccc98:
    // 0x1ccc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ccc9c:
    // 0x1ccc9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ccc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccca0:
    // 0x1ccca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccca4:
    // 0x1ccca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccca8:
    // 0x1ccca8: 0x3e00008  jr          $ra
label_1cccac:
    if (ctx->pc == 0x1CCCACu) {
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCB0u;
        goto label_fallthrough_0x1ccca8;
    }
    ctx->pc = 0x1CCCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccca8:
    ctx->pc = 0x1CCCB0u;
}
